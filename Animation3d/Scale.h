#pragma once
#include "MovementModel.h"

class Scale : public MovementModel
{
public:
	Scale(GLfloat x, GLfloat y, GLfloat z);
	void hareket();
	void update();
};

