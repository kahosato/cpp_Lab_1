#include <cassert>
#include <iostream>
using namespace std;
void cal_rectangle_ptr(int* widthPtr, int* heightPtr)
{
	std::cout << "Perimeter: "<< 2 * (*widthPtr + *heightPtr) << "\n";
	std::cout << "Area: " << *widthPtr * *heightPtr << "\n";
}


void cal_rectangle_ref(int& widthRef, int& heightRef)
{
	std::cout << "Perimeter: " << 2 * (widthRef + heightRef) << "\n";
	std::cout << "Area: " << widthRef * heightRef << "\n";

}

int main(int argc, char* argv[])
{
	int width;
	do{
		std::cout << "Input width of a rectangle.\n";
		std::cin >> width;
	}while(width>=20000 and width <= 1);
	std::cout << width;
    int height;
	do{
		std::cout << "Input height of a rectangle.\n";
		std::cin >> height;
	}while(width>=10000 and width <= 1);
	cal_rectangle_ptr(&width, &height);
	cal_rectangle_ref(width, height);
	return 0;
}


