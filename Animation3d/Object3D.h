#pragma once
#include "libs.h"
#include "Texture.h"
#include "MovementModel.h"
#include "Rotate.h"
#include "Translate.h"
#include "Scale.h"

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
	void update();
	void addHareket(MovementModel* mm);
private:
	Texture* tex;
	const static int size = 6;// yüz sayýsý
	std::vector<Vector> points[size];
	std::vector<Vector> surfaces[size];

	vector<MovementModel*>* movementmodels;
};

