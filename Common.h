#pragma once
#ifndef _H_COMMON_E645
#define _H_COMMON_E645

#include "DynamicArray.h"

/// @brief ������� ��������� ����������� ��������
///
/// @return ���������� ��������
int GetElement();

/// @brief ��������� ��� ������ � ������������ ��������
///
/// @param data ������������ ������������ ������
void Menu(DynamicArray* data);

/// @brief ������� ��������� ����������� �������
///
/// @param data ������������ ������, � ������� ��������
/// 
/// @return ���������� ������ ��� ������������� �������
int CheckIndex(DynamicArray* data);

/// @brief ������� ����������� ������������� �������
///
/// @param data ������������ ������
void ShowArray(DynamicArray* data);
#endif
