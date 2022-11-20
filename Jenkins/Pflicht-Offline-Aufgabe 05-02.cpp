#include <iostream>
#include <string>

using namespace std;

int main()
{
    int ar[6];
    
    for (int i = 0; i < 6; i++)
    {
        cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
        cin >> ar[i];

        if (ar[i] > 6 || ar[i] < 1)
            i--;
    }
    cout << "Bitte geben Sie die Suchzahl ein: ? ";
    int such_zahl, c = 0;
    cin >> such_zahl;
    for (int i = 0; i < 4; i++)
    {
        if(such_zahl == ar[i]){
            cout << "Die Suchzahl kam unter den Eingaben vor." << endl;
            system("pause");
            return 0;
        }
    }
    cout << "Die Suchzahl kam NICHT unter den Eingaben vor." << endl;

    system("pause");
    return 0;
}