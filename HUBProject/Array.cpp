#include "Array.h"

using std::cin;

Array::Array()
{

}

// Displays all members in array and their values.
void Array::displayNumbersInArray()
{
	for (int i = 0; i < sizeof(numbers) / sizeof(*numbers); i++)
	{
		std::cout << "Number " << i << " : " << numbers[i] << std::endl;
	}
}

Array::~Array()
{

}
