// Datei: liste.h

#pragma once

#include <string>

struct TListenKnoten
{
    int data;
    TListenKnoten *next;
    TListenKnoten *prev;
};

std::string liste_als_string(TListenKnoten *anker);

void hinten_anfuegen(TListenKnoten *&anker, const int wert);

std::string liste_als_string_rueckwaerts(TListenKnoten *anker);

void in_liste_einfuegen(TListenKnoten *&anker, int wert_neu, int vor_wert);

void aus_liste_loeschen(TListenKnoten *&anker, int wert);
