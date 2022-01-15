#include "Timeline.h"

Timeline::Timeline(int _start, int _end)
{
	start = _start;
	end = _end;

	objects = new vector<Object3D*>();
	moveModels = new vector<MovementModel*>();
}

Timeline::~Timeline() {
	for (auto p : *objects)
		delete p;
}

void Timeline::draw()
{
	for (auto it = objects->begin(); it != objects->end(); ++it)
	{
		(*it)->draw();
	}
}

void Timeline::update(float timeMill)
{
	for (auto it = objects->begin(); it != objects->end(); ++it)
	{
		(*it)->update(timeMill);
	}
}

void Timeline::pause()
{
	for (auto it = moveModels->begin(); it != moveModels->end(); ++it)
	{
		(*it)->setCanMove(false);
	}
}

void Timeline::startt()
{
	for (auto it = moveModels->begin(); it != moveModels->end(); ++it)
	{
		(*it)->setCanMove(true);
	}
}

int Timeline::getTime()
{
	return (end - start);
}

void Timeline::addObject(Object3D* nesne)
{
	objects->push_back(nesne);
}

void Timeline::addMove(MovementModel* hm, Object3D* nesne)
{
	nesne->addMovement(hm);
	moveModels->push_back(hm);
}

void Timeline::yaz()
{
	for (int i = 0; i < objects->size(); i++)
	{
		objects->at(i)->yaz();
	}


	for (int i = 0; i < moveModels->size(); i++)
	{
		moveModels->at(i)->yaz();
	}
}