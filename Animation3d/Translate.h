#pragma once
#include"MovementModel.h"

class Translate : public MovementModel
{
public:
	Translate(GLfloat _x, GLfloat _y, GLfloat _z, int timeRange);
	void move(); // call the glut func
	void update(float timeMill); // update position
	void yaz();
private:
	GLfloat dx, dy, dz; // speed
};