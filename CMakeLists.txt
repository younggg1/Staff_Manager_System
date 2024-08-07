cmake_minimum_required(VERSION 3.28)
project(Staff_Manager_System)

set(CMAKE_CXX_STANDARD 17)

add_executable(Staff_Manager_System main.cpp employee.cpp manager.cpp boss.cpp
        workerManager.cpp
        userLogin.h)
