#include <iostream>
#include <string>

using namespace std;

int main()
{
    int ar[9], ar_c[6];
    int i = 0;
    for (int i = 0; i < 9; i++)
    {
        cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
        cin >> ar[i];
        ar_c[i] = 0;
        if (ar[i] > 6 || ar[i] < 1)
            i--;
        else
        {
            ar_c[ar[i] - 1]++;
           
        }
    }
    int c = 0;
    for (int i = 0; i < 9; i++)
    {
        if (ar_c[i] != 0)
            c++;
    }
    cout << "In der Eingabe kamen " << c << " unterschiedliche Zahlen vor." << endl;

    system("pause");
    return 0;
}