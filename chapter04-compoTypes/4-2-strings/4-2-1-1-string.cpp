#include <iostream>

int main()
{
    using namespace std;

    char dog[8] = {'b', 'e', 'a', 'u', 'x', ' ', 'I', 'I'};     // not a string
    char cat[8] = {'f', 'a', 't', 'e', 's', 's', 'a', '\0'};    // a string

    cout << "cat char array contains: " << cat << endl;
    cout << "dog char array contains: " << dog << endl;  // print RAM content until hits '\0'

    return 0;
}