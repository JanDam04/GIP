#include "RGB_Color.h"

int main()
{
    RGB_Color Weiss(255, 255, 255);
    RGB_Color Cyan(0, 255, 255);
    RGB_Color Gelb(255, 255, 0);
    RGB_Color Magenta(255, 0, 255);
    RGB_Color farbe1(255, 255, 128);
    RGB_Color farbe2 = farbe1;
    std::cout << "Weiss: " << std::endl;
    Weiss.display();
    std::cout << "\n";
    std::cout << "Tuerkis: " << std::endl;
    Cyan.display();
    std::cout << "\n";
    std::cout << "Gelb: " << std::endl;
    Gelb.display();
    std::cout << "\n";
    std::cout << "Magenta: " << std::endl;
    Magenta.display();
    std::cout << "\n";
    std::cout << "Farbe1: " << std::endl;
    farbe1.display();
    std::cout << "\n";
    std::cout << "Farbe2: " << std::endl;
    farbe2.display();
    std::cout << "\n";
    std::cout << "Neu-Eingabe von Farbe 2: " << std::endl;
    if (farbe2.input_color() == false)
        std::cout << "Falsche Eingabe" << std::endl;
    else
    {
        std::cout << "Farbe 2 jetzt: " << std::endl;
        farbe2.display();
    }

    system("pause");
    return 0;
}