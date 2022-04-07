#include "Shape3D.h"

Shape3D::Shape3D(int _size)
{
	size = _size;
}

void Shape3D::setPoints(float vecX[], float vecY[], float vecZ[])
{
	for (int i = 0, c = 0; i < 4; i++)
	{
		vector<Vector> point;
		for (int j = 0; j < size; j++, c++)
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
	for (int i = 0, c = 0; i < 4; i++)
	{
		vector<Vector> surface;
		for (int j = 0; j < size; j++, c++)
		{
			Vector vec{ 0, 0 };
			vec.x = texX[c];
			vec.y = texY[c];
			surface.push_back(vec);
		}
		surfaces.push_back(surface);
	}
}