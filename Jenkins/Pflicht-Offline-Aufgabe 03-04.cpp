#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cout << "Bitte geben Sie die Stunde der aktuellen Uhrzeit ein: ? ";
	cin >> n;
	if(n >= 6 && n <= 10) cout << "Guten Morgen." << endl;
	else if(n >= 11 && n <= 13) cout << "Mahlzeit." << endl;
	else if(n >= 14 && n <= 17) cout << "Guten Tag." << endl;
	else if(n >= 18 && n <= 22) cout << "Guten Abend." << endl;
	else if(n >= 0 && n <= 5 || n == 23) cout << "Gute Nacht." << endl;
	else cout << "Keine erlaubte Stundenangabe." << endl;

	system("pause");
	return 0;
}