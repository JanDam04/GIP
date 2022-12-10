#include <iostream>
#include <string>

using namespace std;

void spalte_ab_erstem(char zc, string eingabe, string &e_t, string &z_t)
{
    int d = 0;
    int c = 0;
    for (int i = 0; i < eingabe.length(); i++)
    {

        if (eingabe.at(i) == zc)
        {
            d = i;

            break;
        }
        e_t += eingabe.at(i);
        if (i == eingabe.length() - 1)
            c = 1;
    }
    if (d == 0 && eingabe.at(d) != zc)
        d--;

    if (c == 1)
        return;
    for (int i = 0; i < eingabe.length() - d - 1; i++)
    {
        z_t += eingabe.at(i + d + 1);
    }
}

int main()
{
    string eingabe, e_t = "", z_t = "";
    char zc;

    cout << "Bitte geben Sie die einzeilige Zeichenkette ein: ? ";
    getline(cin, eingabe);
    cout << "Bitte geben Sie das Zeichen ein: ? ";
    cin >> zc;

    spalte_ab_erstem(zc, eingabe, e_t, z_t);
    cout << "Der erste Teil der Zeichenkette lautet: " << e_t << endl;
    cout << "Der zweite Teil der Zeichenkette lautet: " << z_t << endl;
    system("pause");
    return 0;
}