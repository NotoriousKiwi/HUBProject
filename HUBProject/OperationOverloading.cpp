#include "OperationOverloading.h"

Vector3::Vector3()
{

}

Vector3::Vector3(float a_x, float a_y, float a_z) : x(a_x), y(a_y), z(a_z)
{

}

void Vector3::showValues()
{
	std::cout << "Vector values: (" << x << ", " << y << ", " << z << ")" << std::endl;
}

Vector3 Vector3::operator+(Vector3 & rhs)
{
	return Vector3(x + rhs.x, y + rhs.y, z + rhs.z);
}

Vector3 Vector3::operator-(Vector3 & rhs)
{
	return Vector3(-x, -y, -z);
}

Vector3 & Vector3::operator+=(Vector3 & rhs)
{
	x += rhs.x;
	y += rhs.y;
	z += rhs.z;
	return *this;
}

bool Vector3::operator==(Vector3 & rhs)
{
	return x == rhs.x && y == rhs.y && z == rhs.z;
}

Vector3::~Vector3()
{

}
