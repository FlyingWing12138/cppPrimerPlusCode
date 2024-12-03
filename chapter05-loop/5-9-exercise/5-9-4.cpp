#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    const double INIT = 100;
    double daphne = INIT;
    double cleo = INIT;
    int i = 0;

    do{
        daphne += INIT * 0.1;
        cleo += cleo * 0.05;
        ++i;
    } while(daphne >= cleo);

    cout << "After " << i << " years, Cleo has " << cleo;
    cout << " dollar, Daphne has " << daphne << " dollar.\n";

    return 0;
}