set(PROJECTNAME sample)

set(INC
    include/sample.h)

set(SRC
    src/main.cpp
    src/sample.cpp)

include_directories(include)

add_executable(${PROJECTNAME} ${INC} ${SRC})
set_property(TARGET ${PROJECTNAME} PROPERTY FOLDER "Problems")
