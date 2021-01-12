#include "Common.h"

#include <iostream>


int GetElement()
{
	while (true)
	{
		std::cout << "Enter value \n>";
		int value;
		std::cin >> value;


		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "Incorrent value. Enter another one.\n";
		}
		else
		{
			std::cin.ignore(32767, '\n');

			return value;
		}
	}

	return 0;
}


void Menu(DynamicArray* data)
{
	enum class Menu
	{
		Add = 1,
		Insert = 2,
		Remove = 3,
		Sort = 4,
		Find = 5,
		BinaryFind = 6,
		Exit = 0
	};

	bool endProgramm = false;
	while (!endProgramm)
	{
		ShowArray(data);
		std::cout << "\n1 - Add\n"
			<< "2 - Insert\n"
			<< "3 - Remove\n"
			<< "4 - Sort\n"
			<< "5 - Find element\n"
			<< "6 - Find element (binary search)\n"
			<< "0 - Exit" << std::endl;

		int userChoose = GetElement();

		switch (static_cast<Menu>(userChoose))
		{
			case Menu::Add:
			{
				AddElement(data, GetElement());
				break;
			}
			case Menu::Insert:
			{
				InsertElement(data, CheckIndex(data), GetElement());
				break;

			}
			case Menu::Remove:
			{
				if (data->Lenght == 0)
				{
					std::cout << "Empty array! " << std::endl;
					system("pause");
					break;
				}

				RemoveElement(data, CheckIndex(data));
				break;
			}
			case Menu::Sort:
			{
				SelectionSort(data);
				break;
			}
			case Menu::Find:
			{
				if (LineSearch(data, GetElement()) == -1)
				{
					std::cout << "Not found" << std::endl;
					system("pause");
					break;
				}

				std::cout	<< "Element is on "
							<< LineSearch(data, GetElement())
							<< std::endl;

				system("pause");
				break;
			}
			case Menu::BinaryFind:
			{
				if (BinarySearch(data, GetElement()) == -1)
				{
					std::cout << "Not found" << std::endl;
					system("pause");
					break;
				}

				std::cout	<< "Element is on "
							<< BinarySearch(data, GetElement())
							<< std::endl;

				system("pause");
				break;
			}
			case Menu::Exit:
			{
				endProgramm = true;
				break;
			}
			default:
			{
				std::cout	<< "Unknown operation, choose one "
							<< "from the list" << std::endl;

				system("pause");
				break;
			}
		break;
		}
		system("cls");
	}
}


int CheckIndex(DynamicArray* data)
{
	while (true)
	{
		std::cout << "Enter index \n> ";
		int index;
		std::cin >> index;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "Incorrent value. Enter another one.\n";
			return CheckIndex(data);
		}
		if (index < 0)
		{
			std::cout << "Index cann't be less, than zero. Try again" << std::endl;
		}
		if (index > data->Lenght)
		{
			std::cout << "Error! Array doesn't include such index. "
				<< "Try again" << std::endl;
		}
		else
		{
			std::cin.ignore(32767, '\n');

			return index;
		}
	}
}


void ShowArray(DynamicArray* data)
{
	std::cout << "Array: ";
	for (int i = 0; i < data->Lenght; i++)
	{
		std::cout << data->Data[i] << ' ';
	}
	std::cout << std::endl;
}