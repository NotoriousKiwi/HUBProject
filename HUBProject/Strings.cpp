#include "Strings.h"
#include <iostream>
#include <fstream>
#include <cstring>

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
	std::string tempString("Testing String");

	bool menuActive = true;
	int selection{};

	while (menuActive == true)
	{
		std::cout << "0. Exit Menu." << std::endl;
		std::cout << "1. Example Iterator." << std::endl;									// Iterates through tempString.
		std::cout << "2. Example Reverse Iterator." << std::endl;							// Reverse iterates through tempString.
		std::cout << "3. Example Constant Iterator." << std::endl;							// Uses a constant iterator to iterate through tempString.
		std::cout << "4. Example Constant Reverse Iterator." << std::endl;					// Reverse iterates through tempString via const iterator.
		std::cin >> selection;

		switch (selection)
		{
		case 0:
			menuActive = false;
			break;
		case 1:
			for (std::string::iterator it = tempString.begin(); it != tempString.end(); ++it)
				std::cout << *it;
			break;
		case 2:
			// A reverse iterator will always begin at the end of a string thus rBegin in this case is the final character in tempString.
			for (std::string::reverse_iterator rIt = tempString.rbegin(); rIt != tempString.rend(); ++rIt)
				std::cout << *rIt;
			break;
		case 3:
			// Note that constant iterators generally point to const content however they cannot modify contents even if the string itself is not const.
			for (auto it = tempString.cbegin(); it != tempString.cend(); ++it)
				std::cout << *it << '\n';
			break;
		case 4:
			for (auto it = tempString.crbegin(); it != tempString.crend(); ++it)
				std::cout << *it << '\n';
			break;
		default:
			break;
		}
	}
}

// ALL STRING CAPACITY FUNCTIONS
void Strings::Capacity()
{
	unsigned int selection;
	
	std::string tempString("Testing String");
	std::string secondaryString(100, 'e');

	unsigned sz = tempString.size();

	bool menuActive = true;

	// Enables the continuation of the user menu as long as they haven't chosen to exit it.
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

		// Selects an example function according to the users selection.
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
	std::string tempString("Testing String");
	std::string modifiedString("Hello World.");

	bool menuActive = true;
	int selection{};

	while (menuActive == true)
	{
		std::cout << "0. Exit Menu." << std::endl;
		std::cout << "1. Operator Example." << std::endl;				// Prints out tempString via operator function.
		std::cout << "2. At Example." << std::endl;						// Prints out tempString via at function.
		std::cout << "3. Back Example." << std::endl;					// Returns the character located at the end of string for printing or modification.
		std::cout << "4. Front Example." << std::endl;					// Returns the character located at the front of string for printing or modification.

		switch (selection)
		{
		case 0:
			menuActive = false;
			break;
		case 1:
			for (int i = 0; i < tempString.length(); ++i)
				std::cout << tempString[i];
			break;
		case 2:
			for (unsigned i = 0; i < tempString.length(); ++i)
				std::cout << tempString.at(i);
			break;
		case 3:
			// Changes character at end of string to designated character (note: will replace, not append.)
			modifiedString.back() = '!';
			std::cout << modifiedString << '\n';
			break;
		case 4:
			// Changes character at front of string to the designated character.
			modifiedString.front() = 'T';
			std::cout << modifiedString << '\n';
			break;
		}
	}
}

