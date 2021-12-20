# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)

# 项目信息
project (main)


aux_source_directory(. DIR_SRCS)
add_subdirectory(func)

# 指定生成目标
add_executable(main ${DIR_SRCS})

target_link_libraries(main add)
