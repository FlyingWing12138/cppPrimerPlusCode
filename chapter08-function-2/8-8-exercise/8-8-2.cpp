#include <iostream>
#include <cstring>

struct Candybar{
    char brand[50];
    double weight;
    unsigned int calorie;
};

void AssignCandy(Candybar & CandyStruct, const char * brand = "Millennium Munch", const double & weight = 2.85, const unsigned int & calorie = 350);

int main()
{
    Candybar MAGA;
    Candybar PUTIN;

    const char * brand = "Donald Trump";
    double weight = 114.514;
    unsigned int calorie = 1919810;

    AssignCandy(MAGA, brand, weight, calorie);
    AssignCandy(PUTIN);

    return 0;
}

void AssignCandy(Candybar & CandyStruct, const char * brand, const double & weight, const unsigned int & calorie)
{
    using namespace std;

    // CandyStruct.brand[50] = brand;
    strncpy(CandyStruct.brand, brand, 49);
    CandyStruct.brand[50] = '\0';
    CandyStruct.weight = weight;
    CandyStruct.calorie = calorie;

    cout << "Make Candybar Great Again!!!\n";
    cout << "Candy brand: \t" << CandyStruct.brand << endl;
    cout << "Candy weight: \t" << CandyStruct.weight << endl;
    cout << "Candy calorie: \t" << CandyStruct.calorie << endl; 

}