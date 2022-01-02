cmake_minimum_required(VERSION 3.0)
project(Quick_start)

file(GLOB PROJECT_HEADERS           *.h
                                    )
file(GLOB PROJECT_SOURCES           *.cpp
                                    )

add_executable(${PROJECT_NAME}      
                                ${PROJECT_SOURCES}
                                ${PROJECT_HEADERS}
                                )

target_include_directories(${PROJECT_NAME} PUBLIC
                           ${eigen_study_SOURCE_DIR}/eigen-3.4.0/ 
             )