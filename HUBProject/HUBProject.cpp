#include <iostream>

using namespace std;

/*//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	OPERATOR OVERLOADING NOTES:
//
//	- As with functions, any complex struct or class is passed as a reference.
//	- If the parameter is not to be modified by the operator, pass it as a const reference.
//	
//
//
//
//
//
//
*///////////////////////////////////////////////////////////////////////////////////////////////////////

struct Vector3
{
	float x, y, z;

	Vector3(float a_x, float a_y, float a_z)
	{
		x = a_x;
		y = a_y;
		z = a_z;
	}

	Vector3 operator+ (Vector3& rhs)
	{
		return Vector3(x + rhs.x, y + rhs.y, z + rhs.z);
	}

	Vector3& operator+= (Vector3& rhs)
	{
		// We need to return a reference to the variable that was modified.
		x += rhs.x;
		y += rhs.y;
		z += rhs.z;
		return *this;
	}
};

bool operator==(Vector3& lhs, Vector3& rhs)
{
	return lhs.x == rhs.x && lhs.y == rhs.y && lhs.z == rhs.z;
}

Vector3 operator- (Vector3& val)
{
	return Vector3(-val.x, -val.y, -val.z);
}

int main()
{
	Vector3 a = Vector3(1, 2, 3);
	Vector3 b = Vector3(1, 2, 3);

	if (a == b)
	{
		std::cout << "a and b are the same." << std::endl;
		// Positions are the same.
	}
	else
	{
		std::cout << "a and b are different." << std::endl;
	}

	Vector3 c = a + b;

	std::cout << "c = (" << c.x << ", " << c.y << ", " << c.z << ")" << std::endl;

	c += Vector3(10, 10, 10);
	std::cout << "c = (" << c.x << ", " << c.y << ", " << c.z << ")" << std::endl;

	std::cout << "This is my hello to you." << std::endl;
	// This is a test to ensure that the code has uploaded to Github correctly.

	// This is test #2 to ensure the I can push a new update to Github correctly.

	system("PAUSE");
	return EXIT_SUCCESS;
}

