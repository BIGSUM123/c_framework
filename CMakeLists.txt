cmake_minimum_required(VERSION 3.15)

# 项目名和版本号
project(FutureProject VERSION 1.0 LANGUAGES C)

# 设置C标准
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

# 包含头文件的目录
include_directories(${PROJECT_SOURCE_DIR}/include)

# 查找所有源文件
file(GLOB_RECURSE SOURCES
    "${PROJECT_SOURCE_DIR}/src/*.c"
    "${PROJECT_SOURCE_DIR}/components/*.c"
)

# 添加可执行文件
add_executable(future ${SOURCES})

# 打印状态信息
message(STATUS "Project Name: ${PROJECT_NAME}")
message(STATUS "Project Source Directory: ${PROJECT_SOURCE_DIR}")
message(STATUS "CMAKE_C_COMPILER: ${CMAKE_C_COMPILER}")

# 如果有额外的库依赖，可以在这里设置
# target_link_libraries(future PRIVATE your_library)
