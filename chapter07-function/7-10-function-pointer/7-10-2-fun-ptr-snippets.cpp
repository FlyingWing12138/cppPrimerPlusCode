// cpp snippets

// function prototypes
const double *f1(const double ar[], int n);
const double *f2(const double[], int);
const double *f3(const double *, int);
// equal

// pointers
const double *(*p1)(const double *, int) = f1;
auto p2 = f2; // C++11 automatic type deduction

const double av[];
// cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
// cout << p2(av, 3) << ": " << *p2(av, 3) << endl;
// cout << double address << ": " << double value << endl;

const double * (*pa[3])(const double *, int) = {f1, f2, f3};
// function pointer array
// pa[3], a 3 element array; *pa[3], a 3 pointer array; pa, a 3 pointer array, where pointers point to a function which takes const double * and int value as argument, and returns const double * value.

// auto pa[3]; invalid
auto pb = pa;   // valid

const double * px = pa[0](av, 3);
const double * py = (*pb[1])(av, 3);
double x = *pa[0](av, 3);
double y = *(*pb[1])(av, 3);

auto pc = &pa;  // C++11 automatic type deduction
// *pd[3];    // an array of 3 pointers
// *(pd)[3];  // a pointer to an array of 3 elements
const double *(*(*pd)[3])(const double *, int) = &pa;
// **&pa == *pa == pa[0]