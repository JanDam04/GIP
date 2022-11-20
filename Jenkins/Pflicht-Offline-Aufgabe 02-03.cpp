#include <iostream>

using namespace std;

int main()
{
 

    double a, b,n;
    double a_prz, b_prz;

    cout << "Bitte geben Sie die Gesamtzahl der abgegebenen gueltigen Stimmen ein: ? ";
    cin >> n;
    cout << "Bitte geben Sie die Anzahl Stimmen des ersten Kandidaten ein: ? ";
    cin >> a;
    cout << "Bitte geben Sie die Anzahl Stimmen des zweiten Kandidaten ein: ? ";
    cin >> b;

    double sum = n - (b + a);
   


    cout << "Auf den dritten Kandidaten sind somit " << sum << " Stimmen entfallen." << endl;


    n /= 100;
    a_prz = a / n;
    b_prz = b / n;
    double sum_prz = sum / n;

    cout <<  "Kandidat 1 erhielt " << a_prz << "%"  << " der Stimmen." << endl;
    cout << "Kandidat 2 erhielt " << b_prz << "%"  << " der Stimmen." << endl;
    cout << "Kandidat 3 erhielt " << sum_prz << "%"  << " der Stimmen." << endl;
    

    system("pause");
    return 0;
}