// ALL STRING MODIFIER FUNCTIONS
void Strings::Modifiers()
{
	std::string baseString("The quick brown fox jumps over a lazy dog.");
	std::string tempString("Testing String");
	std::string tempString1;
	std::string tempString2("Writing ");
	std::string tempString3("Print 10 and then 5 more ");
	std::string shakespeareString1("to be question");
	std::string shakespeareString2("the");
	std::string shakespeareString3("or not to be");
	std::string eraseString("This is an example sentence.");
	std::string::iterator it;
	std::string modifiedString("Hello World");
	std::string name("John");
	std::string familyName("Smith");
	std::string replaceString("This is a test string");
	std::string replaceString2("n example");
	std::string replaceString3("sample phrase");
	std::string replaceString4("useful.");
	std::string swapString1("money");
	std::string swapString2("goods");
	std::ifstream file("test.txt", std::ios::in);

	bool menuActive = true;
	int selection{};

	while (menuActive == true)
	{
		std::cout << "0. Exit Menu." << std::endl;								// Exits the modifier menu.
		std::cout << "1. Operator Append to String." << std::endl;				// Appends to the designated string via += operator.
		std::cout << "2. Append to String." << std::endl;						// Append to string function.
		std::cout << "3. Push back to String." << std::endl;					// Push back something onto the string.
		std::cout << "4. Assign to String." << std::endl;						// Assigns the indicated values into the string (overwrite).
		std::cout << "5. Insert into String." << std::endl;						// Inserts the indicated values into the string (doesn't overwrite).
		std::cout << "6. Erase from String." << std::endl;
		std::cout << "7. Replace in String." << std::endl;
		std::cout << "8. Swap within String." << std::endl;
		std::cout << "9. Pop Back from String." << std::endl;
		std::cin >> selection;

		switch (selection)
		{
		case 0:
			menuActive = false;
			break;
		// OPERATOR +=
		case 1:
			name += " K. ";
			name += familyName;
			name += '\n';
			std::cout << name << std::endl;
			break;
		// APPEND
		case 2:
			tempString1.append(tempString2);									// Appends tempString2 onto tempString1;
			tempString1.append(tempString3, 6, 3);								// Appends three characters from position 6 in tempString3 onto tempString1.
			tempString1.append("dots are cool", 5);								// Appends the first 5 characters from "dots are cool" onto tempString1.
			tempString1.append("here: ");										// Appends a manually entered string onto tempString1.
			tempString1.append(10u, '.');										// Appends 10 .'s onto tempString1.
			tempString1.append(tempString3.begin()+8, tempString3.end());		// Appends everything from 8 characters into tempString3 to the end onto tempString1.
			tempString1.append(5, 0x2E);										// Appends 5 .'s onto tempString1.
			std::cout << tempString1 << std::endl;
			break;
		// PUSH BACK
		case 3:
			if (file)
			{
				while (!file.eof()) tempString.push_back(file.get());
			}
			std::cout << tempString << '\n';
			break;
		// ASSIGN
		case 4:
			tempString1.assign(baseString);
			std::cout << tempString1 << '\n';
			tempString1.assign(baseString, 10, 9);								// Assigns 9 characters from the 10th characterin baseString into tempString1.
			std::cout << tempString1 << '\n';
			tempString1.assign("pangrams are cool", 7);							// Assigns the first 7 characters of the manual string to tempString1.
			std::cout << tempString1 << '\n';
			tempString1.assign("c-string");										// Assigns the entirety of the manual string to tempString1.									
			std::cout << tempString1 << '\n';
			tempString1.assign(10, '*');										// Assigns 10 *'s to tempString1.
			std::cout << tempString1 << '\n';
			tempString1.assign(10, 0x2D);										// Assigns 10 -'s to tempString1.
			std::cout << tempString1 << '\n';
			tempString1.assign(baseString.begin()+16, baseString.end() - 12);	// Assigns a selection from BaseString into tempString1.
			std::cout << tempString1 << '\n';
			break;
		// INSERT
		case 5:
			shakespeareString1.insert(6, shakespeareString2);												// Inserts shakespeareString2 at 6th character of string1.
			shakespeareString1.insert(6, shakespeareString3, 3, 4);											// Inserts 3 characters, position 4 of string2 into 6th spot of string1.
			shakespeareString1.insert(10, "that is cool", 8);												// Inserts 8 characters from the manual string into 10th spot of string1.
			shakespeareString1.insert(10, "to be ");														// Inserts the whole manual string into 10th spot of string1.
			shakespeareString1.insert(15, 1, ':');															// Inserts 1 : into the 15th spot of string1.
			it = shakespeareString1.insert(shakespeareString1.begin() + 5, ',');							// Iterates through to the 5th spot of string1 and adds a ,
			shakespeareString1.insert(shakespeareString1.end(), 3, '.');									// Inserts 3 .'s at the end of string1.
			shakespeareString1.insert(it + 2, shakespeareString3.begin(), shakespeareString3.end() + 3);	 
			break;
		// ERASE
		case 6:
			eraseString.erase(10, 8);																		// Erases 8 characters from the 10th character onwards.													
			std::cout << eraseString << '\n';
			eraseString.erase(eraseString.begin() + 9);														// Erases a single character 9 characters from the beginning.
			std::cout << eraseString << '\n';
			eraseString.erase(eraseString.begin() + 5, eraseString.end() - 9);								// Erases everything from 5 characters in to 9 characters before the end.
			std::cout << eraseString << '\n';
			break;
		// REPLACE
		case 7:
			// Replacing characters through positions.
			tempString = replaceString;																						 
			tempString.replace(9, 5, replaceString2);																		// Highlights 5 characters from 9 characters in and replaces with string2.
			tempString.replace(19, 6, replaceString3, 7, 6);																// Highlights a selection from string3 and puts it in highlights string1.
			tempString.replace(8, 10, "just a");																			// Replaces highlighted section in string1 with manual string.
			tempString.replace(8, 6, "a shorty", 7);																		// Replaces highlighted section with first 7 characters from manual string.
			tempString.replace(22, 1, 3, '!');																				// Replaces with 3 !'s

			// Replacing characters through Iterators.
			tempString.replace(replaceString.begin(), tempString.end() - 3, replaceString3);								      
			tempString.replace(replaceString.begin(), tempString.begin() + 6, "replace");             
			tempString.replace(replaceString.begin() + 8, tempString.begin() + 14, "is coolness", 7); 
			tempString.replace(replaceString.begin() + 12, tempString.end() - 4, 4, 'o');             
			tempString.replace(replaceString.begin() + 11, tempString.end(), replaceString4.begin(), replaceString4.end());
			std::cout << tempString << '\n';
			break;
		// SWAP
		case 8:
			std::cout << "Before the swap, buyer has " << swapString1;
			std::cout << " and seller has " << swapString2 << '\n';
			swapString2.swap(swapString1);
			std::cout << "After the swap, buyer has " << swapString1;
			std::cout << " and seller has " << swapString2 << '\n';
			break;
		// POP BACK
		case 9:
			tempString.pop_back();
			std::cout << tempString << '\n';
			break;
		}

		tempString1 = ("Testing String");
	}
}

