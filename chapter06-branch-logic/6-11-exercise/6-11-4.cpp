#include <iostream>
#define strsize 20

using namespace std;

struct bop
{
    char fullname[strsize]; // real name
    char title[strsize];    // job title
    char bopname[strsize];  // secret BOP name
    int preference;         // 0 = fullname, 1 = title, 2 = bopname
};

int main()
{
    int playerNum = 5;
    bop player[playerNum] = {
        {"Wimp Macho", "Full Professor", "MyPenis18cm", 0},
        {"Raki Rhodes", "Junior Programer", "MyTitsFCup", 1},
        {"Celia Laiter", "Prositute", "MIPS", 2},
        {"Hoppy Hipman", "Analyst Trainee", "TwoDicksMan", 1},
        {"Pat Hand", "Male Prostitute", "LOOPY", 2}};

    cout << "Benevolent Order of Programmers Report: \n";
    cout << "a. display by name \t b. display by title\n";
    cout << "c. display by bopname \t d. display by preference\n";
    cout << "q. quit\n";
    cout << "Enter your choice: ";

    char input;
    cin >> input;
    while (input != 'q')
    {
        switch (input)
        {
        case 'a':
        {
            for (int i = 0; i < playerNum; i++)
            {
                cout << player[i].fullname << endl;
            }
            break;
        }
        case 'b':
            for (int i = 0; i < playerNum; i++)
            {
                cout << player[i].title << endl;
            }
            break;
        case 'c':
            for (int i = 0; i < playerNum; i++)
            {
                cout << player[i].bopname << endl;
            }
            break;
        case 'd':
            for (int i = 0; i < playerNum; i++)
            {
                switch (player[i].preference)
                {
                case 0:
                    cout << player[i].fullname << endl;
                    break;
                case 1:
                    cout << player[i].title << endl;
                    break;
                case 2:
                    cout << player[i].bopname << endl;
                    break;
                }
            };
            break;
        }
        cout << "Next choice: ";
        cin >> input;
    }
    cout << "Bye!";

    return 0;
}