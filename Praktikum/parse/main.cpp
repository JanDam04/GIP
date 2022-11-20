#include <iostream>
#include <string>

bool expect(char c, std::string &input, std::size_t pos)
{
    std::cout << "Teste auf das Zeichen " << c << std::endl;
    if (pos >= input.length())
    {
        std::cout << "Aber schon am Ende der "
                  << "Eingabe-Zeichenkette angelangt.\n";
        return false;
    }
    if (input.at(pos) == c)
    {
        std::cout << "Zeichen " << c << " gefunden.\n";
        return true;
    }
    else
    {
        std::cout << "Test auf " << c << " nicht erfolgreich. "
                  << "Stattdessen " << input.at(pos)
                  << " gesehen." << std::endl;
        return false;
    }
}

void match(char c, std::string &input, std::size_t &pos)
{
    std::cout << "Betrete match() fuer das Zeichen " << c << std::endl;
    if (pos >= input.length())
    {
        std::cout << "Error! Input-Zeichenkette zu kurz. "
                  << "Erwarte noch das Zeichen " << c << std::endl
                  << "Verlasse match()" << std::endl;
        return;
    }
    if (input.at(pos) != c)
    {
        std::cout << "Error! An Position "
                  << pos << " erwarte "
                  << c << " und sehe " << input.at(pos) << std::endl;
        std::cout << "Verlasse match()" << std::endl;

        return;
    }
    pos++;
    std::cout << "Zeichen " << c << " konsumiert.\n"
              << "Verlasse match() fuer das Zeichen "
              << c << std::endl;
}

void parse_gesamtausdruck(std::string &input, std::size_t &pos);
void parse_ausdruck(std::string &input, std::size_t &pos);
void parse_term(std::string &input, std::size_t &pos);
void parse_operand(std::string &input, std::size_t &pos);
void parse_number(std::string &input, std::size_t &pos);

void parse_gesamtausdruck(std::string &input, std::size_t &pos)
{
    std::cout << "Betrete parse_gesamtausdruck()" << std::endl;

    parse_ausdruck(input, pos);

    match('.', input, pos);

    std::cout << "Verlasse parse_gesamtausdruck()" << std::endl;
}

void parse_ausdruck(std::string &input, std::size_t &pos)
{
    std::cout << "Betrete parse_ausdruck()" << std::endl;

    parse_term(input, pos);

    while (expect('U', input, pos) ||
           expect('O', input, pos))
    {
        if (expect('U', input, pos))
        {
            std::cout << "Betrete parse_ausdruck(): U Fall" << std::endl;

            match('U', input, pos);
            parse_term(input, pos);

            std::cout << "Verlasse parse_ausdruck(): U Fall"
                      << std::endl;
        }
        else if (expect('O', input, pos))
        {
            std::cout << "Betrete parse_ausdruck(): O Fall" << std::endl;

            match('O', input, pos);
            parse_term(input, pos);

            std::cout << "Verlasse parse_ausdruck(): O Fall"
                      << std::endl;
        }
    }

    std::cout << "Verlasse parse_ausdruck()" << std::endl;
}

void parse_term(std::string &input, std::size_t &pos)
{
    std::cout << "Betrete parse_term()" << std::endl;

    parse_operand(input, pos);
    int c_s = 0;
    while (expect('>', input, pos) || expect('<', input, pos))
    {
        if (expect('>', input, pos))
        {
            std::cout << "Betrete parse_term(): > Fall" << std::endl;

            match('>', input, pos);

            parse_operand(input, pos);
            c_s++;

            std::cout << "Verlasse parse_term(): > Fall" << std::endl;
        }
        else if (expect('<', input, pos))
        {
            std::cout << "Betrete parse_term(): < Fall" << std::endl;

            match('<', input, pos);

            parse_operand(input, pos);
            c_s++;

            std::cout << "Verlasse parse_term(): < Fall" << std::endl;
        }
    }

    std::cout << "Verlasse parse_term()" << std::endl;
}

void parse_operand(std::string &input, std::size_t &pos)
{
    std::cout << "Betrete parse_operand()" << std::endl;

    if (expect('(', input, pos))
    {
        std::cout << "Betrete parse_operand(): '(' Fall" << std::endl;

        match('(', input, pos);
        parse_ausdruck(input, pos);

        match(')', input, pos);

        std::cout << "Verlasse parse_operand(): '(' Fall" << std::endl;
    }
    else
    {
        parse_number(input, pos);
    }

    std::cout << "Verlasse parse_operand()" << std::endl;
}

void parse_number(std::string &input, std::size_t &pos)
{
    std::cout << "Betrete parse_number()" << std::endl;
    char ch = 48;
    int c = 0;
    while (expect(ch, input, pos) == false)
    {

        if (ch > 57)
        {
            std::cout << "Nummer nicht gefunden." << std::endl;

            break;
            c = 1;
        }

        ch++;
    }
    if (ch == input.at(pos))
    {
        match(ch, input, pos);
    }
    else if (c == 0)
    {
        std::cout << "Error! Nummer oder Operand an stelle " << pos << " erwartet, stattdessen " << input.at(pos) << " erhalten." << std::endl;
    }

    std::cout << "Verlasse parse_number()" << std::endl;
}

int main()
{
    std::size_t pos = 0;

    std::cout << "Bitte geben Sie die Zeichenkette ein: ";

    std::string input;
    std::getline(std::cin, input);

    parse_gesamtausdruck(input, pos);

    if (pos != input.length())
    {
        std::cout << "Error! Noch Input-Zeichen uebrig.\n";
    }

    std::system("PAUSE");
    return 0;
}
