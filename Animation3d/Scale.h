#pragma once
#include "MovementModel.h"

class Scale : public MovementModel
{
public:
	Scale(GLfloat _sx, GLfloat _sy, GLfloat _sz, GLfloat _ex, GLfloat _ey, GLfloat _ez, int timeRange);
	void move(); // call the glut func
	void update(float timeMill); // update position
	void yaz();
private:
	GLfloat dx, dy, dz; // speed
	GLfloat sx, sy, sz; // start position
};