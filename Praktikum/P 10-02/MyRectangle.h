#pragma once
#include <iostream>
#include <string>
#include "MyCanvas.h"

class MyRectangle
{
    unsigned int x1, y1;
    unsigned int x2, y2;
    MyCanvas *canvas_ptr;

public:
    unsigned int get_x1() { return x1; };
    unsigned int get_x2() { return x2; };
    unsigned int get_y1() { return y1; };
    unsigned int get_y2() { return y2; };
    MyCanvas *get_canvas_ptr() { return canvas_ptr; };

    void draw();

    MyRectangle(MyCanvas &canvas, unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2) : x1(x1), y1(y1), x2(x2), y2(y2), canvas_ptr(&canvas){};
};