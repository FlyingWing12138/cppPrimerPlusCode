// plus_one.cpp -- the increment operator
#include <iostream>

int main()
{
    using std::cout;
    using std::endl;

    int a = 20;
    int b = 20;

    cout << "a = " << a << "; b = " << b << "\n";
    cout << "a++ = " << a++ << "; ++b = " << ++b << "\n";
    cout << "a = " << a << "; b = " << b << "\n";

    double arr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double *pt = arr;       // pt points to arr[0], i.e. to 21.1
    cout << "\npt points to " << *pt << " at location " << pt << endl;
    double *x = ++pt;       // x points to arr[1], i.e. to 32.8
    cout << "*x = ++pt, x points to " << *x << " at location " << x << endl;
    cout << "pt points to " << *pt << " at location " << pt << endl;

    pt = arr;
    cout << "\npt initialized to " << *pt << " at location " << pt << endl;
    double y = *++pt;       // increment pointer, take the value; i.e., arr[2], or 23.4
    cout << "y = *++pt, y has the value " << y << endl;
    cout << "pt points to " << *pt << " at location " << pt << endl;

    pt = arr;
    cout << "\npt initialized to " << *pt << " at location " << pt << endl;
    double z = ++*pt;       // increment the pointed-to value, i.e., change 23.4 to 24.4
    cout << "z = ++*pt, z has the value " << z << endl;
    cout << "pt points to " << *pt << " at location " << pt << endl;

    pt = arr;
    cout << "\npt initialized to " << *pt << " at location " << pt << endl;
    double xx = (*pt)++;    // increment pointed-to value
    cout << "xx = (*pt)++, xx has the value " << xx << endl;
    cout << "pt points to " << *pt << " at location " << pt << endl;

    pt = arr;
    cout << "\npt initialized to " << *pt << " at location " << pt << endl;
    double yy = *pt++;      // dereference original location, then increment pointer
    cout << "yy = *pt++, yy has the value " << yy << endl;
    cout << "pt points to " << *pt << " at location " << pt << endl;
    
    return 0;
}