#pragma once

#include <string>

#include "category.hpp"

struct Bar
{

    using ValueType = int;

    std::string barName;
    ValueType barScore;
    BarCategory barCategory;
};