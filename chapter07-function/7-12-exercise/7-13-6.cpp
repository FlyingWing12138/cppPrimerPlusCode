#include <iostream>

using namespace std;
const int MAX = 10;

int Fill_array(double arrayName[], int arrayLength);
void Show_array(double arrayName[], int arrayNum);
void Reverse_array(double arrayName[], int arrayNum);

int main()
{
    cout << "Please enter arbitary numbers: \n";
    double randomArray[MAX];
    int size = Fill_array(randomArray, MAX);
    Show_array(randomArray, size);
    Reverse_array(randomArray, size);
    Show_array(randomArray, size);
    Reverse_array(randomArray + 1, size - 2);
    Show_array(randomArray, size);

    return 0;
}

int Fill_array(double arrayName[], int arrayLength)
{
    double temp;
    int i;
    for (i = 0; i < arrayLength; i++)
    {
        cout << "Enter value #" << i + 1 << ": ";
        cin >> temp;
        while (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input. Please enter a valid number: ";
            cin >> temp;
        }
        if (temp < 0)
            break;
        arrayName[i] = temp;
    }

    return i;
}

void Show_array(double arrayName[], int arrayNum)
{
    cout << "Array elements: ";
    for (int i = 0; i < arrayNum; i++)
        cout << arrayName[i] << ", ";
    cout << endl;
}

void Reverse_array(double arrayName[], int arrayNum)
{
    for (int i = 0; i < arrayNum/2; i++)
    {
        double t = arrayName[i];
        arrayName[i] = arrayName[arrayNum - i - 1];
        arrayName[arrayNum - i - 1] = t;
    }    
}