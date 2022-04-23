#add_library(solutions)
#target_sources(
  #solutions
  #PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include/lib.cpp
 # PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include/lib.h
  #)

#target_include_directories(solutions PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
#add_executable(${PROJECT_NAME}_task1 main.cpp)
#target_link_libraries(${PROJECT_NAME} solutions)

add_subdirectory(task_1)
add_subdirectory(task_2)
add_subdirectory(task_3)
add_subdirectory(task_4)