// ALL STRING OPERATIONS FUNCTIONS
void Strings::stringOperations()
{
	std::string cString("Please split this sentence into tokens");

	int selection;
	bool menuActive = true;

	std::cout << "0. Exit Menu." << std::endl;
	std::cout << "1. C String." << std::endl;
	std::cout << "2. Data." << std::endl;
	std::cout << "3. Get Allocator." << std::endl;
	std::cout << "4. Copy." << std::endl;
	std::cout << "5. Find." << std::endl;
	std::cout << "6. Last Find." << std::endl;
	std::cout << "7. First First Of." << std::endl;
	std::cout << "8. First Last Of." << std::endl;
	std::cout << "9. Find First Absence." << std::endl;
	std::cout << "10. First Last Absence." << std::endl;
	std::cout << "11. Substring." << std::endl;
	std::cout << "12. Compare." << std::endl;
	std::cin >> selection;

	while (menuActive == true)
	{
		switch (selection)
		{
		// EXIT MENU
		case 0:
			menuActive = false;
			break;
		// C STRING
		case 1:
		
			break;
		// DATA
		case 2:

			break;
		// GET ALLOCATOR
		case 3:

			break;
		// COPY
		case 4:

			break;
		// FIND
		case 5:

			break;
		// FIND LAST
		case 6:

			break;
		// FIND FIRST OF
		case 7:

			break;
		// FIND LAST OF
		case 8:

			break;
		// FIND FIRST ABSENCE
		case 9:

			break;
		// FIND LAST ABSENCE
		case 10:

			break;
		// SUBSTRING
		case 11:

			break;
		// COMPARE
		case 12:

			break;
		default:

			break;
		}
	}
	
}

void Strings::functionOverloads()
{

}

Strings::~Strings()
{

}
