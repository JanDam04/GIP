#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "Bitte geben Sie die Zeichenkette (6 Zeichen) ein: ? ";
    getline(cin, s);

    for (int i = 0; i < s.length() / 2; i++)
    {
        if (!(s.at(i) == s.at(s.length() - i - 1)))
        {
            cout << "Das eingegebene Wort ist KEIN Palindrom." << endl;
            system("pause");
            return 0;
        }
    }
    cout << "Das eingegebene Wort ist ein Palindrom." << endl;
    system("pause");
    return 0;
}