#include "Strings.h"
#include <iostream>

using std::cin;

Strings::Strings()
{

}

// Gets the users full name and then displays it back to them.
void Strings::getUsername()
{
	int selection;

	std::cout << "Select an option:" << std::endl;
	std::cout << "1. Input 1 Username." << std::endl;
	std::cout << "2. Input 5 Usernames." << std::endl;
	std::cin >> selection;

	if (selection == 1)
	{
		std::cout << "Please enter your full name:";
		std::getline(cin, name);

		std::cout << "Your name is: " << name << std::endl;
	}
	if (selection == 2)
	{
		std::cout << "Please enter the first name: ";
		std::cin.ignore();											// <-- Extremely important to clear the buffer else console will not wait for first input.
		std::getline(cin, name2D[1][0]);
		std::cout << "Please enter the second name: ";
		std::getline(cin, name2D[2][0]);
		std::cout << "Please enter the third name: ";
		std::getline(cin, name2D[3][0]);
		std::cout << "Please enter the fourth name: ";
		std::getline(cin, name2D[4][0]);
		std::cout << "Please enter the fifth name: ";
		std::getline(cin, name2D[5][0]);

		for (int i = 0; i < Height; i++)
		{
			for (int n = 0; n < Width; n++)
			{
				std::cout << name2D[i][n] << ' ';
			}
			std::cout << std::endl;
		}
	}

	std::cout << std::endl;
}

void Strings::getUsernameAndPassword()
{
	std::string username;
	std::string password;
	bool validPassword = false;

	std::cout << "Please enter a username: ";
	std::getline(cin, username);
	
	while (validPassword == false)
	{
		std::cout << "Please enter a password (must be at least 8 characters containing a capital letter, a number and a symbol): ";
		std::getline(cin, password);

		if (password.length() < 8)
		{
			std::cout << "Your password is too short, please try again." << std::endl;
		}
		else
		{
			validPassword = true;
		}
	}
	
}

// Displays the username previously entered but in reverse.
void Strings::displayUsernameReverse()
{
	for (int i = name.length() - 1; i >= 0; --i)
	{
		std::cout << name[i];
	}

	std::cout << std::endl;
}

Strings::~Strings()
{

}
