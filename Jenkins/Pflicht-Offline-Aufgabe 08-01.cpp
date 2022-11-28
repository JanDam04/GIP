#include <iostream>
#include <string>

using namespace std;

unsigned int my_strlen(const char * ptr)
{
    return 1;
}

int main()
{
    
    string eingabe;
    int n = 0, sum = 0;
    getline(cin, eingabe);
    char *ch;

    for(int i = 0; i < eingabe.length(); i++){
        
        ch = &eingabe[i];
        n = my_strlen(ch);

        sum += n;
       
    }

    cout << "Ergebnis my_strlen(): " << sum << endl;

    system("pause");
    return 0;
    

    
}