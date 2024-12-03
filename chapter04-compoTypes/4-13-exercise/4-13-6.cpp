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
    CandyBar snack[3] = 
    {
        {"Mocha Munch", 2.3, 350},
        {"Cai Xukun", 2.5, 2500},
        {"Ma Jiaqi", 2.7, 250}
    };

    cout << "Brand: " << snack[0].brand << endl;
    cout << "\tWeight: " << snack[0].weight << endl;
    cout << "\tCalories: " << snack[0].calorie << endl;

    cout << "Brand: " << snack[1].brand << endl;
    cout << "\tWeight: " << snack[1].weight << endl;
    cout << "\tCalories: " << snack[1].calorie << endl;

    cout << "Brand: " << snack[2].brand << endl;
    cout << "\tWeight: " << snack[2].weight << endl;
    cout << "\tCalories: " << snack[2].calorie << endl;

    return 0;
}