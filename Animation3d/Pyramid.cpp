#include "Pyramid.h"

Pyramid::Pyramid() :Shape3D(4, 3, GL_TRIANGLES)
{
	float texX[] = { 0.0f,-0.5f,0.5f, 0.0f, 0.5f, 0.5f, 0.0f, 0.5f, -0.5f, 0.0f,-0.5f,-0.5f };
	float texY[] = { 0.5f, -0.5f, -0.5f, 0.5f, -0.5f, -0.5f,  0.5f, -0.5f, -0.5f,  0.5f, -0.5f, -0.5f, };

	float vecX[] = { 0.0f,-0.5f,0.5f, 0.0f, 0.5f, 0.5f, 0.0f, 0.5f, -0.5f, 0.0f,-0.5f,-0.5f };
	float vecY[] = { 0.5f, -0.5f, -0.5f, 0.5f, -0.5f, -0.5f,  0.5f, -0.5f, -0.5f,  0.5f, -0.5f, -0.5f };
	float vecZ[] = { 0.0f, 0.5f, 0.5f, 0.0f, 0.5f, -0.5f, 0.0f, -0.5f, -0.5f, 0.0f, -0.5f, 0.5f };

	setPoints(vecX, vecY, vecZ);
	setSurfaces(texX, texY);
}
