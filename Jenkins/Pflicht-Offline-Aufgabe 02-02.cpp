#include <iostream>

using namespace std;

int main()
{
	int a,b,tmp;

	cout << "Bitte geben Sie den ganzzahligen Wert der ersten Variable ein: ? ";
	cin >> a;
	cout << "Bitte geben Sie den ganzzahligen Wert der zweiten Variable ein: ? ";
	cin >> b;

	tmp = a;

	a = b;
	b = tmp;

	cout << "Nach dem Tausch:" << endl;
	cout << "Wert der ersten Variable: " << a << endl;
	cout << "Wert der zweiten Variable: " << b << endl;
	system("pause");
	return 0;
}