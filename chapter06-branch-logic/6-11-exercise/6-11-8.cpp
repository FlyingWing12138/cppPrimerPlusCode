#include <iostream>
#include <fstream>
#include <cstdlib>

int main()
{
    
    using namespace std;

    string fileName;
    ifstream inFile;

    cout << "Enter name of data file: ";
    getline(cin, fileName);
    inFile.open(fileName);

    if (!inFile.is_open())
    {
        cout << "Could not open file " << fileName << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    int count = 0;
    char ch;

    inFile >> ch;
    while(inFile.good())
    {
        ++count;
        cout << ch;
        inFile >> ch;
    }
    if (inFile.eof())
        cout << "\nEnd of file reached.\n";
    if (0 == count)
        cout << "\nNo data processed.\n";
    else
        cout << "Characters read: " << count << endl;

    inFile.close();

    return 0;

}
