#include <iostream>
#include <string>

using namespace std;

string trimme(std::string s)
{
    string s_t = "";
    char ch = ' ';
    int d = 0;
    for (int i = 0; i < s.length(); i++)
    {

        if (s.at(i) != '+')
        {

            d = i;
            break;
        }
    }
    int ce = 0;
    int size = s.length();
    for (int i = size - 1; i >= 0; i--)
    {
        if (s.at(i) != '+')
        {
            ce = i;
            break;
        }
    }

    for (int i = 0; i < ce - d + 1; i++)
    {

        s_t += s.at(i + d);
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