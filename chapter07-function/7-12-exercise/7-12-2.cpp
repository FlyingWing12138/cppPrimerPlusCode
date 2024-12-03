#include <iostream>

const int NumScore = 10;
using namespace std;

int InputScore(float scoreArray[], int num);
void DisplayScore(float scoreArray[], int size);
float MeanScore(float scoreArray[], int size);

int main()
{   
    float golfScores[NumScore];
    cout << "Please enter golf score, maximum 10 scores, enter a negative value to terminate: \n";
    int games = InputScore(golfScores, NumScore);
    cout << "Golf scores: \n";
    DisplayScore(golfScores, games);
    float meanScore = MeanScore(golfScores, games);
    cout << "Mean score: " << meanScore;

    return 0;
}

int InputScore(float scoreArray[], int num)
{
    int i;
    float temp;
    for (i = 0; i < num; i++)
    {
        cout << "Please enter score #" << i + 1 << ": ";
        cin >> temp;
        while (!cin)
        {
            cin.clear();                // 丢弃全部输入，仅保留临时输入流，否则会死循环
            while (cin.get() != '\n')   // 遍历输入的垃圾字符，并且全部丢弃，直到换行符
                continue;
            cout << "Bad input, please enter a valid number: ";
            cin >> temp;
        }
        if (temp < 0)
            break;
        scoreArray[i] = temp;
    }
    return i;
}

void DisplayScore(float scoreArray[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Golf score round " << i + 1 << ": ";
        cout << scoreArray[i] << endl;
    }
}

float MeanScore(float scoreArray[], int size)
{
    float sum = 0;
    float mean;
    for (int i = 0; i < size; i++)
        sum += scoreArray[i];
    mean = sum/size;

    return mean;
}