#include <iostream>
#include <string>

using namespace std;

struct T_Morse_Data
{
    char letter;
    string morse_code;
};

const T_Morse_Data morse_data[] = {
    {'a', ".-"},
    {'b', "-..."},
    {'c', "-.-."},
    {'d', "-.."},
    {'e', "."},
    {'f', "..-."},
    {'g', "--."},
    {'h', "...."},
    {'i', ".."},
    {'j', ".---"},
    {'k', "-.-"},
    {'l', ".-.."},
    {'m', "--"},
    {'n', "-."},
    {'o', "---"},
    {'p', ".--."},
    {'q', "--.-"},
    {'r', ".-."},
    {'s', "..."},
    {'t', "-"},
    {'u', "..-"},
    {'v', "...-"},
    {'w', ".--"},
    {'x', "-..-"},
    {'y', "-.--"},
    {'z', "--.."},
    {'0', "-----"},
    {'1', ".----"},
    {'2', "..---"},
    {'3', "...--"},
    {'4', "....-"},
    {'5', "....."},
    {'6', "-...."},
    {'7', "--..."},
    {'8', "---.."},
    {'9', "----."},
    // Leerzeichen zur Worttrennung werden im Morsecode
    // durch einen Slash '/' umgeben von Leerzeichen
    // dargestellt ...
    // (Alternative: Trennung durch 3 Leerzeichen)
    // Hier bei uns, um die Testläufe eindeutiger zu
    // machen: Trennung mittels drei Slashes
    {' ', "///"},
    {'.', ".-.-.-"},
    {',', "--..--"},
    {':', "---..."},
    {'?', "..--.."},
    {'-', "-....-"},
    {'/', "-..-."},
    {'@', ".--.-."},
    {'=', "-...-"}
};
int main()
{
    string s;

    cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) < 91 && s.at(i) > 64)
            s.at(i) += 32;

                if (s.at(i) == ' ')
            cout << "///"
                 << "#";
        else
        {
            for (int j = 0; j < 48; j++)
            {
                if (s.at(i) == morse_data[j].letter)
                {
                    cout << morse_data[j].morse_code;
                    cout << "#";
                }
            }
        }
    }
    cout << endl;
    system("pause");
    return 0;
}