#include <iostream>

void charPrint(const char * ch, int n);

int main()
{
    char hello[50] = "Hello World!";
    charPrint(hello, 5);
    return 0;
}

void charPrint(const char * ch, int n)
{
    using namespace std;

    if (n > 1)
    {
        cout << ch << endl;
        n--;
        charPrint(ch, n);
    }
    else
    {
        cout << ch << endl;
    }
}