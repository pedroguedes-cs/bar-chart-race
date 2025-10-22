#pragma once

#include <string>
#include <vector>

#include "bar.hpp"

class BarChart
{
    std::string barChartTitle;
    int barChartFPS;
    int barChartNumberOfFrames;
    std::vector<std::vector<Bar>> barChartData;

    public:
        // Constructors
        BarChart();

        // Setters
        
        // Getters

        // Manipulation

        // Animation
};