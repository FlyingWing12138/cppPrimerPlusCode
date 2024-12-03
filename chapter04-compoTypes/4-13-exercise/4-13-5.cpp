#include <iostream>
#include <cstring>

using namespace std;

struct CandyBar
{
    string brand;
    float weight;
    unsigned int calorie;
};

int main()
{
    CandyBar snack = 
    {
        "Mocha Munch",
        2.3,
        350
    };

    cout << "Brand: " << snack.brand << endl;
    cout << "Weight: " << snack.weight << endl;
    cout << "Calories: " << snack.calorie << endl;

    return 0;
}