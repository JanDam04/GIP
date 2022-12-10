#include <iostream>
#include <string>
#include "sort_three_vars.h"

using namespace std;

int main()
{
    int a, b, c;

    cout << "Bitte geben Sie die erste int Zahl ein: ? ";
    cin >> a;
    cin.ignore();
    cout << "Bitte geben Sie die zweite int Zahl ein: ? ";
    cin >> b;
    cin.ignore();
    cout << "Bitte geben Sie die dritte int Zahl ein: ? ";
    cin >> c;
    cin.ignore();

    sort_three_vars(a, b, c);

    cout << "Erste Zahl nachher: " << a << endl
         << "Zweite Zahl nachher: " << b << endl
         << "Dritte Zahl nachher: " << c << endl;

    string s1 = "", s2 = "", s3 = "";

    cout << "Bitte geben Sie den ersten String ein: ? ";
    getline(cin, s1);

    cout << "Bitte geben Sie den zweiten String ein: ? ";
    getline(cin, s2);
    cout << "Bitte geben Sie den dritten String ein: ? ";
    getline(cin, s3);
    sort_three_vars(s1, s2, s3);

    cout << "Erster String nachher: " << s1 << endl
         << "Zweiter String nachher: " << s2 << endl
         << "Dritter String nachher: " << s3 << endl;

    system("pause");
    return 0;
}