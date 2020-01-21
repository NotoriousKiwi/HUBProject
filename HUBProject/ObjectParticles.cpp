#include "ObjectParticles.h"

Resource::Resource()
{
	value = 0;
}

void Resource::reset()
{
	value = 0;
}

void Resource::setValue(int number)
{
	value = number;
}

int Resource::getValue()
{
	return value;
}

Resource::~Resource()
{

}
