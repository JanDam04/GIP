#include "MyCanvas.h"
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

        if (canvas_array_ptr[i] != '.')
            sum += canvas_array_ptr[i];
        else
            sum += " ";
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