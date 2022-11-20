#include <iostream>
#include <string>
#include <fstream>
#include "person.h"
#include "texte.h"

std::string ersetze(std::string s1, char c, std::string s2)
{

    for (int i = 0; i < s1.length(); i++)
    {

        if (s1.at(i) == c)
        {
            s1.erase(i, 1);
            s1.insert(i, s2);

            break;
        }
    }
    return s1;
}

std::string br(std::string s)
{

    s.append("<br/>");
    return s;
}

std::string b(std::string s)
{
    std::string s_t = "";

    s.insert(0, "<b>");
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == ',')
        {

            s.insert(i, "<b>");
            break;
        }
    }
    return s;
}

int main()
{

    std::string eingabezeile = "", kurztext = "", langtext = "";

    std::fstream personendaten("personendaten.txt", std::ios::in);

    while (getline(personendaten, eingabezeile))
    {

        Person person = extrahiere_person(eingabezeile);

        kurztext += br(b(person.nachname + ", " + person.vorname)) + "\n";
        langtext += br(b(person.vorname + " " + person.nachname + ", " + person.geburtsdatum)) + "\n";
    }

    personendaten.close();

    std::ifstream tmp_datei("webseite.html.tmpl");
    std::fstream ausgabedatei("website.html", std::fstream::out | std::ios::trunc);

    while (getline(tmp_datei, eingabezeile))
    {

        eingabezeile = ersetze(eingabezeile, '%', kurztext);
        eingabezeile = ersetze(eingabezeile, '$', langtext);

        ausgabedatei << eingabezeile;
        ausgabedatei << std::endl;
    }

    tmp_datei.close();
    ausgabedatei.close();

    system("pause");
    return 0;
}
