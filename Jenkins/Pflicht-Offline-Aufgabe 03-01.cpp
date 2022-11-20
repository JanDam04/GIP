#include <iostream>
#include <string>

using namespace std;

int main()
{
    char ch;

    cout << "Bitte geben Sie das Zeichen ein: ? ";
    cin >> ch;

    if (ch >= 97 && ch <= 123)
        cout << "Es wurde ein Kleinbuchstabe (a-z) eingegeben." << endl;
    else
        cout << "KEIN Kleinbuchstabe (a-z)." << endl;

    system("pause");
    return 0;
}