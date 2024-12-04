#include <iostream>

int main()
{
    using namespace std;

    cout << "Please enter one of the following choices: \n";
    cout << "c) carnivore \t p) pianist \n";
    cout << "t) tree \t g) game \n";

    char input;
    // input = cin.get();
    while (cin >> input)
    {
        switch (input)
        {
        case 'c':
            cout << "A tiger is a carnivore.\n";
            break;
        case 'p':
            cout << "Chopin was a pianist.\n";
            break;
        case 't':
            cout << "A maple is a tree.\n";
            break;
        case 'g':
            cout << "Black Myth Wukong is a video game.\n";
            break;
        default:
            cout << "Please enter \"c\", \"p\", \"t\", or \"g\".\n";
        }
    }

    return 0;
}