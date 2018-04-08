cmake_minimum_required (VERSION 2.8)
project (Hello)

configure_file (
  "${PROJECT_SOURCE_DIR}/HelloConfig.h.in"
  "${PROJECT_BINARY_DIR}/HelloConfig.h"
)

include_directories("${PROJECT_BINARY_DIR}")

option (USE_MyMATH "use my lib as library" ON)

if (USE_MyMATH)
    include_directories("${PROJECT_SOURCE_DIR}/MathFunctions")
    add_subdirectory(MathFunctions)
endif (USE_MyMATH)

add_executable(Hello hello.c)
target_link_libraries(Hello MathFunctions)
