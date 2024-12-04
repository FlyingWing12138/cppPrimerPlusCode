// bondini.cpp -- using escape sequences
#include <iostream>

int main()
{
    using namespace std;

    cout << "\007Operation \"HyperHyper\" is now activated!\n";
    cout << "Enter your agent code:*******\b\b\b\b\b\b\b";      // pass code is 7355608
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan Z3! Eat g\u00E2teau! \n";

    // wide char type
    wchar_t bob = L'P';
    wcout << L"tall " << bob << endl;

    // char16_t and char_32_t
    char16_t ch1 = u'q';            // basic character in 16-bit form
    char32_t ch2 = U'\U0000222B';   // universal character name in 32-bit form
    cout << ch1 << " " << ch2 << endl;

    return 0;
}