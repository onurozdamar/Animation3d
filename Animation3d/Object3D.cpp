
#include "Object3D.h"

Object3D::Object3D(Texture* _tex)
{
	float texX[] = { 0.0f ,1.0f ,1.0f ,0.0f ,0.0f ,1.0f ,1.0f ,0.0f ,0.0f ,1.0f
		,1.0f ,0.0f ,0.0f ,1.0f ,1.0f ,0.0f ,0.0f ,1.0f ,1.0f ,0.0f ,0.0f ,1.0f ,1.0f ,0.0f };
	float texY[] = { 0.0f ,0.0f ,1.0f ,1.0f ,0.0f ,0.0f ,1.0f ,1.0f ,0.0f ,0.0f
		,1.0f ,1.0f ,0.0f ,0.0f ,1.0f ,1.0f ,0.0f ,0.0f ,1.0f ,1.0f ,0.0f ,0.0f ,1.0f ,1.0f };

	float vecX[] = { -0.5f ,0.5f ,0.5f ,-0.5f ,0.5f ,0.5f ,-0.5f ,-0.5f ,0.5f
		,0.5f ,0.5f ,0.5f ,-0.5f ,-0.5f ,-0.5f ,-0.5f ,0.5f ,-0.5f ,-0.5f ,0.5f ,0.5f ,0.5f ,-0.5f ,-0.5f };
	float vecY[] = { 0.5f ,0.5f ,0.5f ,0.5f ,-0.5f ,0.5f ,0.5f ,-0.5f ,0.5f
		,0.5f ,-0.5f ,-0.5f ,-0.5f ,0.5f ,0.5f ,-0.5f ,-0.5f ,-0.5f ,-0.5f ,-0.5f ,0.5f ,-0.5f ,-0.5f ,0.5f };
	float vecZ[] = { 0.5f ,0.5f ,-0.5f ,-0.5f ,0.5f ,0.5f ,0.5f ,0.5f ,-0.5f
		,0.5f ,0.5f ,-0.5f ,0.5f ,0.5f ,-0.5f ,-0.5f ,0.5f ,0.5f ,-0.5f ,-0.5f ,-0.5f ,-0.5f ,-0.5f ,-0.5f };

	for (int i = 0; i < 24; i++)
	{
		Vector tex{ 0,0 };
		tex.x = texX[i];
		tex.y = texY[i];
		surfaces[i / 4].push_back(tex);

		Vector vec{ 0,0 };
		vec.x = vecX[i];
		vec.y = vecY[i];
		vec.z = vecZ[i];
		points[i / 4].push_back(vec);
	}

	tex = _tex;

	movementModels = new vector<MovementModel*>();
	// 10 -> 1. zaman 6 hareket
	// 10 -> 2. zaman 4 hareket
}

Object3D::~Object3D() {
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

	for (int i = 0; i < size; i++)
	{
		glBegin(GL_QUADS);
		for (int j = 0; j < points[i].size(); j++)
		{
			glTexCoord2f(surfaces[i].at(j).x, surfaces[i].at(j).y);
			glVertex3f(points[i].at(j).x, points[i].at(j).y, points[i].at(j).z);
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