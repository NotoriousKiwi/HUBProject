#include <iostream>
#include "Templates.h"
#include "Sorting.h"
#include "Array.h"
#include "Strings.h"
#include "LinkedList.h"

/*/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

							PROJECT INFORMATION

By: Michael Clark
Date Created: 22/07/2018
Purpose: To showcase simple C++ functionality both in terms of future reflection and tutorials for newcomers.

TODO: Optimise variables and code on strings functions.
TODO: Complete Pointers class as much as possible.

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

using namespace std;

int main()
{	
	//Strings StringHelper;

	//StringHelper.Modifiers();

	LinkedList ListHelper;

	ListHelper.ListSetup();

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

