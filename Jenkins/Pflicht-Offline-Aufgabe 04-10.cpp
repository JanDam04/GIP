#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    string ch;
    int c = 0;

    cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
    getline(cin, s);
    cout << "Bitte Buchstaben eingeben: ? ";
    getline(cin, ch);

    for (int i = 0; i < s.length(); i++)
    {
        string s1(1, s.at(i));
        if (ch == s1)
        {
            c++;
        }
    }

    cout << "Der Buchstabe " << ch << " kommt " << c << " mal im Text vor." << endl;
    system("pause");
    return 0;
}