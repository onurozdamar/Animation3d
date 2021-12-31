#pragma once
#include "libs.h"
#include "Object3D.h"

class Timeline
{
public:
	Timeline(int start, int end);
	~Timeline();
	void update();
	void draw();
	int getTime();
	void addObject(Object3D* obj);
	void addMovementModel(MovementModel* mm, Object3D* obj);
private:
	int start, end;
	vector<Object3D*>* objects;
};

