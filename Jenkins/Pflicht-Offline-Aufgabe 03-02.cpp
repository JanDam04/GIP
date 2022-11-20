#include <iostream>
#include <string>

using namespace std;

int main()
{
	char ch;

	cout << "Bitte geben Sie das Zeichen ein: ? ";
	cin >> ch;

	if(ch == 'j' || ch == 'J') cout << "Es handelt sich um eine Ja Eingabe." << endl;
	else if(ch == 'n' || ch == 'N') cout << "Es handelt sich um eine Nein Eingabe." << endl;
	else cout << "Es handelt sich um eine sonstige Eingabe." << endl;
	system("pause");
	return 0;
}