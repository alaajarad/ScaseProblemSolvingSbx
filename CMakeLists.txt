# required version
cmake_minimum_required(VERSION 2.8.11)
cmake_policy(SET CMP0043 NEW)

# RelWithDebInfo and MinSizeRel are somewhat broken, don't attempt to use them
set(CMAKE_CONFIGURATION_TYPES Release;Debug CACHE TYPE INTERNAL FORCE)

set(ENABLE_OPTIMIZATIONS TRUE CACHE BOOL "Enable compiler optimizations in user projects in release (disable this to allow debugging).")

# enable parallel building for VS
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /MP")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /EHsc")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /Zi")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /Qpar")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /GL")
set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} /LTCG")
set(CMAKE_STATIC_LINKER_FLAGS "${CMAKE_STATIC_LINKER_FLAGS} /LTCG")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /LTCG /DEBUG")
set(CMAKE_MODULE_LINKER_FLAGS "${CMAKE_MODULE_LINKER_FLAGS} /LTCG")

if(ENABLE_OPTIMIZATIONS)
  set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /O2")
  MESSAGE(STATUS "Enabling Optimization: " ${ENABLE_OPTIMIZATIONS})
else(ENABLE_OPTIMIZATIONS)
  set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /Od")
  MESSAGE(STATUS "Enabling Optimization: " ${ENABLE_OPTIMIZATIONS})
endif(ENABLE_OPTIMIZATIONS)

# categorize projects
SET_PROPERTY(GLOBAL PROPERTY USE_FOLDERS ON)

# this is the research & development framework project
project(ProblemSolving CXX C) #

enable_testing()
add_custom_target(BUILD_TESTS)
add_custom_target(TEST COMMAND ${CMAKE_CTEST_COMMAND} ${CMAKE_CURRENT_SOURCE_DIR} -C $<CONFIGURATION> --verbose)
add_dependencies(TEST BUILD_TESTS)
set_property(TARGET TEST PROPERTY FOLDER "Tests")

set(gtest_force_shared_crt ON)
add_subdirectory(googletest)

# additinal includes
include_directories(Problems) # for gtests

# recurse into application directory
add_subdirectory(Problems)
add_subdirectory(Tests)
