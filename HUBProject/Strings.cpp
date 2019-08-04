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

// ALL STRING ITERATOR FUNCTIONS
void Strings::Iterators()
{
	// Will merely print out the string but will use an iterator to do so.
	std::string tempString("Testing String");

	for (std::string::iterator it = tempString.begin(); it != tempString.end(); ++it)
	{
		std::cout << *it;
	}

	std::cout << std::endl;
}

// ALL STRING CAPACITY FUNCTIONS
void Strings::Capacity()
{
	unsigned int selection;
	
	std::string tempString("Testing String");
	std::string secondaryString(100, 'e');

	unsigned sz = tempString.size();

	bool menuActive = true;

	while (menuActive == true)
	{
		std::cout << "0. Exit Menu." << std::endl;
		std::cout << "1. Length." << std::endl;
		std::cout << "2. Max Size." << std::endl;
		std::cout << "3. Resize." << std::endl;
		std::cout << "4. Capacity." << std::endl;
		std::cout << "5. Clear." << std::endl;
		std::cout << "6. Empty." << std::endl;
		std::cout << "7. Shrink to Fit." << std::endl;
		std::cin >> selection;

		switch (selection)
		{
		case 0:
			menuActive = false;
			break;
		case 1:
			// length function serves same purpose as .size and is there to improve readability and cohesion with other libraries.
			std::cout << "The size of this string is: " << tempString.length() << " bytes. \n";
			break;
		case 2:
			// Displays the max size of string in bytes.
			std::cout << "The maximum size this string can reach is: " << tempString.max_size() << "\n";
			break;
		case 3:
			// Resizes the legnth of the string (can cut off text).
			std::cout << tempString << '\n';

			// Appends the second string to the first, take note the added string will purely be a set of "d".
			tempString.resize(sz + 6, 'd');
			std::cout << tempString << '\n';

			// Current length of string will now be 14 characters long.
			tempString.resize(14);
			std::cout << tempString << '\n';
			break;
		case 4:
			std::cout << "Capacity: " << tempString.capacity() << std::endl;
			break;
		case 5:
			// Erases the contents of the string, becomes an empty string with 0 characters.
			std::cout << tempString << std::endl;
			tempString.clear();
			std::cout << tempString << std::endl;
			break;
		case 6:
			// Returns true if the current length of string is 0, false otherwise.
			if (tempString.empty() == true)
			{
				std::cout << "This string is now empty." << std::endl;
			}
			else if (tempString.empty() == false)
			{
				std::cout << "The string contains characters." << std::endl;
			}
			break;
		case 7:
			// Requests that the string reduces its capacity to fit its size.
			std::cout << "1. Current Capacity of string: " << secondaryString.capacity() << std::endl;
			secondaryString.resize(10);
			std::cout << "2. Current Capacity of string: " << secondaryString.capacity() << std::endl;
			secondaryString.shrink_to_fit();
			std::cout << "3. Current Capacity of string: " << secondaryString.capacity() << std::endl;
			std::cout << secondaryString << std::endl;
			break;
		default:
			break;
		}

		// Restores tempString to default value once a function has been run.
		tempString = ("Testing String");
	}
}

// ALL STRING ELEMENT ACCESS FUNCTIONS
void Strings::elementAccess()
{

}

// ALL STRING MODIFIER FUNCTIONS
void Strings::Modifiers()
{

}

// ALL STRING OPERATIONS FUNCTIONS
void Strings::stringOperations()
{

}

Strings::~Strings()
{

}
