// init.cpp -- type changes on initialization
#include <iostream>

int main()
{
    using namespace std;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3;     // int converted to float
    int guess(3.9832);  // double converted to int
    int debt = 7.2e12;  // result not defined in C++

    cout << "tree = " << tree << endl;
    cout << "guess = " << guess <<endl;
    cout << "debt = " << debt << endl;

    // list initialization doesn't allow narrowing
    const int code = 66;
    int x = 66;
    char c1 {31325};    // narrowing not allowed
    char c2 = {66};     // allowed because car can hold 66
    char c3 = {code};   // ditto
    char c4 = {x};      // not allowed, x is not constant
    x = 31325;
    char c5 = x;        // allowed by this form of initialization

    return 0;
}