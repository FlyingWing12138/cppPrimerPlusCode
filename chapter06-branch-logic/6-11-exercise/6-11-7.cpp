#include <iostream>
#include <cctype>
//#include <string>

int main()
{
    using namespace std;

    string input;
    int vowels = 0;
    int consonants = 0;
    int others = 0;

    cout << "Enter words (q to quit): \n";
    cin >> input;

    while ("q" != input)
    {
        char ch = tolower(input[0]);

        if (!isalpha(ch))
            others++;
        else
        {
            switch (ch)
            // case ('a'||'e'||'i'||'o'||'u'): ?
            {
            case 'a':;
            case 'e':;
            case 'i':;
            case 'o':;
            case 'u':
                vowels++;
                break;

            default:
                consonants++;
                break;
            }
        }
        cin >> input;
    }

    cout << vowels << " words beginning with vowels\n";
    cout << consonants << " words beginning with consonants\n";
    cout << others << " others\n";

    return 0;
}