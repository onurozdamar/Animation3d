#pragma once
#include "libs.h"

class MovementModel
{
public:
	MovementModel();
	MovementModel(GLfloat x, GLfloat y, GLfloat z);
	virtual void hareket() = 0;
	virtual void update() = 0;
protected:
	GLfloat x, y, z;
};

