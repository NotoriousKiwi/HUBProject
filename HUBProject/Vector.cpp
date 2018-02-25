#include "Vector.h"

Vector::Vector()
{

}

Vector::Vector(float myFloat, int myInt)
{
	m_myFloat = myFloat;
	m_myInt = myInt;
}

void Vector::addItem(Vector * object)
{
	m_myItems.push_back(object);
}

void Vector::update()
{
	std::cout << "Hello! My int is: " << m_myInt << " and my float is: " << m_myFloat << std::endl;
}

void Vector::removeItem(Vector * object)
{
	auto iter = std::find(m_myItems.begin(), m_myItems.end(), object);

	if (iter != m_myItems.end())
	{
		m_myItems.erase(iter);
	}
}

void Vector::speak()
{
	// Cycles through all objects and gets them to output their values.
	for (auto objects : m_myItems)
	{
		objects->update();
	}

}

Vector::~Vector()
{
	for (auto objects : m_myItems)
	{
		delete objects;
	}

	m_myItems.clear();
}
