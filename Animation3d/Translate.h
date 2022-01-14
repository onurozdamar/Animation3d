#pragma once
#include"MovementModel.h"

class Translate : public MovementModel
{
public:
	Translate(GLfloat _x, GLfloat _y, GLfloat _z, int timeRange);
	void move();
	void update(float timeMill);
	void yaz();
private:
	GLfloat dx, dy, dz;
};