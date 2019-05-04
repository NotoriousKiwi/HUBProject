#include <iostream>
#include "Templates.h"
#include "Sorting.h"
#include "Array.h"
#include "Strings.h"

using namespace std;

struct Vector2
{
	float x, y;
};

// When the return type is templated, you must specify all types unless the typename for return type is located at the beginning.
template<typename R, typename T, typename W>
R Addition(T a, W b)
{
	return a + b;
}

int main()
{	
	Strings StringHelper;

	/*int sampleBinaryArray[25] =
	{
		14,65,63,1,54,
		89,84,9,98,57,
		71,18,21,84,69,
		28,11,83,13,42,
		64,58,78,82,13
	};


	Sorting Sorter;
	Sorter.BinarySearch(sampleBinaryArray, sampleBinaryArray[0], sampleBinaryArray[25], );

	Vector2 vec = { 5, 3 };
	Vector2* vecPointer = &vec;

	std::cout << (*vecPointer).x << std::endl;*/

	StringHelper.getUsernameAndPassword();

	system("PAUSE");
	return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////
//																   //
//	BINARY CODE:												   //
//	(& Makes true if both are 1.)								   //
//	(| Makes true if either are 1.)								   //
//	(^ (XOR) Makes it 1 if different, 0 if the same.			   //
//	(<< Shifts the bits left however many is input.				   //
//	(>> Shifts the bits right however many is input.			   //
//	(~ (NOT) Operator flips the sign at front, inverting numbers.  //
//																   //
/////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																													//
//	POINTER CODE:																									//
//	Memory address operator: & (Used in front of a variable to get it's memory address instead of vlaue.)			//
//	Indirection operator:    * (Has two uses...)																	//
//	1) When creating a variable it specifies that it is a pointer to the specified type.						    //
//	2) When used with an existing pointer, it reaches through the pointer to get the value, known as dereferencing. //
//	Dereference operator:	-> (Used to access a member variable via a pointer.										//
//																													//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

