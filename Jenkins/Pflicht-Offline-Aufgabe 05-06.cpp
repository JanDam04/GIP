#include <iostream>
#include <string>

using namespace std;

int main()
{
    int ar[5], ar_c[6];
    int i = 0, max = -10000, min = 100000;
    for (int i = 0; i < 5; i++)
    {
        cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
        cin >> ar[i];
        ar_c[i] = 0;
        if (ar[i] > 6 || ar[i] < 1)
            i--;
        else{
            if(ar[i] > max) max = ar[i];
            if(ar[i] < min) min = ar[i];
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "Die " << i + 1 << ". eingegebene Zahl lautete: " << ar[i] << endl;
    }
    cout << "Die kleinste eingegebene Zahl lautete: " << min << endl;
    cout << "Die groesste eingegebene Zahl lautete: " << max << endl;

    system("pause");
    return 0;
}