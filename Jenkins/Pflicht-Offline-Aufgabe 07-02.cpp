#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s[5];
    int d = 0;
    for (int i = 0; i < 5; i++)
    {

        d++;
        cout << "Eingabezeile = ? ";
        getline(cin, s[i]);
        if (s[i] == "")
        {
            d = i;
            break;
        }
    }

    for (int i = 0; i < d; i++)
    {
        int set = 0;
        for (int j = 0; j < s[i].length(); j++)
        {
            if (s[i].at(j) != ' ')
            {
                cout << s[i].at(j);
                set = 0;
            }
            else if (s[i].at(j) == ' ' && set != 1)
            {
                cout << endl;
                set = 1;
            }
        }
        if(set == 0) cout << endl;
    }
    system("pause");
    return 0;
}