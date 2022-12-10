#include <iostream>
#include <string>

using namespace std;

string trimme(string s)
{
    string s_t = "";
    int b = 0;
    int d = 0;
    if (s.length() == 0)
        return s_t;
    int c = s.length() - 1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '+')
        {
            d = i;
            break;
        }
    }
    for (int i = s.length() - 1; i > 0; i--)
    {
        if (s.at(i) != '+')
        {
            b = i + 1;
            break;
        }
    }

    for (int i = d; i < b; i++)
    {
        s_t += s.at(i);
    }


    return s_t;
}

int main()
{
    string s;

    cout << "Bitte geben Sie die Textzeile ein: ? ";
    getline(cin, s);

    cout << "Vorher: " << s << endl;
    cout << "Nachher: " << trimme(s) << endl;

    system("pause");
    return 0;
}
