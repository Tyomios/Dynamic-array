#pragma once
#ifndef _H_COMMON_E645
#define _H_COMMON_E645

#include "DynamicArray.h"

/// @brief Функция получения корректного значения
///
/// @return Корректное значение
int GetElement();

/// @brief Интерфейс для работы с динамическим массивом
///
/// @param data используемый динамический массив
void Menu(DynamicArray* data);

/// @brief Функция получения корректного индекса
///
/// @param data Динамический массив, с которым работаем
/// 
/// @return Корректный индекс для используемого массива
int CheckIndex(DynamicArray* data);

/// @brief Функция отображения динамического массива
///
/// @param data Отображаемый массив
void ShowArray(DynamicArray* data);
#endif
