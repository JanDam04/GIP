#pragma once
struct Person
{
    std::string vorname;
    std::string nachname;
    std::string geburtsdatum;
};

Person extrahiere_person(std::string eingabezeile);