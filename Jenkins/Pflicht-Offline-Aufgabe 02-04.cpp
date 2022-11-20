#include <iostream>

using namespace std;

struct Time
{

    int sum;
    int Stunden;
    int Minuten;
    int Sekunden;
};

int timeDif(int t_1, int t_2)
{
    int dif;
    if (t_1 >= t_2)
        dif = t_1 - t_2;
    else
        dif = t_2 - t_1;

    int s_dif = dif / 3600;
    dif -= s_dif * 3600;
    int m_dif = dif / 60;
    dif -= m_dif * 60;

    cout << "Die Differenz zwischen den beiden Uhrzeiten betraegt:" << endl;
    cout << s_dif << " Stunden, " << m_dif << " Minuten und " << dif << " Sekunden." << endl;
}
int c = 0;
Time getTime()
{
    Time to;

    cout << "Bitte geben Sie die Stundenzahl der ";
    if (c == 0)
        cout << "ersten "
             << "Uhrzeit ein: ? ";
    else
        cout << "zweiten "
             << "Uhrzeit ein: ? ";
    cin >> to.Stunden;
    cout << "Bitte geben Sie die Minutenzahl der ";
    if (c == 0)
        cout << "ersten "
             << "Uhrzeit ein: ? ";
    else
        cout << "zweiten "
             << "Uhrzeit ein: ? ";
    cin >> to.Minuten;
    cout << "Bitte geben Sie die Sekundenzahl der ";
    if (c == 0)
        cout << "ersten "
             << "Uhrzeit ein: ? ";
    else
        cout << "zweiten "
             << "Uhrzeit ein: ? ";
    cin >> to.Sekunden;
    c++;
    to.sum = to.Stunden * 3600 + to.Minuten * 60 + to.Sekunden;

    cout << to.Stunden << ":" << to.Minuten << " Uhr und " << to.Sekunden << " Sekunden sind in Sekunden seit Mitternacht: " << to.sum << endl
         << endl;

    return (to);
}

int main()
{
    Time t_1;
    Time t_2;

    t_1 = getTime();
    t_2 = getTime();

    timeDif(t_1.sum, t_2.sum);

    system("pause");
    return 0;
}