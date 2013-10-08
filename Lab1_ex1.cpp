#include <cassert>
#include <iostream>
using namespace std;
void cal_rectangle_ptr(int* widthPtr, int* heightPtr)
{
	std::cout << "Perimeter: "<< 2 * (*widthPtr + *heightPtr);
	std::cout << "Area: " << *widthPtr * *heightPtr;
}
int main(int argc, char* argv[])
{
	int width;
	do{
		std::cout << "Input width of a rectangle.\n";
		std::cin >> width;
	}while(width>=20000 and width <= 1);
    int height;
	do{
		std::cout << "Input height of a rectangle.\n";
		std::cin >> height;
	}while(width>=10000 and width <= 1);
	cal_rectangle_ptr(&width, &height);
	return 0;
}


