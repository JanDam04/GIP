#include "binaerer_suchbaum.h"

void suchbaum::go_right(BaumKnoten *&ptr, int wert)
{
    do
    {
        if (ptr->rechts == nullptr)
            break;

        ptr = ptr->rechts;
        if (wert < ptr->data)
            break;
    } while (ptr != nullptr);
}
void suchbaum::go_left(BaumKnoten *&ptr, int wert)
{

    do
    {
        if (ptr->links == nullptr)
            break;
        ptr = ptr->links;
        if (wert > ptr->data)
            break;

    } while (ptr != nullptr);
}
void suchbaum::einfuegen(BaumKnoten *&anker, int wert)
{

    BaumKnoten *neuer_eintrag = new BaumKnoten;
    neuer_eintrag->data = wert;
    neuer_eintrag->rechts = nullptr;
    neuer_eintrag->links = nullptr;

    BaumKnoten *ptr = anker;
    if (anker == nullptr)
    {
        anker = neuer_eintrag;
    }
    else
    {
        do
        {
            if (wert == ptr->data)
                return;
            if (wert > ptr->data)
            {
                suchbaum::go_right(ptr, wert);
            }
            else if (wert < ptr->data)
            {
                suchbaum::go_left(ptr, wert);
            }
            if (wert > ptr->data && ptr->rechts == nullptr)
            {
                ptr->rechts = neuer_eintrag;
                return;
            }
            if (wert < ptr->data && ptr->links == nullptr)
            {
                ptr->links = neuer_eintrag;
                return;
            }
        } while (ptr != nullptr);
    }
}

void suchbaum::knoten_ausgeben(BaumKnoten *knoten, unsigned int tiefe)
{

    tiefe++;
    if (knoten == nullptr)
    {
        tiefe--;
        return;
    }

    knoten_ausgeben(knoten->rechts, tiefe);
    for (int i = 0; i < tiefe - 1; i++)
    {
        std::cout << "++";
    }
    std::cout << knoten->data << std::endl;
    knoten_ausgeben(knoten->links, tiefe);
}

void suchbaum::ausgeben(BaumKnoten *&anker)
{

    if (anker == nullptr)
    {
        std::cout << "Leerer Baum" << std::endl;
    }
    else
        suchbaum::knoten_ausgeben(anker, 0);
}