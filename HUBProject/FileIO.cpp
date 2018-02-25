#include "FileIO.h"

FileIO::FileIO()
{

}

void FileIO::openForWriting()
{
	// Opens files.
	// Mode arguments can be combined with "|" (union):
	// ios_base::out - Write only access to the file. Creates file, overwriting existing.
	// ios_base::in - Read only access. File must already exist.
	// ios_base::binary - Opens file in binary mode rather than text mode.
	// ios_base::app - Append mode. File must already exist, data added to the end.
	// ios_base::_Nocreate - Will only open existing files.
	file.open("textexample.txt", std::ios_base::out | std::ios_base::_Nocreate);

	// Did we open successfully?
	if (file.is_open())
	{

		// Do work with the file.
		for (int line = 0; line < 3; line++)
		{
			file << "This is line " << line << std::endl;
		}

		file.close();

		std::cout << "Successfully wrote file." << std::endl;
	}
	else
	{
		// Do nothing with the file, probably flag an error.
		std::cout << "Could not find file." << std::endl;
	}
}

void FileIO::readWriting()
{
	file.open("textexample.txt", std::ios_base::in | std::ios_base::_Nocreate);

	// Did we open successfully?
	if (file.is_open())
	{
		std::cout << "Successfully opened file." << std::endl;

		char word[100];
		char c;
		char line[100];

		// Do work with the file.
		while(file.peek() != EOF) // <--- End of file.
		{
			file.getline(line, 100);
			std::cout << line << std::endl;
		}

		file.close();

		std::cout << "Successfully Read from file." << std::endl;
	}
	else
	{
		// Do nothing with the file, probably flag an error.
		std::cout << "Could not find file." << std::endl;
	}

}

FileIO::~FileIO()
{

}
