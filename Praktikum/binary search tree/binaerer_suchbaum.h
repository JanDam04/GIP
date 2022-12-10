#pragma once
#include <iostream>

namespace suchbaum
{
    struct BaumKnoten
    {
        int data;
        BaumKnoten *rechts;
        BaumKnoten *links;
    };
    void ausgeben(BaumKnoten *&anker);

    void go_right(BaumKnoten *&ptr, int wert);
    void go_left(BaumKnoten *&ptr, int wert);

    void einfuegen(BaumKnoten *&anker, int wert);

    void knoten_ausgeben(BaumKnoten *knoten, unsigned int tiefe);

}