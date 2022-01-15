#pragma once
#include "libs.h"
#include "Object3D.h"
#include "MovementModel.h"
#include "Rotate.h"
#include "Translate.h"
#include "Scale.h"
#include "SinusMove.h"

class Timeline
{
public:
	Timeline(int start, int end);
	~Timeline();
	void update(float timeMill);
	void draw(); // draw the objects
	void pause(); // stop updating the positions of object
	void startt();// start updating the positions of object
	int getTime(); // get the time of timeline (second)
	void addObject(Object3D* nesne);
	void addMove(MovementModel* hm, Object3D* nesne);
	void yaz();
private:
	int start, end;// start and end time of the timeline
	vector<Object3D*>* objects; // objects that are belong to timeline 
	vector<MovementModel*>* moveModels; // movements of all objects that are belong to timeline
};