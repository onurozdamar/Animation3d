#include "Scale.h"

Scale::Scale(GLfloat _sx, GLfloat _sy, GLfloat _sz, GLfloat _ex, GLfloat _ey, GLfloat _ez, int timeRange) : MovementModel(1, 1, 1)
{
	dx = (_ex - _sx) / (FRAMES * timeRange);
	dy = (_ey - _sy) / (FRAMES * timeRange);
	dz = (_ez - _sz) / (FRAMES * timeRange);
	sx = _sx;
	sy = _sy;
	sz = _sz;
}

void Scale::move()
{
	glScalef(x, y, z);
}

void Scale::update(float frame)
{
	if (!canMove)
	{
		return;
	}

	x = frame * dx + sx;
	y = frame * dy + sy;
	z = frame * dz + sz;
}

void Scale::yaz()
{
	cout << "Scale " << "x:" << x << " y:" << y << " z:" << z << " canMove " << canMove << endl;
}