cmake_minimum_required(VERSION 2.8)

project(Hello)

# 该命令会查找指定目录下的所有源文件，然后将结果存进指定变量名。其语法如下：
# aux_source_directory(<dir> <variable>)
aux_source_directory(. DIR_SRCS)

add_subdirectory(p)

# 这样，CMake 会将当前目录所有源文件的文件名赋值给变量 DIR_SRCS 
# 再指示变量 DIR_SRCS 中的源文件需要编译成一个名称为 Hello 的可执行文件。
add_executable(Hello ${DIR_SRCS})

# 添加链接库
target_link_libraries(Hello Print)