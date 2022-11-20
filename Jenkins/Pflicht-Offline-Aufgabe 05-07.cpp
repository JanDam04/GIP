#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "Bitte die Zahl oder das Wort 'ende' eingeben: ? ";
    cin >> s;
    int num;
    if (s == "ende")
        cout << "Das Programm beendet sich jetzt." << endl;
    else
    {

        num = stoi(s);
        num *= 2;
        cout << "Der doppelte Wert betraegt: " << num << endl;
    }
    system("pause");
    return 0;
}