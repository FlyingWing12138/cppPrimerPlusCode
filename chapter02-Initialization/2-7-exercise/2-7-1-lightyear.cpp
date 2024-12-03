#include <iostream>
double light2AstroU(double);

int main()
{

    using namespace std;
    
    cout << "Enter the number of light years: ";
    double lightyear;
    cin >> lightyear;
    double astroU = light2AstroU(lightyear);
    cout << lightyear << " light years = " << astroU << " astronomical units." << endl;

    return 0;

}

double light2AstroU(double lightyear)
{
    return lightyear * 63240;
}