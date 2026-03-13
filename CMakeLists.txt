cmake_minimum_required(VERSION 3.10.0)
project(cpp-petpet VERSION 0.1.0 LANGUAGES C CXX)
set(CXX_STANDARD 11)


add_subdirectory(libs/wxWidgets)

include_directories(include)

set(HEADER_FILES 
    include/guiApplication.hpp
    include/guiFrame.hpp
)

set(SOURCE_FILES 
    src/main.cpp
    src/guiFrame.cpp
    src/guiApplication.cpp
)

add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${INCLUDE_FILES})
target_link_libraries(${PROJECT_NAME} PUBLIC wx::net wx::core wx::base)

