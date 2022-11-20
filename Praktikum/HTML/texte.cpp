#include <iostream>
#include "texte.h"

void spalte_ab_erstem(char zc, std::string &eingabe, std::string &e_t, std::string &z_t)
{
    int d;
    for (int i = 0; i < eingabe.length(); i++)
    {

        if (eingabe.at(i) == zc)
        {
            d = i;

            break;
        }
        e_t += eingabe.at(i);
    }

    if (d == 0)
        z_t = "";

    else
    {
        for (int i = 0; i < eingabe.length() - d - 1; i++)
        {
            z_t += eingabe.at(i + d + 1);
        }
    }
    eingabe.erase(0, d + 1);
}
std::string trimme(std::string s)
{
    std::string s_t = "";
    char ch = ' ';
    int d = 0;
    for (int i = 0; i < s.length(); i++)
    {

        if (s.at(i) != ' ')
        {

            d = i;
            break;
        }
    }

    for (int i = 0; i < s.length() - d; i++)
    {
        if (s.at(i + d) == ' ')
            break;
        else
            s_t += s.at(i + d);
    }

    return s_t;
}