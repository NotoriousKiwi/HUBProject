#pragma once

#include <iostream>
#include <vector>

class Vector
{
protected:
private:

	std::vector<Vector*> m_myItems;

	float	m_myFloat;

	int		m_myInt;

public:

	Vector();
	Vector(float myFloat, int myInt);

	void addItem(Vector* object);
	void update();
	void removeItem(Vector* object);
	void speak();

	~Vector();
};

/*/////////////////////////////////////////////////////////////////////////////////////
//
//	CODE REPOSITORY
//
//	Vector* vectorManager = new Vector();
//	Vector* item1 = new Vector(3.5f, 3);
//	Vector* item2 = new Vector(5.5f, 5);
//	Vector* item3 = new Vector(4.5f, 4);
//	Vector* item4 = new Vector(6.5f, 6);
//	vectorManager->addItem(item1);
//	vectorManager->addItem(item2);
//	vectorManager->addItem(item3);
//	vectorManager->addItem(item4);
//
//	vectorManager->speak();
//
//
//
//
//
/////////////////////////////////////////////////////////////////////////////////////*/