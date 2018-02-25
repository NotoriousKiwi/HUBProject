#include "Array.h"

Array::Array()
{

}

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
