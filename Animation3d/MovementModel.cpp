#include "MovementModel.h"

MovementModel::MovementModel()
{
	x = 0;
	y = 0;
	z = 0;
}

MovementModel::MovementModel(GLfloat _x, GLfloat _y, GLfloat _z)
{
	x = _x;
	y = _y;
	z = _z;
}

void MovementModel::setCanMove(bool _canMove)
{
	canMove = _canMove;
}