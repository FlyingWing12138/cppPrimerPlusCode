    cout << "\nGrand Patrons: \n";
    int grandPatrons = 0;
    for (int j = 0; j < number; j++)
    {
        if (10000 <= (patronList + j)->Money)
        {
            cout << patronList[j].Name << "\t" << patronList[j].Money << endl;
            grandPatrons += 1;
        }
    }
    if (0 == grandPatrons)
        cout << "None\n";

    cout << "\nPatrons: \n";
    bool isEmpty = true;
    for (int k = 0; k < number; k++)
    {
        if (10000 > patronList[k].Money)
        {
            cout << (patronList + k)->Name << "\t" << patronList[k].Money << endl;
            isEmpty = false;
        }
    }
    if (isEmpty)
        cout << "None\n";