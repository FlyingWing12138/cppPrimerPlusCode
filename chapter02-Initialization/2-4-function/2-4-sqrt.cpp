// sqrt.cpp -- using the sqrt() function

#include <iostream>
#include <cmath>    // or math.h

int main()
{

    using namespace std;

    double area;
    cout << "Enter the floor area, in square meter, for your home: ";
    cin >> area;
    
    double side;
    side = sqrt(area);
    // double side = sqrt(area);
    cout << "That's the equivalent of a square " << side 
         << " meter to the side." << endl;
    cout << "How fascinating!" << endl;

    return 0;

}