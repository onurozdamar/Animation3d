#include "Rotate.h"

Rotate::Rotate(GLfloat _angle, GLfloat _x, GLfloat _y, GLfloat _z, int timeRange) :MovementModel(_x, _y, _z)
{
	angle = 0;
	da = (_angle - 0) / (FRAMES * timeRange);
}

void Rotate::move()
{
	glRotatef(angle, x, y, z);
}

void Rotate::update(float frame)
{
	if (!canMove)
	{
		return;
	}

	angle = (frame * da);
	//angle = angle - (angle / 360.0f) * 360; // mod alma
}

void Rotate::yaz()
{
	cout << "Rotate " << "angle" << angle << " x:" << x << " y:" << y << " z:" << z << " canMove " << canMove << endl;
}