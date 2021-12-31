#pragma once
#include "MovementModel.h"

class Rotate : public MovementModel
{
public:
	Rotate(GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
	GLfloat angle;
	void hareket();
	void update();
};

