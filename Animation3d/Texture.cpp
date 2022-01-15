#include "Texture.h"

Texture::Texture() {
	PPMHeader ppm;
	ppm.readTex(TEXTURE_FILE);
	w = ppm.width;
	h = ppm.height;
	bitmapData = (unsigned char*)ppm.texArray;
	texture = 0;
}

void Texture::callTex() {
	glEnable(GL_TEXTURE_2D);					// enable 2D texturing
	glGenTextures(1, &texture);                  // generate texture object

	glBindTexture(GL_TEXTURE_2D, texture);       // enable our texture object

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);

	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, w, h, 0, GL_RGB, GL_UNSIGNED_BYTE, bitmapData);

	glEnable(GL_TEXTURE_2D);
}// applying directly transformation to vertex