set(PROJECTNAME subtraction)

set(INC
    include/subtraction.h)

set(SRC
    src/main.cpp
    src/subtraction.cpp)
    
include_directories(include)

add_executable(${PROJECTNAME} ${INC} ${SRC})
set_property(TARGET ${PROJECTNAME} PROPERTY FOLDER "Problems")
