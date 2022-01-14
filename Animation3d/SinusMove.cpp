#include "SinusMove.h"

SinusMove::SinusMove(GLfloat _x, GLfloat _y, GLfloat _z, int timeRange) : MovementModel(0, 0, 0)
{
	dx = (_x - 0) / (FRAMES * timeRange);
	dy = (_y - 0) / (FRAMES * timeRange);
	dz = (_z - 0) / (FRAMES * timeRange);
}

void SinusMove::move()
{
	glTranslatef(x, y, z);
}

void SinusMove::update(float frame)
{
	if (!canMove)
	{
		return;
	}

	x = sin(frame * dx);
	y = cos(frame * dy);
	z = frame * dz;
}

void SinusMove::yaz()
{
	cout << "Scale " << "x:" << x << " y:" << y << " z:" << z << " canMove " << canMove << endl;
}