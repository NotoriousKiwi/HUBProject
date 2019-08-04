#pragma once
#include <string>

/*///////////////////////////////////////////////

				REMINDERS FOR STRINGS

1. Documentation can be found at http://www.cplusplus.com/reference/string/string/
2. Functions are setup according to their category as found on the C++ website.



///////////////////////////////////////////////*/


class Strings
{
protected:
private:
public:

	Strings();

	void getUsername();
	void Iterators();
	void Capacity();
	void elementAccess();
	void Modifiers();
	void stringOperations();

	static const int Height = 6;
	static const int Width = 1;

	std::string name;
	std::string name2D[Height][Width];

	~Strings();
};