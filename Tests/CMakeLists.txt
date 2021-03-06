macro(make_simple_test MYMODULE MYTESTFUNC MYTESTFILE EXPECT_FAILURE)
  # allow to mark a test as expected failure by passing an extra arg, e.g. make_simple_test(foo bar rawr OFF)
  # if(${ARGC} GREATER 3)
    # set(EXPECT_FAILURE ON)
  # else()
    # set(EXPECT_FAILURE OFF)
  # endif()
  set(TESTTARGET ${MYMODULE}_${MYTESTFUNC})
  set(TESTSRC ${CMAKE_CURRENT_BINARY_DIR}/${TESTTARGET}.cpp)
  set(TESTFILE ${CMAKE_CURRENT_SOURCE_DIR}/${MYTESTFILE}.cpp)
  configure_file(${CMAKE_SOURCE_DIR}/Tests/test.cpp.in ${TESTSRC})
  add_executable(${TESTTARGET} EXCLUDE_FROM_ALL ${TESTSRC} ${ARGN})
  if(NOT MSVC)
    ADD_CUSTOM_COMMAND(TARGET ${TESTTARGET} POST_BUILD
      COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:${TESTTARGET}> ${CMAKE_BINARY_DIR}/${TESTTARGET}.debug
      COMMAND ${CMAKE_STRIP} -g $<TARGET_FILE:${TESTTARGET}>)
  endif()
  target_link_libraries(${TESTTARGET} gtest)
  target_include_directories(${TESTTARGET} PRIVATE ${CMAKE_SOURCE_DIR}/contrib/gtest/include)
  if(DEFINED TESTDEPS)
    target_link_libraries(${TESTTARGET} ${TESTDEPS})
  endif()
  if("${TEST_SCRIPT}" STREQUAL "")
    add_test(NAME ${TESTTARGET} COMMAND $<TARGET_FILE:${TESTTARGET}>)
  else()
    add_test(NAME ${TESTTARGET} COMMAND ${TEST_SCRIPT} $<TARGET_FILE:${TESTTARGET}>)
  endif()
  set_property(TARGET ${TESTTARGET} PROPERTY FOLDER "Tests/${MYMODULE}")
  if(EXPECT_FAILURE)
    set_tests_properties(${TESTTARGET} PROPERTIES WILL_FAIL TRUE)
  endif()
  add_dependencies(BUILD_TESTS ${TESTTARGET})
endmacro()

macro(make_static_assert_test MYMODULE MYTESTFUNC MYTESTFILE MSG)
  set(TESTSRC ${CMAKE_CURRENT_BINARY_DIR}/${MYTESTFILE}_${MYTESTFUNC}.cpp)
  set(TESTFILE ${CMAKE_CURRENT_SOURCE_DIR}/${MYTESTFILE}.cpp)
  set(TESTTARGET ${MYMODULE}_${MYTESTFUNC})
  configure_file(${CMAKE_SOURCE_DIR}/test/test.cpp.in ${TESTSRC})
  add_executable(${TESTTARGET} EXCLUDE_FROM_ALL ${TESTSRC})
  set_target_properties(${TESTTARGET} PROPERTIES EXCLUDE_FROM_DEFAULT_BUILD 1)
  target_link_libraries(${TESTTARGET} gtest)
  target_include_directories(${TESTTARGET} PRIVATE ${CMAKE_SOURCE_DIR}/contrib/gtest/include)
  if(DEFINED TESTDEPS)
    target_link_libraries(${TESTTARGET} ${TESTDEPS})
  endif()
  add_test(NAME ${TESTTARGET} COMMAND ${CMAKE_COMMAND} --build . --target ${TESTTARGET} --config $<CONFIGURATION> WORKING_DIRECTORY ${CMAKE_BINARY_DIR})
  set_property(TARGET ${TESTTARGET} PROPERTY FOLDER "Tests/${MYMODULE}")
  set_tests_properties(${TESTTARGET} PROPERTIES PASS_REGULAR_EXPRESSION "${MSG}")
endmacro()

configure_file("${CMAKE_CURRENT_SOURCE_DIR}/CTestCustom.cmake" "${CMAKE_BINARY_DIR}/CTestCustom.cmake")


add_subdirectory(Problems)
