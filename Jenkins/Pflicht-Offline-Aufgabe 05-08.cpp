#include <iostream>
#include <string>

using namespace std;

/*string ersetze(string s1, char c, string s2)
{
    string s_tmp = "", s_tmp_sec = "";
    int d = 0;
    for (int i = 0; i < s1.length(); i++)
    {

        if (s1.at(i) == c)
        {
            d = i;
            break;
        }
        s_tmp += s1.at(i);
    }
    for (int i = 0; i < s1.length() - d - 1; i++)
    {
        s_tmp_sec += s1.at(i + d + 1);
    }

    return s_tmp + s2 + s_tmp_sec;
}*/

string ersetze(string s1, char c, string s2)
{

    for (int i = 0; i < s1.length(); i++)
    {

        if (s1.at(i) == c)
        {
            s1.erase(i, 1);
            s1.insert(i, s2);

            i += s2.length();
        }
    }
    return s1;
}

int main()
{
    string s1, s2;

    char c;

    cout << "Bitte geben Sie die Textzeile ein: ? ";
    getline(cin, s1);
    cout << "Bitte geben Sie das zu ersetzende Zeichen ein: ? ";
    cin >> c;
    cin.ignore();
    cout << "Bitte geben Sie den einzusetzenden Text ein: ? ";
    getline(cin, s2);

    cout << "Ergebnis: " << ersetze(s1, c, s2) << endl;

    system("pause");
    return 0;
}