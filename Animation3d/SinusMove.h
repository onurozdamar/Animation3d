#pragma once
#include "MovementModel.h"
#include <math.h>

class SinusMove : public MovementModel
{
public:
	SinusMove(GLfloat _x, GLfloat _y, GLfloat _z, int timeRange);
	void move(); // call the glut func
	void update(float timeMill); // update position
	void yaz();
private:
	GLfloat dx, dy, dz; // speed
};

