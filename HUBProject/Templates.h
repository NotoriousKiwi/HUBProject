#pragma once

#include <iostream>

template<typename T>
class Position2D
{
protected:
private:
public:

	Position2D(T a_x, T a_y);

	T x;
	T y;

	void displayValues();

	Position2D<T> operator+(const Position2D<T>& a_other);

	~Position2D();
};

template<typename T>
Position2D<T>::Position2D(T a_x, T a_y)
{
	x = a_x;
	y = a_y;
}

template<typename T>
inline void Position2D<T>::displayValues()
{
	std::cout << "This objects position is: (" << x << ", " << y << ")" << std::endl;
}

template<typename T>
Position2D<T> Position2D<T>::operator+(const Position2D<T>& a_other)
{
	return Position2D<T>(x + a_other.x, y + a_other.y);
}

template<typename T>
Position2D<T>::~Position2D()
{

}

/*///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

			CODE THAT WAS USED IN MAIN:

Position2D<float> position1 = Position2D<float>(2.0f, 2.0f);
std::cout << "5 + 6 = " << Addition<int>(5, 6) << std::endl;



*////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
