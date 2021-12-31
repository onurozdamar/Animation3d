#pragma once
#include "libs.h"
#include "PPMHeader.h"

class Texture
{
public:
	Texture();
	void callTex();
private:
	unsigned int texture;			// the texture object
	unsigned char* bitmapData;			// the texture data
	GLint w, h;
};

