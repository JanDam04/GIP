#include <iostream>
#include <string>

using namespace std;

struct w_haeufigkeit
{

    string wort;
    int haeufigkeit;
};

string naechstes_wort(string zeile, int &pos)
{
    string word_tmp = " ";
    if (pos == zeile.length())
        return "";
    for (int i = 0; pos < zeile.length(); i++)
    {
        if (zeile.at(pos) != ' ' && zeile.at(pos) != ',' && zeile.at(pos) != '.')
        {
            word_tmp += zeile.at(pos);
            pos++;
        }
        else
        {

            pos++;
            break;
        }
    }
    for (int i = 0; i < zeile.length() - pos; i++)
    {

        if (zeile.at(pos) == ' ')
        {

            pos++;
        }
        else
            break;
    }

    return word_tmp;
}

void zaehle_wort(string wort, w_haeufigkeit haeufigkeiten[], int &w_count)
{
    int cc = 0;

    for (int i = 0; i <= w_count; i++)
    {

        if (haeufigkeiten[i].wort == wort)
        {

            haeufigkeiten[i].haeufigkeit++;
            cc = 1;
        }
    }
    if (cc == 0)
    {

        w_count++;
        haeufigkeiten[w_count].wort = wort;
        haeufigkeiten[w_count].haeufigkeit++;
    }
}

int main()
{

    int z_count = 0, w_count = 0;
    string wort = "";
    string eingabe[5];

    for (int i = 0; i < 5; i++)
    {

        cout << "Eingabezeile = ? ";
        getline(cin, eingabe[i]);
        if (eingabe[i] == "")
        {
            z_count = i;
            break;
        }
    }

    w_haeufigkeit haeufigkeiten[1000];
    haeufigkeiten[0].wort = "";
    for (int k = 0; k < z_count; k++)
    {

        int pos = 0;
        while (true)
        {

            wort = naechstes_wort(eingabe[k], pos);
            if (wort == "")
                break;
            if (wort == " ")
                int c = 1;
            else
                zaehle_wort(wort, haeufigkeiten, w_count);
        }
    }

    for (int k = 1; k < w_count + 1; k++)
        cout << haeufigkeiten[k].wort << ": "
             << haeufigkeiten[k].haeufigkeit << endl;

    system("PAUSE");
    return 0;
}