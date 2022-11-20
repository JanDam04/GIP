#include <iostream>
#include <string>

using namespace std;

int main()
{
    int ar[6];

    for (int i = 0; i < 4; i++)
    {
        cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
        cin >> ar[i];
    }
    cout << "Bitte geben Sie die Vergleichszahl ein: ? ";
    int such_zahl, c = 0;
    cin >> such_zahl;
    for (int i = 0; i < 4; i++)
    {
        if (such_zahl == ar[i])
            c++;
    }
    cout << c << " Eingabezahlen waren gleich der Vergleichszahl." << endl;
    cout << 4 - c << " Eingabezahlen waren ungleich der Vergleichszahl." << endl;

    system("pause");
    return 0;
}