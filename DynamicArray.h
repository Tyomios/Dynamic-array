#pragma once
#ifndef _H_DYNAMICARRAY_43B5
#define _H_DYNAMICARRAY_43B5


/// @brief Динамический массив
struct DynamicArray
{
	int Lenght				= 0; //< Количество занятого места
	int Capacity			= 4; //< Общая вместимость массива
	int* Data;					 //< Динамический массив
	const int GrowthFactor	= 2; //< Коэффициент увеличения места 
};

/// @brief Функция добавления значений в массив
///
/// @param data Динамический массив
/// @param value Добавляемое значение
void AddElement(DynamicArray* data, int value);

/// @brief Функция расширения массива
///
/// @param data увеличиваемый массив
void IncreaseArray(DynamicArray* data);

/// @brief Функция инициализации массива
///
/// @param data Инициируемый массив
void InitArray(DynamicArray* data);

/// @brief Функция удаления массива
///
/// @param data Удаляемый массив
void DeleteArray(DynamicArray* data);

/// @brief Функция вставки элемента по индексу
///
/// @param data Используемый динамический массив
/// @param index Индекс вставки
/// @param value Добавляемое значение
void InsertElement(DynamicArray* data, int index, int value);

/// @brief Функция удаления элемента по индексу
///
/// @param data Используемый массив
/// @param index Индекс удаляемого элемента
void RemoveElement(DynamicArray* data, int index);

/// @brief Функция сортировки массива
///
/// @param data Используемый массив
void SelectionSort(DynamicArray* data);

/// @brief Функция линейного поиска в массиве элемента
///
/// @param data Используемый массив
/// @param value Искомое значение
/// 
/// @retval -1 Статус ошибки - элемент не найден
/// @return Индекс элемента с искомым значением
int LineSearch(DynamicArray* data, int value);

/// @brief Функция бинарного поиска элемента в массиве
///
/// @param data Используемый массив
/// @param value Искомое значение
/// 
/// @retval -1 Статус ошибки - элемент не найден
/// @return Индекс элемента с искомым значением
int BinarySearch(DynamicArray* data, int value);
#endif