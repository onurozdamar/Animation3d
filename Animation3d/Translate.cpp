#include "Translate.h"

Translate::Translate(GLfloat _x, GLfloat _y, GLfloat _z, int timeRange) : MovementModel(_x, _y, _z)
{
	x = 0;
	y = 0;
	z = 0;
	dx = (_x - 0) / (FRAMES * timeRange);
	dy = (_y - 0) / (FRAMES * timeRange);
	dz = (_z - 0) / (FRAMES * timeRange);
}

void Translate::move()
{
	glTranslatef(x, y, z);
}

// 0 - frame arasý
void Translate::update(float frame)
{
	if (!canMove)
	{
		return;
	}

	x = frame * dx;
	y = frame * dy;
	z = frame * dz;
}

void Translate::yaz()
{
	cout << "Translate " << "x:" << x << " y:" << y << " z:" << z << " canMove " << canMove << endl;
}