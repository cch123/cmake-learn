# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_LIB_P 变量

aux_source_directory(. DIR_LIB_P)

# 指定生成 Print 静态链接库
add_library(Print ${DIR_LIB_P})
