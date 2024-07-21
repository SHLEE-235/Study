cmake_minimum_required(VERSION 3.15)
project(server)

# 서버 소스 파일 설정
set(SERVER_SOURCES server.cpp)

# 실행 파일 생성
add_executable(server ${SERVER_SOURCES})

# MyLib 라이브러리 링크
target_link_libraries(server MyLib)

# MyLib의 헤더 파일 경로 추가