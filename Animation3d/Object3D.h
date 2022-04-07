#pragma once
#include "libs.h"
#include "Texture.h"
#include "MovementModel.h"
#include "Rotate.h"
#include "Translate.h"
#include "Scale.h"
#include "SinusMove.h"
#include "Shape3D.h"

class Object3D
{
public:
	Object3D(Shape3D* _shape, Texture* tex);
	~Object3D();
	void draw(); // draw object
	void update(float timeMill); // update position
	void addMovement(MovementModel* hm);
	void reset(); // reset the movement's moveability
	void yaz();
private:
	Texture* tex;  // textrure of object
	Shape3D* shape;

	vector<MovementModel*>* movementModels;
};


