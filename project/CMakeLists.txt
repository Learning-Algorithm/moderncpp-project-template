# MIT License 
# Copyright (c) 2018-Today Michele Adduci <adduci@tutanota.com>
#
# Project-related instructions

# Activate Testing, if given
if(BUILD_TESTING)
  enable_testing()
endif()

#####################################
# Define Targets
#####################################
add_subdirectory(hellolib)
add_subdirectory(helloapp)
add_subdirectory(grasp3d)
add_subdirectory(test)

#####################################
# Define Install Targets
#####################################
install(TARGETS
  hellolib
  helloapp
  grasp3d
  test
  RUNTIME DESTINATION bin
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
  PUBLIC_HEADER DESTINATION include
)

#install(
#  FILES 
#    ${CMAKE_SOURCE_DIR}/project/hellolib/include/hellolib.h 
#    ${CMAKE_BINARY_DIR}/exports/hellolib_export.h
#    ${CMAKE_SOURCE_DIR}/project/grasp3d/include/grasplib.h 
#    ${CMAKE_BINARY_DIR}/exports/grasplib_export.h
#  DESTINATION 
#    include/grasplib)

install(
  DIRECTORY 
    ${CMAKE_SOURCE_DIR}/project/hellolib
    ${CMAKE_SOURCE_DIR}/project/grasp3d
    ${CMAKE_BINARY_DIR}/exports/
  DESTINATION 
    include)

install(FILES  
  ${CMAKE_SOURCE_DIR}/LICENSE
DESTINATION .)