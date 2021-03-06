#ifndef FLOATC_H
#define FLOAT_H

#include <iostream>

using namespace std;

cl_float2 floatc_add(cl_float2 a, cl_float2 b)
{
	cl_float2 c;
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	return c;
}

cl_float2 floatc_sub(cl_float2 a, cl_float2 b)
{
	cl_float2 c;
	c.x = a.x - b.x;
	c.y = a.y - b.y;
	return c;
}

cl_float2 floatc_mul(cl_float2 a, cl_float2 b)
{
	cl_float2 c;
	c.x = a.x*b.x - a.y*b.y;
	c.y = a.y*b.x + a.x*b.y;
	return c;
}

string floatc_to_string(cl_float2 a)
{
	stringstream ss;
	ss << a.x << " + " << a.y << "i";
	return ss.str();
}

#endif
