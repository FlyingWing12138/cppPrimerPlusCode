#include <iostream>
#include <cstring>

int main()
{
    using namespace std;

    //int charSize = 20;
    string firstName;
    string lastName;
    string grade;
    int age;
    
    cout << "What is your first name?\n";
    getline(cin, firstName);
    cout << "What is your last name?\n";
    getline(cin, lastName);
    cout << "What letter grade do you deserve?\n";
    getline(cin, grade);
    cout << "What is your age?\n";
    cin >> age;

    cout << "Name: " << lastName << ", " << firstName << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age;

    return 0;
}