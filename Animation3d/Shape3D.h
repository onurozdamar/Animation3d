#pragma once
#include "libs.h"
struct Vector
{
	GLfloat x, y, z;
};

class Shape3D
{
public:
	Shape3D(int size);
	int size;// surface size
	vector<vector<Vector>> points;
	vector<vector<Vector>> surfaces;
protected:
	void setPoints(float vecX[], float vecY[], float vecZ[]);
	void setSurfaces(float texX[], float texY[]);
};

