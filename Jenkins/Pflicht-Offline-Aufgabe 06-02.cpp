#include <iostream>
#include <string>

using namespace std;

int addition_rekursiv(int i, int k)
{
    return i + k;
}
int subtraktion_rekursiv(int i, int k)
{
    return i - k;
}

int main()
{
    int i = 0, k = 0;
    cout << "Bitte geben Sie die erste Zahl ein: ? ";
    cin >> i;
    cout << "Bitte geben Sie die zweite Zahl ein: ? ";
    cin >> k;
    cout << i << " + " << k << " = "
         << addition_rekursiv(i, k) << endl;
    cout << i << " - " << k << " = "
         << subtraktion_rekursiv(i, k) << endl;
    system("PAUSE");
    return 0;
}