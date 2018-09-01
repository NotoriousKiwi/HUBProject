#include "Sorting.h"

Sorting::Sorting()
{

}

void Sorting::Swap(int & a, int & b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void Sorting::BubbleSort(int bubbleArray[], int n)
{
	if (n < 2)
	{
		return;
	}

	bool sorted = false;

	while (!sorted)
	{
		sorted = true;

		for (int i = 0; i != n - 1; ++i)
		{
			if (bubbleArray[i] < bubbleArray[i + 1])
			{
				Swap(bubbleArray[i + 1], bubbleArray[i]);
				sorted = false;
			}
		}

	}
}

void Sorting::PrintArray(int bubbleArray[], int n)
{
	for (int i = 0; i != n; ++i)
	{
		std::cout << bubbleArray[i] << ",\t";
		if (i % 10 == 9) std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
}

void Sorting::BinarySetup()
{
	std::sort(sampleBinaryArray, sampleBinaryArray + 25);

	while (true)
	{
		std::cout << std::endl << std::endl << "Enter a number to find in the sequence: -1 to end" << std::endl;
		int searchKey = -1;
		std::cin >> searchKey;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (searchKey == -1)
		{
			break;
		}
	}
}

int Sorting::BinarySearch(int binaryArray[], int start_index, int end_index, int key)
{
	std::sort(binaryArray, binaryArray + 25);

	while (true)
	{
		std::cout << std::endl << std::endl << "Enter a number to find in the sequence: -1 to end" << std::endl;
		int searchKey = -1;
		std::cin >> searchKey;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (searchKey == -1)
		{
			break;
		}
	}

	while (start_index <= end_index)
	{
		int pivot = (start_index + end_index) / 2;

		if (binaryArray[pivot] == key)
		{
			return pivot;
		}

		if (key < binaryArray[pivot])
			end_index = pivot - 1;
		else
			start_index = pivot + 1;
	}

	return -1;
}

void Sorting::DisplayArrays()
{
	// Displays the unsorted version of the array.
	std::cout << "Unsorted:" << std::endl;
	PrintArray(sampleBubbleArray, 50);

	// Displays the sorted version of the array.
	BubbleSort(sampleBubbleArray, 50);
	std::cout << "Sorted:" << std::endl;
	PrintArray(sampleBubbleArray, 50);
}

Sorting::~Sorting()
{
}
