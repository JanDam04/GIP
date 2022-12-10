#include <iostream>
#include <string>

using namespace std;

const unsigned int eingabezeilen_max = 5;
const unsigned int wort_max = 1000;
const unsigned int max_line_length = 80;

struct w_haeufigkeit
{
    char *wort;
    unsigned int haeufigkeit = 0;
};

unsigned int my_strlen(const char *const str)
{
    for (int i = 0; i < max_line_length; i++)
    {
        if (str[i] == '\0')
            return i;
    }
    return 0;
}
int my_strcmp(const char *str1, const char *str2)
{
    for (int i = 0; i < max_line_length; i++)
    {
        if (str1[i] != str2[i])
        {
            return 1;
        }
        if (str1[i] == '\0' && str2[i] == '\0')
            return 0;
    }
    return 0;
}
char *naechstes_wort(const char *const zeile, unsigned int &pos)
{

    if (zeile[pos + 1] == '\0')
        return nullptr;
    int d = pos;

    while (zeile[pos] == ' ' || zeile[pos] == '.' || zeile[pos] == ',')
    {
        pos++;
    }

    for (int i = pos; i < max_line_length; i++)
    {

        if (zeile[i] == ' ' || zeile[i] == '.' || zeile[i] == ',' || zeile[i] == '\0')
        {

            d = i;
            break;
        }
    }
    char *wort = new char[d - pos + 1];
    int f = 0;

    for (int i = pos; i < d; i++)
    {

        wort[f] = zeile[i];
        f++;
    }

    wort[d - pos] = '\0';

    pos = d + 1;
    return wort;
}
void zaehle_wort(char *wort, struct w_haeufigkeit w_haeufigkeiten[], unsigned int &w_count)
{

    if (w_count == 0)
    {
        w_haeufigkeiten[0].wort = wort;
        w_count++;
        return;
    }
    for (int i = 0; i < w_count; i++)
    {
        if (my_strcmp(wort, w_haeufigkeiten[i].wort) == 0)
        {
            w_haeufigkeiten[i].haeufigkeit++;

            return;
        }
    }

    w_haeufigkeiten[w_count].wort = wort;
    w_count++;

    return;
}

int main()
{

    char *ch = new char[max_line_length];

    w_haeufigkeit w_haeufigkeiten[wort_max];
    unsigned int w_count = 0;
    int i = 0;
    while (i < eingabezeilen_max)
    {
        cout << "Eingabezeile = ? ";
        cin.getline(ch, max_line_length);
        if (ch[0] == '\0')
            break;

        unsigned int len1 = my_strlen(ch);
        unsigned int pos = 0;
        for (int i = 0; i < len1; i++)
        {
            zaehle_wort(naechstes_wort(ch, pos), w_haeufigkeiten, w_count);

            if (pos + 1 >= len1)
                break;
        }
        i++;
    }

    for (int j = 0; j < w_count; j++)
    {
        w_haeufigkeiten[j].haeufigkeit++;
        cout << w_haeufigkeiten[j].wort << ": " << w_haeufigkeiten[j].haeufigkeit << endl;
    }

    system("pause");
    return 0;
}
