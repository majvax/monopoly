//
// Created by majvax on 5/23/2025.
//

#pragma once
#include <iostream>


struct Proxy;

inline std::ostream& operator<<(std::ostream& os, const Proxy& vec) {
    return os;
}

enum struct CaseViewLine
{

};

struct Proxy
{


};



class CaseView
{

public:
    Proxy operator[](CaseViewLine line);
};
