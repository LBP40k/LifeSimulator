cmake_minimum_required(VERSION 3.16)
project(LifeSimulator)

set(CMAKE_CXX_STANDARD 17)

# Point to SDL2
set(SDL2_PATH "C:/SDL2")

include_directories(${SDL2_PATH}/include)
link_directories(${SDL2_PATH}/lib)

add_executable(LifeSimulator src/main.cpp)

target_link_libraries(LifeSimulator 
    SDL2main 
    SDL2
)