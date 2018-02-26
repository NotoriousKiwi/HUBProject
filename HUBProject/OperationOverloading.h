/*////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//																																//
//	OPERATOR OVERLOADING NOTES:																									//
//	- As with functions, any complex struct or class is passed as a reference.													//
//	- If the parameter is not to be modified by the operator, pass it as a const reference.										//
//																																//
//																																//
//																																//
*/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once
#include <iostream>

class Vector3
{
protected:
private:

	float x, y, z;

public:

	Vector3();
	Vector3(float a_x, float a_y, float a_z);

	void showValues();

	Vector3 operator+ (Vector3& rhs);
	Vector3 operator- (Vector3& rhs);
	Vector3& operator += (Vector3& rhs);
	bool operator== (Vector3& rhs);

	~Vector3();
};