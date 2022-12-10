#include <iostream>
#pragma once

class RGB_Color
{
    int red;
    int green;
    int blue;

public:
    RGB_Color(int rot, int gruen, int blau) : red(rot), green(gruen), blue(blau){};
    RGB_Color()
    {
        red = 255;
        green = 255;
        blue = 255;
    };
    void set_color(int rot, int gruen, int blau);
    int get_green() { return green; };
    int get_blue() { return blue; };
    int get_red() { return red; };
    void display();
    bool input_color();
};