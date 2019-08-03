#pragma once
#include <string>

/*///////////////////////////////////////////////

				REMINDERS FOR STRINGS

1. Documentation can be found at http://www.cplusplus.com/reference/string/string/
2. 



///////////////////////////////////////////////*/


class Strings
{
protected:
private:
public:

	Strings();

	void getUsername();
	void getUsernameAndPassword();
	void displayUsernameReverse();
	void stringLength();
	void stringMax();

	static const int Height = 6;
	static const int Width = 1;

	std::string name;
	std::string name2D[Height][Width];

	~Strings();
};