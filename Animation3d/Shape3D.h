#pragma once
#include "libs.h"

class Shape3D
{
public:
	Shape3D();
	Shape3D(int size, int edge, int type);
	int size;// surface size
	int edge;
	int type;
	vector<vector<Vector>> points;
	vector<vector<Vector>> surfaces;
protected:
	void setPoints(float vecX[], float vecY[], float vecZ[]);
	void setSurfaces(float texX[], float texY[]);
};

