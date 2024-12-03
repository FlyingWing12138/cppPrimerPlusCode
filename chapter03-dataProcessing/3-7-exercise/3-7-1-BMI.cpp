#include<iostream>
#include<cmath>

int main()
{
    using namespace std;

    float inch;
    float in;
    float pound;

    const float inch2in = 12;
    const float in2m = 0.0254;
    const float kg2pound = 2.2;

    cout << "Please enter your heigh in inch and in: \n";
    cout << "inch: ";
    cin >> inch;
    cout << "in: ";
    cin >> in;
    cout << "Please enter your weight in pounds: \n";
    cin >> pound;

    float foot = (inch * inch2in + in);
    float height = foot * in2m;
    float weight = pound / kg2pound;
    float BMI = weight / pow(height, 2);

    cout << "Your height is: " << foot << " in inch, " << height << " in m;\n";
    cout << "Your weight is: " << weight << " kg;\n";
    cout << "Your BMI is: " << BMI << "." << endl;

    return 0;
}