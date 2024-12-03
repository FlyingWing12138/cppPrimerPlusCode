#include <iostream>
#include <cstring>

using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void PointerAssign(const char * maker, const float * height, const float * width, const float * length, box * pointerBox);
box StructAssign(char maker[40], float height, float width, float length);
void ShowBox(const box * pointerBox);

int main()
{
    char maker[40];
    float height;
    float width;
    float length;
    cout << "Enter the maker of a box: ";
    cin.get(maker, 40).get();
    cout << "Enter the height of a box: ";
    cin >> height;
    cout << "Enter the width of a box: ";
    cin >> width;
    cout << "Enter the length of a box: ";
    cin >> length;
    box XBOX = StructAssign(maker, height, width, length);
    box pointerXBOX;
    PointerAssign(maker, &height, &width, &length, &pointerXBOX);
    cout << "Struct assigned box: \n";
    ShowBox(&XBOX);
    cout << "Pointer assigned box: \n";
    ShowBox(&pointerXBOX);
    cout << "Change height: ";
    cin >> height;
    cout << "Sturct assigned box: \n";
    ShowBox(&XBOX);
    cout << "Pointer assigned box: \n";
    ShowBox(&pointerXBOX);
}

void PointerAssign(const char * maker, const float * height, const float * width, const float * length, box * pointerBox)
{
    strcpy(pointerBox->maker, maker);
    // pointerBox->maker = maker;
    pointerBox->height = *height;
    pointerBox->width = *width;
    pointerBox->length = *length;
    pointerBox->volume = (*height)*(*width)*(*length);
}

box StructAssign(char maker[], float height, float width, float length)
{
    box assignedBox;

    strcpy(assignedBox.maker, maker);
    // assignedBox.maker = maker;
    assignedBox.height = height;
    assignedBox.width = width;
    assignedBox.length = length;
    assignedBox.volume = height*width*length;
    
    return assignedBox;
}

void ShowBox(const box * pointerBox)
{   
    cout << "Manufacturer: " << pointerBox->maker << endl;
    cout << "Height: " << pointerBox->height << endl;
    cout << "Width: " << pointerBox->width << endl;
    cout << "Length: " << pointerBox->length << endl;
    cout << "Volume: " << pointerBox->volume << endl;
}