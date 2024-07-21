cmake_minimum_required(VERSION 3.15)
project(client)

# 서버 소스 파일 설정
set(CLIENT_SOURCES client.cpp)

# 실행 파일 생성
add_executable(client ${CLIENT_SOURCES})

# MyLib 라이브러리 링크
target_link_libraries(client MyLib)