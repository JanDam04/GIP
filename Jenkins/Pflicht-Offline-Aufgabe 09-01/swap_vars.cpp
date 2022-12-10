#include "swap_vars.h"

// template<typename T>
// T swap_vars(T obj1, T obj2);

template <typename T>
void swap_vars(T &obj1, T &obj2)
{
    T tmp = obj2;
    obj2 = obj1;
    obj1 = tmp;
}

template void swap_vars(int &obj1, int &obj2);
template void swap_vars(std::string &obj1, std::string &obj2);