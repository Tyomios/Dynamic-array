#pragma once
#ifndef _H_DYNAMICARRAY_43B5
#define _H_DYNAMICARRAY_43B5


/// @brief Äèíàìè÷åñêèé ìàññèâ
struct DynamicArray
{
	int Lenght				= 0; //< Êîëè÷åñòâî çàíÿòîãî ìåñòà
	int Capacity				= 4; //< Îáùàÿ âìåñòèìîñòü ìàññèâà
	int* Data;					 //< Äèíàìè÷åñêèé ìàññèâ
	const int GrowthFactor			= 2; //< Êîýôôèöèåíò óâåëè÷åíèÿ ìåñòà 
};

/// @brief Ôóíêöèÿ äîáàâëåíèÿ çíà÷åíèé â ìàññèâ
///
/// @param data Äèíàìè÷åñêèé ìàññèâ
/// @param value Äîáàâëÿåìîå çíà÷åíèå
void AddElement(DynamicArray* data, int value);

/// @brief Ôóíêöèÿ ðàñøèðåíèÿ ìàññèâà
///
/// @param data óâåëè÷èâàåìûé ìàññèâ
void IncreaseArray(DynamicArray* data);

/// @brief Ôóíêöèÿ èíèöèàëèçàöèè ìàññèâà
///
/// @param data Èíèöèèðóåìûé ìàññèâ
void InitArray(DynamicArray* data);

/// @brief Ôóíêöèÿ óäàëåíèÿ ìàññèâà
///
/// @param data Óäàëÿåìûé ìàññèâ
void DeleteArray(DynamicArray* data);

/// @brief Ôóíêöèÿ âñòàâêè ýëåìåíòà ïî èíäåêñó
///
/// @param data Èñïîëüçóåìûé äèíàìè÷åñêèé ìàññèâ
/// @param index Èíäåêñ âñòàâêè
/// @param value Äîáàâëÿåìîå çíà÷åíèå
void InsertElement(DynamicArray* data, int index, int value);

/// @brief Ôóíêöèÿ óäàëåíèÿ ýëåìåíòà ïî èíäåêñó
///
/// @param data Èñïîëüçóåìûé ìàññèâ
/// @param index Èíäåêñ óäàëÿåìîãî ýëåìåíòà
void RemoveElement(DynamicArray* data, int index);

/// @brief Ôóíêöèÿ ñîðòèðîâêè ìàññèâà
///
/// @param data Èñïîëüçóåìûé ìàññèâ
void SelectionSort(DynamicArray* data);

/// @brief Ôóíêöèÿ ëèíåéíîãî ïîèñêà â ìàññèâå ýëåìåíòà
///
/// @param data Èñïîëüçóåìûé ìàññèâ
/// @param value Èñêîìîå çíà÷åíèå
/// 
/// @retval -1 Ñòàòóñ îøèáêè - ýëåìåíò íå íàéäåí
/// @return Èíäåêñ ýëåìåíòà ñ èñêîìûì çíà÷åíèåì
int LineSearch(DynamicArray* data, int value);

/// @brief Ôóíêöèÿ áèíàðíîãî ïîèñêà ýëåìåíòà â ìàññèâå
///
/// @param data Èñïîëüçóåìûé ìàññèâ
/// @param value Èñêîìîå çíà÷åíèå
/// 
/// @retval -1 Ñòàòóñ îøèáêè - ýëåìåíò íå íàéäåí
/// @return Èíäåêñ ýëåìåíòà ñ èñêîìûì çíà÷åíèåì
int BinarySearch(DynamicArray* data, int value);
#endif
