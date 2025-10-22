#pragma once

#include <string>
#include <vector>

#include "bar.hpp"

class BarChart
{
    std::string barChartTitle;
    int barChartVisibleBars;
    int barChartFPS;
    std::string barChartSourcePath;
    std::vector<std::vector<Bar>> barChartData;

    public:
        // Constructors
        BarChart();

        // Setters
        void setBarChartTitle(std::string title);
        void setBarChartVisibleBars(int visibleBars);
        void setBarChartFPS(int fps);

        // Getters
        std::string getBarChartTitle();
        int getBarChartVisibleBars();
        int getBarChartFPS();

        // Manipulation
        void loadFromFile();
        void sortFrames();

        // Animation
        void renderBarChart();
};