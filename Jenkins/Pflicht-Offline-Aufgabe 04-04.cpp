#include <iostream>

using namespace std;

int main()
{
    int n, c;

    cout << "Bitte geben Sie die Breite des Parallelogramms ein: ? ";
    cin >> n;
    cout << "Bitte geben Sie die Hoehe des Parallelogramms ein: ? ";
    cin >> c;

    for (int i = 0; i < c; i++)
    {

        if (i == 0)
        {

            for (int j = 0; j < n; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        if (i != 0)
        {
            for (int count = 0; count < i; count++)
                cout << '.';
            cout << "*";
        }

        if (i != 0 && i != c - 1)
        {
            for (int j = 0; j < n - 2; j++)
            {
                cout << "+";
            }
            cout << "*" << endl;
        }

        if (i == c - 1)
            for (int j = 0; j < n - 1; j++)
            {
                cout << "*";
            }
    }
    cout << endl;
    cout << "\n";
    system("pause");
    return 0;
}