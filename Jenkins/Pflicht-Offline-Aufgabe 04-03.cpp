#include <iostream>
#include <string> 

using namespace std;

int main()
{
	int b, h;

	cout << "Bitte geben Sie die Breite des Rechtecks ein: ? ";
	cin >> b;

	cout << "Bitte geben Sie die Hoehe des Rechtecks ein: ? ";
	cin >> h;

	for(int i = 0; i < h; i++)
	{
		cout << "*";
		for(int j = 0; j < b-2; j++)
		{
			if(i != 0 && i != h-1) cout << "+";
			else cout << "*";
		}
		cout << "*" << endl;
	}
	system("pause");
	return 0;
}