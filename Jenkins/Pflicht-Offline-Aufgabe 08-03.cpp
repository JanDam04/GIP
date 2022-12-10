#include <iostream>
#include <string>

using namespace std;

unsigned int my_strlen(const char *ptr)
{
    const int len = 20;
    char *s = new char[len];

    int d = 0;

    if (int(ptr[0]) == 0)
    {

        return 0;
    }
    for (int i = 0; i < 20; i++)
    {
        int c = 0;
        s[i] = ptr[i];

        for (int j = 0; j < 20; j++)
        {
            if (s[j] == ptr[j])
            {
                c++;
            }
        }
        if (c == 20)
        {

            d = i + 1;
            break;
        }
    }

    return d;
}

char *my_strconcat(const char *ptr1, const char *ptr2)
{

    int len1 = my_strlen(ptr1);
    int len2 = my_strlen(ptr2);
    int sum = 0;
    char *ptr_sum = new char[len1 + len2];
    for (int i = 0; i < len1 ; i++)
    {
        ptr_sum[i] = ptr1[i];
    }
    sum = len1;

    
        
    for (int i = 0; i < 40 - sum - 1; i++)
    {

        if (i == my_strlen(ptr2))
        {

            break;
        }
        else
        {
            ptr_sum[i + sum] = ptr2[i];
        }
    }
    if (len1 == 0 && len2 == 0){
        ptr_sum = nullptr;
    }
    return ptr_sum;
}

int main()
{
    const int len = 20;
    char *ptr1 = new char[len];
    char *ptr2 = new char[len];

    cout << "Bitte ersten Text eingeben (ggfs. mit Leerzeichen): ? ";
    cin.getline(ptr1, len);
    cout << "Bitte zweiten Text eingeben (ggfs. mit Leerzeichen): ? ";
    cin.getline(ptr2, len);
    char *sum = new char[40];
    sum = my_strconcat(ptr1, ptr2);

    cout << "Ergebnis my_strconcat(): " << sum << endl;
    system("pause");
    return 0;
