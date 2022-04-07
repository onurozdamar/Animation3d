
#include "Object3D.h"

Object3D::Object3D(Shape3D* _shape, Texture* _tex)
{

	shape = _shape;
	tex = _tex;

	movementModels = new vector<MovementModel*>();
	// 10 -> 1. zaman 6 hareket
	// 10 -> 2. zaman 4 hareket
}

Object3D::~Object3D() {
	delete shape;
	delete tex;
	for (auto p : *movementModels)
		delete p;
}

void Object3D::update(float timeMill)
{
	for (auto it = movementModels->begin(); it != movementModels->end(); ++it)
	{
		(*it)->update(timeMill);// nasýl
	}
}

void Object3D::draw()
{
	glLoadIdentity();

	for (auto it = movementModels->begin(); it != movementModels->end(); ++it)
	{
		(*it)->move();
	}

	if (tex != NULL)
	{
		tex->callTex();
	}

	for (int i = 0; i < shape->size; i++)
	{
		glBegin(shape->type);
		for (int j = 0; j < shape->points.at(i).size(); j++)
		{
			glTexCoord2f(shape->surfaces.at(i).at(j).x, shape->surfaces.at(i).at(j).y);
			glVertex3f(shape->points.at(i).at(j).x, shape->points.at(i).at(j).y, shape->points.at(i).at(j).z);
		}
		glEnd();
	}
}

void Object3D::addMovement(MovementModel* hm)
{
	movementModels->push_back(hm);
}

void Object3D::reset()
{
	for (auto it = movementModels->begin(); it != movementModels->end(); ++it)
	{
		(*it)->setCanMove(false);
	}
}

void Object3D::yaz()
{
	for (int i = 0; i < movementModels->size(); i++)
	{
		movementModels->at(i)->yaz();
	}
}