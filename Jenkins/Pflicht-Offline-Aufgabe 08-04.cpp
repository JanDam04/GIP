#include <iostream>
#include <string>

using namespace std;

char *my_strconcat2(const char *sptr1, const char *sptr2, unsigned int count)
{
    int len1 = 0, len2 = 0;

    for (int i = 0; i < 20; i++)
    {
        if (sptr1[i] == '\0')
        {
            len1 = i + 1;
            break;
        }
    }
    for (int i = 0; i < 20; i++)
    {
        if (sptr2[i] == '\0')
        {
            len2 = i + 1;
            break;
        }
    }
    char *re = new char[count];

    if (count <= len1)
    {
       
        for (int i = 0; i < count; i++)
        {
            re[i] = sptr1[i];
        }
        return re;
    }
    else
    {
        for (int i = 0; i < len1; i++)
        {
            re[i] = sptr1[i];
        }
        int f = 0;
        for (int i = len1-1; i < count; i++)
        {   
            
            re[i] = sptr2[f];
            f++;
        }

        return re;
    }
}

int main()
{
    char *ch = new char[20];
    char *ch_2 = new char[20];
    int c = 0;

    cout << "Bitte ersten Text eingeben (ggfs. mit Leerzeichen): ? ";
    cin.getline(ch,20);
    cout << "Bitte zweiten Text eingeben (ggfs. mit Leerzeichen): ? ";
    
    cin.getline(ch_2,20);
    cout << "Anzahl Zeichen: ? ";
    cin >> c;

    

    cout << "Ergebnis my_strconcat2(): " << my_strconcat2(ch, ch_2, c) << endl;
    system("pause");
    return 0;
