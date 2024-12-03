#include<iostream>

int main()
{
    using namespace std;

    long long input_seconds;
    long long remain_seconds;

    cout << "Enter the number of seconds: \n";
    cin >> input_seconds;

    int days;
    int hours;
    int minutes;
    int seconds;

    const int minutes2seconds = 60;
    const int hours2minutes = 60;
    const int days2hours = 24;

    seconds = input_seconds % minutes2seconds;
    remain_seconds = input_seconds - seconds;
    minutes = (remain_seconds % (minutes2seconds * hours2minutes))/minutes2seconds;
    remain_seconds = remain_seconds - minutes * minutes2seconds;
    hours = (remain_seconds % (minutes2seconds * hours2minutes * days2hours))/(hours2minutes * minutes2seconds);
    remain_seconds = remain_seconds - hours * hours2minutes * minutes2seconds;
    days = remain_seconds / (minutes2seconds * hours2minutes * days2hours);

    cout << input_seconds << " seconds = ";
    cout << days << " days " << hours << " hours ";
    cout << minutes << " minutes " << seconds << " seconds.";

    return 0;
}