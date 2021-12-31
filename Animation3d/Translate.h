#pragma once
#include"MovementModel.h"

class Translate : public MovementModel
{
public:
	Translate(GLfloat x, GLfloat y, GLfloat z);
	void hareket();
	void update();
};