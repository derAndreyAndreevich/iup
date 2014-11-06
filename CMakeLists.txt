project(IUP)
cmake_minimum_required(VERSION 2.8)
aux_source_directory(. SRC_LIST)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SRC_LIST
  main.cpp
  widget.cpp
  dialog.cpp
  button.cpp
  vbox.cpp
  include/iupgui.h
)

link_directories(/usr/lib)

add_executable(${PROJECT_NAME} ${SRC_LIST})
target_link_libraries (${PROJECT_NAME} iup)

