make_simple_test("Problems" Subtraction test_subtraction OFF
    ../../Problems/Subtraction/src/subtraction.cpp)

target_include_directories(${TESTTARGET} PUBLIC ../../Problems/Subtraction/include)

configure_file(../GroundTruth/subtraction.in subtraction.in COPYONLY)
configure_file(../GroundTruth/subtraction.out subtraction.out COPYONLY)

make_simple_test("Problems" Gears test_gears OFF
    ../../Problems/Gears/src/gears.cpp)

target_include_directories(${TESTTARGET} PUBLIC ../../Problems/Gears/include)

configure_file(../GroundTruth/gears.in gears.in COPYONLY)
configure_file(../GroundTruth/gears.out gears.out COPYONLY)

