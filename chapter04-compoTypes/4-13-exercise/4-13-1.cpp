#include <iostream>

int main()
{
    using namespace std;

    int charSize = 20;
    char firstName[charSize];
    char lastName[charSize];
    char grade[2];
    int age;
    
    cout << "What is your first name?\n";
    cin.getline(firstName,charSize);
    cout << "What is your last name?\n";
    cin.getline(lastName, charSize);
    cout << "What letter grade do you deserve?\n";
    cin.getline(grade, 2);
    cout << "What is your age?\n";
    cin >> age;

    cout << "Name: " << lastName << ", " << firstName << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age;

    return 0;
}