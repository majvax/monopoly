cmake_minimum_required(VERSION 3.31)
project(monopoly)

set(CMAKE_CXX_STANDARD 23)

add_executable(monopoly main.cpp
        core/board.cpp
        core/board.hpp
        core/player.cpp
        core/player.hpp
        view/board_view.cpp
        view/board_view.hpp
        view/views.hpp
        core/case.cpp
        core/case.hpp
        view/case_view.cpp
        view/case_view.hpp
)
