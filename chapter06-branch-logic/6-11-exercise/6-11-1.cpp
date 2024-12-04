#include <iostream>
#include <cctype>

int main()
{
    using namespace std;

    char input;
    cout << "Input anything: \n";
    cin.get(input);
    while (input != '@')
    {
        if (isdigit(input))
        {
            cin.get(input);
            continue;
        }
           
        
        if (isupper(input))
        {
            char inputLower = tolower(input);
            cout << inputLower;
        }
        else if (islower(input))
        {
            char inputUpper = toupper(input);
            cout << inputUpper;
        }
        else
        {
            cout << input;
        }
        
        cin.get(input);
    }

    return 0;
}