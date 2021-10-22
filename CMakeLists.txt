cmake_minimum_required(VERSION 3.14)
project(cimg-playground)

include(FetchContent)

FetchContent_Declare(
    cimg
    GIT_REPOSITORY https://github.com/dtschump/CImg.git
    GIT_TAG v.221
)

FetchContent_MakeAvailable(cimg)

include_directories(${cimg_SOURCE_DIR})

add_executable(${PROJECT_NAME}
    "src/main.cpp"
)

target_link_libraries(${PROJECT_NAME} 
    gdi32
)