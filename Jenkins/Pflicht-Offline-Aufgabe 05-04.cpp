#include <iostream>
#include <string>

using namespace std;

int main()
{
    int ar[9], ar_c[6] = {0};
    int i = 0;
    for (int i = 0; i < 9; i++)
    {
        cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
        cin >> ar[i];
        
        if (ar[i] > 6 || ar[i] < 1)
            i--; 
        else
        {
            ar_c[ar[i] - 1]++;
            
        }
    }
    for (int i = 0; i < 9; i++)
    {
        cout << "Die " << i + 1 << ". eingegebene Zahl lautete: " << ar[i] << endl;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << "Die Zahl " << i + 1 << " wurde " << ar_c[i] << " mal eingegeben." << endl;
    }

    system("pause");
    return 0;
}