#include <iostream>
#include <string>
#include "swap_vars.h"

using namespace std;

int main()
{
    int a, b;
    string x, y;

    cout << "Bitte geben Sie die erste int Zahl ein: ? ";
    cin >> a;
    cin.ignore();
    cout << "Bitte geben Sie die zweite int Zahl ein: ? ";
    cin >> b;
    cin.ignore();

    swap_vars(a, b);

    cout << "Erste Zahl nachher: " << a << endl
         << "Zweite Zahl nachher: " << b << endl;

    string s1 = "", s2 = "";

    cout << "Bitte geben Sie den ersten String ein: ? ";
    getline(cin, s1);

    cout << "Bitte geben Sie den zweiten String ein: ? ";
    getline(cin, s2);

    swap_vars(s1, s2);

    cout << "Erster String nachher: " << s1 << endl
         << "Zweiter String nachher: " << s2 << endl;

    system("pause");
    return 0;
}