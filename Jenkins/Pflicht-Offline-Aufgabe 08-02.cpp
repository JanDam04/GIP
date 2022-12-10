#include <string>
#include <iostream>

using namespace std;

int my_strcmp(const char *ptr1, const char *ptr2)
{
   
    for (int i = 0; i < 20; i++)
    {
        if (ptr1[i] != ptr2[i])
        {
            if (ptr1[i] > ptr2[i])
                return 1;
            else
                return -1;
        }
    }
    return 0;
}

int main()
{
    const int len = 20;
    char *ptr = new char[len];
    char *ptr_sec = new char[len];
    int high = 0;
    cout << "Bitte ersten Text eingeben (ggfs. mit Leerzeichen): ? ";
    cin.getline(ptr, len);
    cout << "Bitte zweiten Text eingeben (ggfs. mit Leerzeichen): ? ";
    cin.getline(ptr_sec, len);

    int sum = my_strcmp(ptr, ptr_sec);
    if(sum == 0) cout << "Die Texte sind identisch. ";
    cout << "Ergebnis my_strcmp(): " << sum << endl;
    system("pause");
    return 0;
}
