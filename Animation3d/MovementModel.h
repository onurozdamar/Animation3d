#pragma once
#include "includes.h"

class MovementModel
{
public:
	MovementModel();
	MovementModel(GLfloat x, GLfloat y, GLfloat z);
	virtual void move() = 0;
	virtual void update(float timeMill) = 0;
	void setCanMove(bool canMove);
	virtual void yaz() = 0;
protected:
	GLfloat x, y, z;
	bool canMove = false;
};

