set(PROJECTNAME TrafficLights)

set(INC
    include/TrafficLights.h)

set(SRC
    src/main.cpp
    src/TrafficLights.cpp)
    
include_directories(include)

add_executable(${PROJECTNAME} ${INC} ${SRC})
set_property(TARGET ${PROJECTNAME} PROPERTY FOLDER "Problems")
