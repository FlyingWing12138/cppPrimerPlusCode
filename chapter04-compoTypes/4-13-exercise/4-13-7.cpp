#include <iostream>
#include <cstring>

using namespace std;

struct vaffanculo
{
    string companyName;
    float diameter;
    float weight;
};

int main()
{
    vaffanculo pizzaAnanas;
    
    cout << "Enter pizza company: \n";
    getline(cin, pizzaAnanas.companyName);
    cout << "Enter pizza diameter (in centimeter): \n";
    cin >> pizzaAnanas.diameter;
    cout << "Enter pizza weight (in gram): \n";
    cin >> pizzaAnanas.weight;

    cout << "We've got a pizza from " << pizzaAnanas.companyName << " company.\n";
    cout << "Pizza diameter: " << pizzaAnanas.diameter << " cm.\n";
    cout << "Pizza weight: " << pizzaAnanas.weight << " g.\n";

    return 0;
}