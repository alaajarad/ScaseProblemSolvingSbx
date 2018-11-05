set(PROJECTNAME gears)

set(INC
    include/gears.h)

set(SRC
    src/main.cpp
    src/gears.cpp)
    
include_directories(include)

add_executable(${PROJECTNAME} ${INC} ${SRC})
set_property(TARGET ${PROJECTNAME} PROPERTY FOLDER "Problems")
