set(PROJECTNAME traffic_lights)

set(INC
    include/traffic_lights.h)

set(SRC
    
    src/traffic_lights.cpp)
    
include_directories(include)

add_executable(${PROJECTNAME} ${INC} ${SRC})
set_property(TARGET ${PROJECTNAME} PROPERTY FOLDER "Problems")
