#pragma once
#include "libs.h"

class MovementModel
{
public:
	MovementModel();
	MovementModel(GLfloat x, GLfloat y, GLfloat z);
	virtual void move() = 0;  // implement every subclass that call glut func
	virtual void update(float timeMill) = 0; // implement every subclass that update position
	void setCanMove(bool canMove); // set the movement can move
	virtual void yaz() = 0;
protected:
	GLfloat x, y, z;
	bool canMove = false;
};

