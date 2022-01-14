#pragma once
#include "includes.h"
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
	void draw();
	void update(float timeMill);
	void addMovement(MovementModel* hm);
	void reset();
	void yaz();
private:
	Texture* tex;
	const static int size = 6;// yüz sayýsý
	std::vector<Vector> points[size];
	std::vector<Vector> surfaces[size];

	vector<MovementModel*>* movementModels;
};


