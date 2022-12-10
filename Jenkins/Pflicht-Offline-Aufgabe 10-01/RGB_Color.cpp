#include "RGB_Color.h"

void RGB_Color::set_color(int rot, int gruen, int blau)
{
    red = rot;
    green = gruen;
    blue = blau;
}

void RGB_Color::display()
{
    std::cout << "rot: " << red << " gruen: " << green << " blau: " << blue << std::endl;
}
bool RGB_Color::input_color()
{

    int rot;
    int blau;
    int gruen;
    std::cout << "rot (0...255): ? ";
    std::cin >> rot;
    if (rot >= 0 && rot <= 255)
        ;
    else
        return false;
    std::cout << "gruen (0...255): ? ";
    std::cin >> gruen;
    if (gruen >= 0 && gruen <= 255)
        ;
    else
        return false;
    std::cout << "blau (0...255): ? ";
    std::cin >> blau;
    if (blau >= 0 && blau <= 255)
        ;
    else
        return false;

    if ((rot >= 0 && rot <= 255) && (blau >= 0 && blau <= 255) && (gruen >= 0 && gruen <= 255))
    {
        RGB_Color::set_color(rot, gruen, blau);
        return true;
    }
    else
        return false;
}