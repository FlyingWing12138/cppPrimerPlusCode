#include <iostream>

using namespace std;

const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[], int n);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;

    student *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);

    cout << endl
         << "==== Students Display ====" << endl;

    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete[] ptr_stu;
    cout << "Done\n";
    return 0;
}

// getinfor() has two arguments: a pointer to the first element of an array of student structrues and an int representing the number of elements of the array. The function solicits and stores data about students. It terminates input upon filling the array or upon encountering a blank line for the student name. The function returns the actual number of array elements filled.
int getinfo(student pa[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter information for student " << i + 1 << ": \n";
        cout << "Name: ";
        // if (cin.get() == '\n')
        // {
        //     break;
        // }
        // else
        // {
        cin.getline(pa[i].fullname, SLEN);
        if (pa[i].fullname[0] == '\0')
            break;
        cout << "Hobby: ";
        cin.getline(pa[i].hobby, SLEN);
        cout << "OOP Level: ";
        cin >> pa[i].ooplevel;
        count += 1;
        cin.get();
        // }
    }

    return count;
}

// display1() takes a student structure as an argument and displays its contents
void display1(student st)
{
    cout << "Student name : " << st.fullname << endl;
    cout << "Student hobby: " << st.hobby << endl;
    cout << "Student ooplevel: " << st.ooplevel << endl;
    cout << "End of display.\n";
}

// display2() takes the address of student structure as an argument and displays the structure's contents
void display2(const student *ps)
{
    cout << "Student name : " << ps->fullname << endl;
    cout << "Student hobby: " << ps->hobby << endl;
    cout << "Student ooplevel: " << ps->ooplevel << endl;
    cout << "End of display.\n";
}

// display3() takes the address of the first element of an array of student structures and the number of array elements as arguments and displays the contents of the structures
void display3(const student pa[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Student name : " << pa[i].fullname << endl;
        cout << "Student hobby: " << pa[i].hobby << endl;
        cout << "Student ooplevel: " << pa[i].ooplevel << endl;
        cout << "End of display.\n";
    }
}