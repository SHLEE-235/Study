cmake_minimum_required(VERSION 3.15)
project(BuildTest)

# 빌드 타입을 디버그로 설정
set(CMAKE_BUILD_TYPE Debug)

# 컴파일러에게 디버깅 심볼을 포함하도록 지시
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out/lib)

# MyLib 디렉토리 추가
add_subdirectory(mylib)

# Server 디렉토리 추가
add_subdirectory(server)

# Client 디렉토리 추가
add_subdirectory(client)