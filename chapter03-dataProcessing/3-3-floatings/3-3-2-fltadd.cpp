// fltadd.cpp -- precision problems with float
#include <iostream>

int main()
{
    using namespace std;
    float a = 2.34e22f;
    // float a = (float)2.34e22;
    float b = a + 1.2f;

    cout << "a = " << a << endl;
    cout << "b - a = " << b - a << endl;

    return 0;
}