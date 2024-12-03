#include <iostream>

using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void BoxShow(const box);
void BoxVolume(box *);

int main()
{
    box XBOX = box{"Microsoft", 0.4, 0.3, 0.2, 1};
    BoxVolume(&XBOX);
    BoxShow(XBOX);

    return 0;
}

void BoxVolume(box * boxStruct)
{
    boxStruct->volume = boxStruct->height * boxStruct->length * boxStruct->width;
}

void BoxShow(const box boxStruct)
{
    cout << "Manufacturer: " << boxStruct.maker << endl;
    cout << "Height: " << boxStruct.height << endl;
    cout << "Width: " << boxStruct.width << endl;
    cout << "Length: " << boxStruct.length << endl;
    cout << "Volume: " << boxStruct.volume << endl;
}