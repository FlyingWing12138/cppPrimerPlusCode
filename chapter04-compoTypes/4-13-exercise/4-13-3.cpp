#include <iostream>
#include <cstring>

int main()
{
    using namespace std;

    int charSize = 20;
    char firstName[charSize];
    char lastName[charSize];
    char Name[charSize * 3];
   
    cout << "Enter your first name: \n";
    cin.getline(firstName, charSize);
    cout << "Enter your last name:\n";
    cin.getline(lastName, charSize);

    strcpy(Name, lastName);
    strcat(Name, ", ");
    strcat(Name, firstName);
    cout << "Here's the information in a single string: " << Name << endl;

    return 0;

}