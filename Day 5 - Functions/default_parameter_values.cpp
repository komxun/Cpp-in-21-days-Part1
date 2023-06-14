// Listing 5.7 - Default Parameter Values (P.117)
#include <iostream>

int AreaCube(int length, int width = 25, int height = 1);
// default value of width = 25, height = 1

int main()
{
    int length = 100;
    int width = 50;
    int height = 2;
    int area;

    area = AreaCube(length, width, height);
    std::cout << "First area = " << area << "\n\n";

    area = AreaCube(length, width);   // hieght = default
    std::cout << "Second area = " << area << "\n\n";

    area = AreaCube(length);    // width = default, height = default
    std::cout << "Third area = " << area << "\n\n";

    return 0;
}

int AreaCube(int length, int width, int height)
{
    using std::cout;
    cout << "length = " << length;
    cout << "\nwidth = " << width;
    cout << "\nheight = " << height << "\n";
    return (length * width * height);
}