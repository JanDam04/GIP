#include <iostream>
#include <string>
#pragma once

class MyCanvas
{
    unsigned int size_x;
    unsigned int size_y;
    char *canvas_array_ptr = new char[size_x * size_y + 1];

public:
    MyCanvas(unsigned int size_1, unsigned int size_2) : size_x(size_1), size_y(size_2) /*, canvas_array_ptr(new char[size_1 * size_2 - 1])*/
    {
        void init();
        {

            for (int i = 0; i < get_size_x() * get_size_y(); i++)
            {

                canvas_array_ptr[i] = '.';
            }
        }
    };

        MyCanvas(unsigned int size_1, unsigned int size_2, char *) : size_x(size_1), size_y(size_2), canvas_array_ptr(new char[size_1 * size_2])
    {
        void init();
        {

            for (int i = 0; i < get_size_x() * get_size_y(); i++)
            {

                canvas_array_ptr[i] = '.';
            }
        }
    };
    unsigned int get_size_x() const { return size_x; };
    unsigned int get_size_y() const { return size_y; };
    char *get_canvas_array_ptr() { return canvas_array_ptr; };
    void set_size_x(unsigned int size) { size_x = size; };
    void set_size_y(unsigned int size) { size_y = size; };

    void draw_rectangle(unsigned int x1, unsigned int x2, unsigned int y1, unsigned int y2);

    void set(unsigned int x, unsigned int y, char c);
    std::string to_string() const;
    void print() const;
    char get(unsigned int x, unsigned int y) const;

    MyCanvas(const MyCanvas &orig)
    {
        size_x = orig.size_x;
        size_y = orig.size_y;
        canvas_array_ptr = new char[size_x * size_y];
        for (int i = 0; i < size_x * size_y; i++)
        {
            canvas_array_ptr[i] = orig.canvas_array_ptr[i];
        }
    };

    MyCanvas &operator=(const MyCanvas &orig)
    {

        size_x = orig.size_x;
        size_y = orig.size_y;
        canvas_array_ptr = new char[size_x * size_y];
        for (int i = 0; i < size_x * size_y; i++)
        {
            canvas_array_ptr[i] = orig.canvas_array_ptr[i];
        }
        return *this;
    }
    ~MyCanvas()
    {
        delete[] canvas_array_ptr;
    }
};
