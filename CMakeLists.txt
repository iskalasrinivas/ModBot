cmake_minimum_required(VERSION 2.8.3)
project(modbot)

## Compile as C++11, supported in ROS Kinetic and newer
 add_compile_options(-std=c++14)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  geometry_msgs
  roscpp
)

catkin_package(
  INCLUDE_DIRS include/modbot
#  LIBRARIES group6_rwa4
  CATKIN_DEPENDS geometry_msgs
#  DEPENDS system_lib
)

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
include_directories(include/modbot ${catkin_INCLUDE_DIRS} )


## Declare a C++ executable
## With catkin_make all packages are built within a single CMake context
## The recommended prefix ensures that target names across packages don't collide
# add_executable(${PROJECT_NAME}_node src/ariac_manager_node.cpp)
add_executable(motor src/main.cpp src/motorpublisher.cpp)


## Add cmake target dependencies of the executable
## same as for the library above
add_dependencies(motor  ${catkin_EXPORTED_TARGETS})

## Specify libraries to link a library or executable target against
  target_link_libraries(motor
    ${catkin_LIBRARIES}
  )



