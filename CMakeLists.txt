cmake_minimum_required(VERSION 3.9.0)
project(myworld)

set(CMAKE_CXX_STANDARD 11)

add_executable(myworld main.cpp Shader.cpp Shader.h A1.cpp construct.h Control.h controlFunction.h MainFun.h stb_image.cpp stb_image.h WenLi.h glad.c)

target_link_libraries(myworld glfw3 GL m Xrandr Xi X11 Xxf86vm pthread dl Xinerama Xcursor)
