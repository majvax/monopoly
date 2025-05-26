//
// Created by majvax on 5/23/2025.
//

#include "board_view.hpp"

#include <cstdint>
#include <iomanip>


void BoardView::draw(const Board &board, std::ostream &stream)
{
    for (uint16_t i = 16; i < 27; ++i)
    {
        stream << "====== ";
    }
    stream << '\n';
    for (uint16_t i = 16; i < 27; ++i)
    {
       stream << "|    | ";
    }
    stream << '\n';

    for (uint16_t i = 16; i < 27; ++i)
    {
        stream << "====== ";
    }
    stream << '\n';





    for (uint16_t i = 15; i > 10; --i)
    {
        stream << "====== " << std::string(7*9, ' ') << "====== \n";
        stream << "|    | " << std::string(7*9, ' ') << "|    | \n";
        stream << "====== " << std::string(7*9, ' ') << "====== \n";


    }




    for (int16_t i = 10; i >= 0; --i)
    {
        stream << "====== ";
    }
    stream << '\n';
    for (int16_t i = 10; i >= 0; --i)
    {
        stream << "|    | ";
    }
    stream << '\n';

    for (int16_t i = 10; i >= 0; --i)
    {
        stream << "====== ";
    }
    stream << '\n';

}
