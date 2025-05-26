//
// Created by majvax on 5/23/2025.
//

#pragma once
#include <string_view>


class Case
{
    std::string_view name;
public:
    [[nodiscard]] std::string_view get_name() const noexcept { return name; }
};
