#pragma once

#include "ObjectParticles.h"
#include <list>
#include <iostream>

///////////////////////////////////////////////////////////////////////////////////////////
//
//										OBJECT POOL
//
//	1. Algorithms taken from https://sourcemaking.com/design_patterns/object_pool/cpp/1
//
//
///////////////////////////////////////////////////////////////////////////////////////////

class ObjectPool
{
protected:



private:

	std::list<Resource*> resources;

	static ObjectPool* instance;

	ObjectPool();

public:


	static ObjectPool* getInstance();

	Resource* getResource();

	void returnResource(Resource* object);

	~ObjectPool();

};