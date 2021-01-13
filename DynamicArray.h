#pragma once
#ifndef _H_DYNAMICARRAY_43B5
#define _H_DYNAMICARRAY_43B5


/// @brief ������������ ������
struct DynamicArray
{
	int Lenght				= 0; //< ���������� �������� �����
	int Capacity			= 4; //< ����� ����������� �������
	int* Data;					 //< ������������ ������
	const int GrowthFactor	= 2; //< ����������� ���������� ����� 
};

/// @brief ������� ���������� �������� � ������
///
/// @param data ������������ ������
/// @param value ����������� ��������
void AddElement(DynamicArray* data, int value);

/// @brief ������� ���������� �������
///
/// @param data ������������� ������
void IncreaseArray(DynamicArray* data);

/// @brief ������� ������������� �������
///
/// @param data ������������ ������
void InitArray(DynamicArray* data);

/// @brief ������� �������� �������
///
/// @param data ��������� ������
void DeleteArray(DynamicArray* data);

/// @brief ������� ������� �������� �� �������
///
/// @param data ������������ ������������ ������
/// @param index ������ �������
/// @param value ����������� ��������
void InsertElement(DynamicArray* data, int index, int value);

/// @brief ������� �������� �������� �� �������
///
/// @param data ������������ ������
/// @param index ������ ���������� ��������
void RemoveElement(DynamicArray* data, int index);

/// @brief ������� ���������� �������
///
/// @param data ������������ ������
void SelectionSort(DynamicArray* data);

/// @brief ������� ��������� ������ � ������� ��������
///
/// @param data ������������ ������
/// @param value ������� ��������
/// 
/// @retval -1 ������ ������ - ������� �� ������
/// @return ������ �������� � ������� ���������
int LineSearch(DynamicArray* data, int value);

/// @brief ������� ��������� ������ �������� � �������
///
/// @param data ������������ ������
/// @param value ������� ��������
/// 
/// @retval -1 ������ ������ - ������� �� ������
/// @return ������ �������� � ������� ���������
int BinarySearch(DynamicArray* data, int value);
#endif