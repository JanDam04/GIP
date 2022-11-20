#include <iostream>

using namespace std;

int main()
{
	int n, c = 0;

	for(int i=0;i<4;i++)
	{
		cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
		cin >> n;
		if(n == 99) c++;
	}
	cout << c  << " Eingabezahlen waren gleich der Vergleichszahl 99." << endl;
	cout << 4 - c << " Eingabezahlen waren ungleich der Vergleichszahl 99." << endl;

	system("pause");
	return 0;
}