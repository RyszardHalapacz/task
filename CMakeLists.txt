project(Exorigo-Upos)

cmake_minimum_required(VERSION 3.11)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


enable_testing()


add_subdirectory(solutions)

add_compile_options(${PROJECT_NAME} PUBLIC -Wall -Werror -Wpedantic -Wextra -g)