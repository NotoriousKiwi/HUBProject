#include <iostream>

using namespace std;

int main()
{
	int a = 5;
	int b = 9;

	std::cout << (a | b) << std::endl;

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

