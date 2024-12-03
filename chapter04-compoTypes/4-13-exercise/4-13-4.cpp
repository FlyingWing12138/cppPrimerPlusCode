#include <iostream>
#include <cstring>
#include <string>

int main()
{
    using namespace std;

    // int charSize = 20;
    string firstName;
    string lastName;
    string Name;
   
    cout << "Enter your first name: \n";
    getline(cin, firstName);
    cout << "Enter your last name:\n";
    getline(cin, lastName);

    Name = lastName + ", " + firstName;
    cout << "Here's the information in a single string: " << Name << endl;

    return 0;

}