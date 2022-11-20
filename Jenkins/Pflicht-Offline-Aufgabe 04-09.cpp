#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    char ch;
    int pos = 0, c = 0;

    cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
    getline(cin, s);
    cout << "Bitte Buchstaben eingeben: ? ";
    cin >> ch;

    for (int i = 0; i < s.length(); i++)
    {
        if (ch == s.at(i))
        {
       		c = 1;
            pos = i;
        }
    }
    if (c == 0)
        cout << "Der Buchstabe " << ch << " kommt nicht im Text vor." << endl;
    else
        cout << "Der Buchstabe " << ch << " kommt im Text vor, an Position " << pos << "." <<endl;
    system("pause");
    return 0;
}