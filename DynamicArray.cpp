#include "DynamicArray.h"
#include "Common.h"

#include <iostream>


void AddElement(DynamicArray* data, int value)
{
	if (data->Lenght >= data->Capacity)
	{
		IncreaseArray(data);
	}

	data->Data[data->Lenght] = value;
	++data->Lenght;
}


void IncreaseArray(DynamicArray* data)

{
	int newArrayCapacity = data->Capacity * data->GrowthFactor;
	int* newArray = new int[newArrayCapacity];
	for (int i = 0; i < data->Capacity; i++)
	{
		newArray[i] = data->Data[i];
	}

	data->Capacity *= data->GrowthFactor;

	delete[] data->Data;
	data->Data = newArray;
}


void InitArray(DynamicArray* data)
{
	data->Data = new int[data->Capacity];
}


void InsertElement(DynamicArray* data, int index, int value)
{
	int element = value;
	int temp = 0;

	IncreaseArray(data);

	temp = data->Data[index];
	data->Data[index] = element;

	for (int i = index + 1; i <= data->Lenght; i++)
	{
		element = data->Data[i];
		data->Data[i] = temp;
		temp = element;
	}
	++data->Lenght;
}


void RemoveElement(DynamicArray* data, int index)
{
	if (index == 0)
	{
		for (int i = 1; i < data->Lenght; i++)
		{
			data->Data[i - 1] = data->Data[i];
		}
	}

	for (int i = index + 1; i < data->Lenght; i++)
	{
		data->Data[i - 1] = data->Data[i];
	}

	--data->Lenght;
	IncreaseArray(data);
}


void SelectionSort(DynamicArray* data)
{
	for (int startIndex = 0; startIndex < data->Lenght - 1; ++startIndex)
	{
		int smallestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < data->Lenght; ++currentIndex)
		{
			if (data->Data[currentIndex] < data->Data[smallestIndex])
			{
				smallestIndex = currentIndex;
			}
		}
		std::swap(data->Data[startIndex], data->Data[smallestIndex]);
	}
}


int LineSearch(DynamicArray* data, int value)
{
	for (int i = 0; i < data->Lenght; i++)
	{
		if (value == data->Data[i])
		{
			return i;
		}
	}
	return -1;
}


int BinarySearch(DynamicArray* data, int value)
{
	SelectionSort(data);

	int low = 0;
	int high = data->Lenght - 1;

	while (low <= high)
	{
		int middle = ((low + high) / 2);

		if (value == data->Data[middle])
		{
			return middle;
		}
		else if (value > data->Data[middle])
		{
			low = middle + 1;
		}
		else
		{
			high = middle - 1;
		}
	}
	return -1;
}


void DeleteArray(DynamicArray* data)
{
	delete[] data->Data;
}