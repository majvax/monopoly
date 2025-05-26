//
// Created by majvax on 5/23/2025.
//

#pragma once

#include <iostream>

#include "../core/board.hpp"


class BoardView {
public:
    static void draw(const Board &board, std::ostream &stream = std::cout);
};
