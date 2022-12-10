#include "tupel.h"

template <typename T, typename B>
int vergleiche(Tupel<T, B> p1, Tupel<T, B> p2)
{
    if (p1.Komponente1 > p2.Komponente1 && p1.Komponente2 > p2.Komponente2)
        return 1;
    if (p1.Komponente2 < p2.Komponente2 && p1.Komponente1 < p2.Komponente1)
        return -1;
    else
        return 0;
}

template int vergleiche<int, int>(Tupel<int, int> p1, Tupel<int, int> p2);
template int vergleiche<std::string, int>(Tupel<std::string, int> p1, Tupel<std::string, int> p2);