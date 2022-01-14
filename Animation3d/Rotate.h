#pragma once
#include "MovementModel.h"

class Rotate : public MovementModel
{
public:
	Rotate(GLfloat angle, GLfloat x, GLfloat y, GLfloat z, int timeRange);
	GLfloat angle;
	void move();
	void update(float timeMill);
	void yaz();
private:
	GLfloat da;
};

