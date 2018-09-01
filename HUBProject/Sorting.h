#pragma once

#include <array>
#include <algorithm>
#include <iostream>

using std::swap;

class Sorting
{
protected:



private:

	int sampleBubbleArray[50] = 
	{
		14,65,63,1,54,
		89,84,9,98,57,
		71,18,21,84,69,
		28,11,83,13,42,
		64,58,78,82,13,
		9,96,14,39,89,
		40,32,51,85,48,
		40,23,15,94,93,
		35,81,1,9,43,
		39,15,17,97,52
	};

	int sampleBinaryArray[25] = 
	{
		14,65,63,1,54,
		89,84,9,98,57,
		71,18,21,84,69,
		28,11,83,13,42,
		64,58,78,82,13
	};

public:
	Sorting();

	int BinarySearch(int binaryArray[], int start_index, int end_index, int key);

	void Swap(int& a, int& b);
	void BubbleSort(int bubbleArray[], int n);
	void PrintArray(int bubbleArray[], int n);
	void BinarySetup();
	void DisplayArrays();

	~Sorting();
};

