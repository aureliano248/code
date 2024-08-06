cmake_minimum_required(VERSION 3.28)

# 设置项目名称
project(MyProject)

# 指定C++标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 设置默认的构建类型为Release
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release CACHE STRING "Choose the type of build (Debug or Release)" FORCE)
endif()

# 添加可执行文件
add_executable(main 
main.cpp
Message.cpp
Message.h
Folder.cpp
Folder.h
)

# 设置不同构建类型的编译选项
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")
