#include <iostream>
#include <cstring>

int main()
{
    using namespace std;

    string temp;
    int num = 0;
    const char * done = "done";

    cout << "Enter words (to stop, type the word \"done\"):\n";
    
    while (done != temp)
    {
        cin >> temp;
        num++;
    }

    cout << "Input finished\n";
    cout << "You entered a total of " << num - 1 << " words.\n";

    return 0;

}