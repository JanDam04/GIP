#include "sort_three_vars.h"

// template<typename T>
// T swap_vars(T obj1, T obj2);

template <typename T>
void sort_three_vars(T &obj1, T &obj2, T &obj3)
{
    T high, mid, low;

    if (obj1 > obj2 && obj1 > obj3)
    {
        high = obj1;
        if (obj2 > obj3)
        {
            mid = obj2;
            low = obj3;
        }
        else
        {
            mid = obj3;
            low = obj2;
        }
        obj1 = low;
        obj2 = mid;
        obj3 = high;
        return;
    }
    if (obj2 > obj1 && obj2 > obj3)
    {
        high = obj2;
        if (obj1 > obj3)
        {
            mid = obj1;
            low = obj3;
        }
        else
        {
            mid = obj3;
            low = obj1;
        }
        obj1 = low;
        obj2 = mid;
        obj3 = high;
        return;
    }
    else
    {
        high = obj3;
        if (obj1 > obj2)
        {
            mid = obj1;
            low = obj2;
        }
        else
        {
            mid = obj2;
            low = obj1;
        }
        obj1 = low;
        obj2 = mid;
        obj3 = high;
        return;
    }
}
template void sort_three_vars(int &obj1, int &obj2, int &obj3);
template void sort_three_vars(std::string &obj1, std::string &obj2, std::string &obj3);