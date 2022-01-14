#pragma once
#include "MovementModel.h"
#include <math.h>

class SinusMove : public MovementModel
{
public:
	SinusMove(GLfloat _x, GLfloat _y, GLfloat _z, int timeRange);
	void move();
	void update(float timeMill);
	void yaz();
private:
	GLfloat dx, dy, dz;
};

