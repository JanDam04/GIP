#include <iostream>
#include <string>

using namespace std;

int main()
{
    char ch;

    cout << "Bitte geben Sie das Zeichen ein: ? ";
    cin >> ch;

    if (ch == 'e')
        cout << "Das Programm beendet sich jetzt." << endl;
    else if (ch >= 48 && ch <= 57)
    {
        int c = int(ch) - 48;
        cout << c << " + 5 = " << c + 5 << endl;
    }
    else
        cout << "Weder 'e' noch Ziffer" << endl;
    system("pause");
    return 0;
}