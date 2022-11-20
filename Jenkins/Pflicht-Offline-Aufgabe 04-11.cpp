#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    char ch, ch_e;
    int c = 0;

    cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
    getline(cin, s);
    cout << "Bitte den zu ersetzenden Buchstaben eingeben: ? ";
    cin >> ch;
    cout << "Bitte den Ersatz-Buchstaben eingeben: ? ";
    cin >> ch_e;

    for (int i = 0; i < s.length(); i++)
    {
        if (ch == s.at(i))
        {
            s.at(i) = ch_e;
        }
    }
    cout << "Der Text nach der Ersetzung: " << s << endl;
    system("pause");
    return 0;
}