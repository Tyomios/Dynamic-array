#include "DynamicArray.h"
#include "Common.h"

#include <iostream>


int main()
{
	DynamicArray* data = new DynamicArray;
	InitArray(data);
	Menu(data);
	DeleteArray(data);
	return 0;
}