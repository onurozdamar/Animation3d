#pragma once
#include "includes.h"
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
	void draw();
	void pause();
	void startt();
	int getTime();
	void addObject(Object3D* nesne);
	void addMove(MovementModel* hm, Object3D* nesne);
	void yaz();
private:
	int start, end;
	vector<Object3D*>* objects;
	vector<MovementModel*>* moveModels;
};