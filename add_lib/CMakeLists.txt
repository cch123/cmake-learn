cmake_minimum_required (VERSION 2.8)
project (Hello)

# 注意 option 必须在 configure_file 前面
# 因为 configure_file 中的配置转换依赖于 option 的判断
option (USE_MyMATH "use my lib as library" ON)

# 可以做一些平台相关的文件生成、配置替换
configure_file (
  "${PROJECT_SOURCE_DIR}/HelloConfig.h.in"
  "${PROJECT_BINARY_DIR}/HelloConfig.h"
)

include_directories("${PROJECT_BINARY_DIR}")

if (USE_MyMATH)
    include_directories("${PROJECT_SOURCE_DIR}/MathFunctions")
    add_subdirectory(MathFunctions)
endif (USE_MyMATH)

add_executable(Hello hello.c)
target_link_libraries(Hello MathFunctions)
