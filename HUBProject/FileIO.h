#pragma once
#include <fstream>
#include <iostream>

class FileIO
{
protected:
private:

	std::fstream file;								// <--- File variable used for accessing files.

public:

	FileIO();

	void openForWriting();
	void readWriting();

	~FileIO();
};
