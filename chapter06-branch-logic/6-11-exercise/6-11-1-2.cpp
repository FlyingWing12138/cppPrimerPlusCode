#include <iostream>
#include <cctype>

int main()
{
    using namespace std;

    char input;
    cout << "Input anything: \n";
    
    while ((input = cin.get()) != '@')
    {
        if (isdigit(input))
            continue;
        else if (islower(input))
            input = toupper(input);
        else if (isupper(input))
            input = tolower(input);
        
        cout << input;
    }

    cout << "\nFinished\n";

    return 0;
}