#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;

    cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
    getline(cin, s);
    cout << "Eingabetext: " << s << endl;
    cout << "Ergebnis: ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(s.length() - i - 1);
    }
    cout << endl;
    system("pause");
    return 0;
}