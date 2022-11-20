#include <string>
#include "person.h"
#include "texte.h"

Person extrahiere_person(std::string eingabezeile)
{
    int count = 0;
    Person p;
    std::string rest = "";
    spalte_ab_erstem(',', eingabezeile, p.nachname, rest);
    spalte_ab_erstem(',', eingabezeile, p.vorname, p.geburtsdatum);
    p.nachname = trimme(p.nachname);
    p.vorname = trimme(p.vorname);
    p.geburtsdatum = trimme(p.geburtsdatum);

    return p;
}