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

Sorting::~Sorting()
{
}
