#include <iostream>

// int sum(int (*ar2)[4], int size);
int sum(int ar2[][4], int size);
// ar2 is a pointer

int main()
{
    int data [3][4] = {{1,2,3,4}, {9,8,7,6}, {2,4,6,8}};
    int total = sum(data, 3);

    int a[100][4];
    int b[6][4];

    int total1 = sum(a, 100);       // sum all of a
    int total2 = sum(b, 6);         // sum all of b
    int total3 = sum(a, 10);        // sum first 10 rows of a
    int total4 = sum(a+10, 20);     // sum next 20 rows of a
}

int sum(int ar2[][4], int size)
{
    int total = 0;
    for (int r = 0; r < size; r++)
    {
        for (int c = 0; c < 4; c++)
            total += ar2[r][c];
    }
    return total;

    // ar2[r][c] == *(*(ar2 + r) + c)
}