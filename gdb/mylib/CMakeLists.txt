cmake_minimum_required(VERSION 3.15)
project(MyLib)

# 라이브러리 소스 파일 설정
set(MYLIB_SOURCES mylib.cpp)

# 정적 라이브러리 생성
add_library(MyLib STATIC ${MYLIB_SOURCES})

# 포함 디렉토리 설정
target_include_directories(MyLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
