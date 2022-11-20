#include <iostream>

using namespace std;

int main()
{
    int n;
    int max = -2 ^ 31;
    int min = 2 ^ 31;
    for (int i = 0; i < 3; i++)
    {
        cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
        cin >> n;
        if (n > max)
            max = n;
        if (n < min)
            min = n;
    }
    cout << "Die kleinste eingegebene Zahl lautet: " << min << endl;
    cout << "Die groesste eingegebene Zahl lautet: " << max << endl;
    system("pause");
    return 0;
}