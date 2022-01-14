#pragma once
#include "MovementModel.h"

class Scale : public MovementModel
{
public:
	Scale(GLfloat _sx, GLfloat _sy, GLfloat _sz, GLfloat _ex, GLfloat _ey, GLfloat _ez, int timeRange);
	void move();
	void update(float timeMill);
	void yaz();
private:
	GLfloat dx, dy, dz;
	GLfloat sx, sy, sz;
};