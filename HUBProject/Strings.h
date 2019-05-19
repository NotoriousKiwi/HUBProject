#pragma once
#include <string>

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

	static const int Height = 6;
	static const int Width = 1;

	std::string name;
	std::string name2D[Height][Width];

	~Strings();
};