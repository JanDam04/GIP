#include <iostream>
#include <string>

using namespace std;

int main()
{
    char ch;

    cout << "Bitte geben Sie den Kleinbuchstaben ein: ? ";
    cin >> ch;
    char s = ch - 32;
    cout << "Der entsprechende Grossbuchstabe lautet: " << s << endl;

    system("pause");
    return 0;
}