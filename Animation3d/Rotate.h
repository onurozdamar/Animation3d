#pragma once
#include "MovementModel.h"

class Rotate : public MovementModel
{
public:
	Rotate(GLfloat angle, GLfloat x, GLfloat y, GLfloat z, int timeRange);
	GLfloat angle;
	void move(); // call the glut func
	void update(float timeMill); // update position
	void yaz();
private:
	GLfloat da;// speed of angle
};

