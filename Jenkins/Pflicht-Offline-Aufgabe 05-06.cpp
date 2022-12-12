#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n = 5;
    int ar[5];
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 1; i < n + 1; i++)
    {
        cout << "Bitte geben Sie die " << i << ". Zahl ein: ? ";
        cin >> ar[i];
        if (ar[i] > max)
            max = ar[i];
        if (ar[i] < min)
            min = ar[i];
    }
    for (int i = 1; i < n + 1; i++)
    {
        cout << "Die " << i << ". eingegebene Zahl lautete: " << ar[i] << endl;
    }

    cout << "Die kleinste eingegebene Zahl lautete: " << min << endl;
    cout << "Die groesste eingegebene Zahl lautete: " << max << endl;
    system("pause");
    return 0;
}
