//
// Created by majvax on 5/23/2025.
//

#pragma once

#include <vector>
#include <array>
class Player {};
class Case {};

class Board
{
    std::vector<Player> players;
    std::array<Case, 32> cases;
};
