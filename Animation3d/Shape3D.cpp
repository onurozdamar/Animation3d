#include "Shape3D.h"

Shape3D::Shape3D()
{
	size = 0; type = GL_QUADS; edge = 0;
}

Shape3D::Shape3D(int _size, int _edge, int _type)
{
	size = _size;
	edge = _edge;
	type = _type;
}

void Shape3D::setPoints(float vecX[], float vecY[], float vecZ[])
{
	for (int i = 0, c = 0; i < size; i++)
	{
		vector<Vector> point;
		for (int j = 0; j < edge; j++, c++)
		{
			Vector vec{ 0, 0 };
			vec.x = vecX[c];
			vec.y = vecY[c];
			vec.z = vecZ[c];
			point.push_back(vec);
		}
		points.push_back(point);
	}
}


void Shape3D::setSurfaces(float texX[], float texY[])
{
	for (int i = 0, c = 0; i < size; i++)
	{
		vector<Vector> surface;
		for (int j = 0; j < edge; j++, c++)
		{
			Vector vec{ 0, 0 };
			vec.x = texX[c];
			vec.y = texY[c];
			surface.push_back(vec);
		}
		surfaces.push_back(surface);
	}
}