#pragma once
#include "libs.h"
#include "Texture.h"
#include "MovementModel.h"
#include "Rotate.h"
#include "Translate.h"
#include "Scale.h"
#include "SinusMove.h"

struct Vector
{
	GLfloat x, y, z;
};

class Object3D
{
public:
	Object3D(Texture* tex);
	~Object3D();
	void draw(); // draw object
	void update(float timeMill); // update position
	void addMovement(MovementModel* hm);
	void reset(); // reset the movement's moveability
	void yaz();
private:
	Texture* tex;  // textrure of object
	const static int size = 6;// surface size
	std::vector<Vector> points[size];
	std::vector<Vector> surfaces[size];

	vector<MovementModel*>* movementModels;
};


