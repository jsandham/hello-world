#include "sqrt.h"

float sqrt(float x)
{
	float a = x;
	float y = x - 1;
	return y*y + a*a;
}
