// forstr1.cpp -- using for with a string
#include <iostream>
#include <string>

int main()
{
    using namespace std;

    cout << "Enter a word: ";
    string word;
    cin >> word;

    // display letters in reversed order
    for (int i = word.size() - 1; i >= 0; i--)
        cout << word[i];
    cout << "\nFuck you.\n";

    return 0;
}