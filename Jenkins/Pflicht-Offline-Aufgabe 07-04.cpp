#include <iostream>
#include <string>

using namespace std;
struct Person
{
    string nachname, vorname;
    int alter;
    char geschlecht;
};
void filter(Person personen[], int &reg_count)
{
    cout << "Ihre Auswahl:" << endl;
    cout << "1 - Weibliche Erwachsene" << endl;
    cout << "2 - Maennliche Erwachsene" << endl;
    cout << "3 - Weibliche Kinder" << endl;
    cout << "4 - Maennliche Kinder" << endl;
    int n;
    cout << "? ";
    cin >> n;
    int c = 0;
    for (int i = 0; i < reg_count; i++)
    {
        if (personen[i].alter >= 18 && personen[i].geschlecht == 'w' && n == 1)
        {
            cout << personen[i].nachname << ", " << personen[i].vorname << ", "
                 << "w, " << personen[i].alter << endl;
            c++;
        }
        else if (personen[i].alter < 18 && personen[i].geschlecht == 'w' && n == 3)
        {
            cout << personen[i].nachname << ", " << personen[i].vorname << ", "
                 << "w, " << personen[i].alter << endl;
            c++;
        }
        else if (personen[i].alter < 18 && personen[i].geschlecht == 'm' && n == 4)
        {
            cout << personen[i].nachname << ", " << personen[i].vorname << ", "
                 << "m, " << personen[i].alter << endl;
            c++;
        }
        else if (personen[i].alter >= 18 && personen[i].geschlecht == 'm' && n == 2)
        {
            cout << personen[i].nachname << ", " << personen[i].vorname << ", "
                 << "m, " << personen[i].alter << endl;
            c++;
        }
    }
}
void personen_einlesen(int &reg_count, Person personen[])
{
    cout << "Bitte den Nachnamen der " << reg_count << ". Person eingeben: ? ";
    getline(cin, personen[reg_count].nachname);
    cout << "Bitte den Vornamen der " << reg_count << ". Person eingeben: ? ";
    getline(cin, personen[reg_count].vorname);
    cout << "Bitte das Alter der " << reg_count << ". Person eingeben: ? ";
    cin >> personen[reg_count].alter;
    cout << "Bitte das Geschlecht der " << reg_count << ". Person eingeben: ? ";
    cin >> personen[reg_count].geschlecht;
}

int main()
{

    int reg_count = 0, d = 0;
    char ch;
    Person personen[100];
    

    while (d == 0)
    {
        cout << "Eine weitere Person eingeben (j/n)? ";
        cin >> ch;
        cin.ignore();
        if (ch == 'j')
        {
            personen_einlesen(reg_count, personen);
        }
        if (ch == 'n')
            d = 1;
        else
            d = 0;
    }
    filter(personen, reg_count);
    system("pause");
    return 0;
}