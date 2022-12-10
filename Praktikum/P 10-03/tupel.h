#include <iostream>
#pragma once

template <typename T, typename B>
struct Tupel
{

    T Komponente1;
    B Komponente2;
};
template <typename T, typename B>
int vergleiche(Tupel<T, B> p1, Tupel<T, B> p2);
