#include <iostream>
#include <array>

int main()
{
    using namespace std;

    array<float, 3> run;

    cout << "Enter first 100 m time: \n";
    cin >> run[0];
    cout << "Enter second 100 m time: \n";
    cin >> run[1];
    cout << "Enter third 100 m time: \n";
    cin >> run[2];

    float mean = (run[0] + run[1] + run[2]) / 3;
    int num = sizeof(run) / sizeof(run[0]);

    cout << "100 m average time: " << mean << endl;
    cout << "Times: " << num << endl;

    return 0;
}