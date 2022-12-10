#include "MyCanvas.h"
#include "MyRectangle.h"
class MyCanvas;

void MyCanvas::set(unsigned int x, unsigned int y, char c)
{
    canvas_array_ptr[y * get_size_x() + x] = c;
}
char MyCanvas::get(unsigned int x, unsigned int y) const
{
    char ch = canvas_array_ptr[y * get_size_x() + x];
    return ch;
}
std::string MyCanvas::to_string() const
{
    std::string sum = "";
    for (int i = 0; i < get_size_y() * get_size_x(); i++)
    {

        if (i % get_size_x() == 0 && i != 0)
        {
            sum += "\n";
        }

        sum += canvas_array_ptr[i];
    }
    sum += "\n";

    return sum;
}
void MyCanvas::print() const
{
    std::string s = to_string();
    std::cout << s;
    std::cout << std::endl;
}

void MyCanvas::draw_rectangle(unsigned int x1, unsigned int x2, unsigned int y1, unsigned int y2)
{
    unsigned int x_dif = x2 - x1;
    unsigned int y_dif = y2 - y1;

    for (int j = 0; j < y_dif + 1; j++)
    {
        for (int i = 0; i < x_dif + 1; i++)
        {
            canvas_array_ptr[(j + y1) * get_size_x() + (x1 + i)] = '#';
        }
    }
}