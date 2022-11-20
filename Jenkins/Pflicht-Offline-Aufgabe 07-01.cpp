#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s[4];
    int max = 0, d = 0;
    for (int i = 0; i < 4; i++)
    {

        d++;
        cout << "Textzeile = ? ";
        getline(cin, s[i]);
        if (s[i].length() > max)
            max = s[i].length();
        if (s[i] == "")
        {
            d = i;
            break;
        }
    }

    for (int i = 0; i < d; i++)
    {

        for (int j = 0; j < max - s[i].length(); j++)
        {
            cout << "#";
        }
        cout << s[i] << endl;
    }
    system("pause");
    return 0;
}