#pragma once
#include "libs.h"

#define OFF_MODEL "m1779/m1779.off"
#define TEXTURE_FILE "texture.ppm"

class wrldPtf {
public:
	GLfloat x, y, z;
};

class wrldFci {
public:
	GLint n1, n2, n3;
};

class PPMHeader {
public:
	GLint noktaSayisi = 0, yuzeySayisi = 0;
	wrldPtf* noktalar;
	wrldFci* yuzeyler;
	GLubyte* texArray;
	int width, height, color;

	void readTex(const char* fileName) {
		ifstream texFile;
		texFile.open(fileName, ios::in);
		int const satirUzunluk = 500;
		char satir[satirUzunluk];
		char* next = NULL;
		char* token;
		texFile.getline(satir, satirUzunluk);
		char* imgType = strtok_s(satir, " ", &next);

		const char bosluk = ' ';
		texFile.getline(satir, satirUzunluk);
		token = strtok_s(satir, &bosluk, &next);

		if (token != 0)
			width = atoi(token);
		token = strtok_s(NULL, &bosluk, &next);
		if (token != 0)
			height = atoi(token);
		texFile.getline(satir, satirUzunluk);
		token = strtok_s(satir, &bosluk, &next);
		if (token != 0)
			color = atoi(token);
		int i = 0, j = 0, k = 0;
		int array_size = width * height * color;
		texArray = new GLubyte[array_size];

		//unsigned int temp;
		for (i = 0; i < height; i++) {
			for (j = 0; j < width; j++) {
				for (k = 0; k < 3; k++) {
					texFile.getline(satir, satirUzunluk);
					token = strtok_s(satir, &bosluk, &next);
					if (token != NULL) {
						unsigned char value = atoi(token);
						texArray[i * width * 3 + j * 3 + k] = (GLubyte)value;
					}
				}
				//texArray[j][i][3]= (unsigned char) 120;  //ALPHA DEÐERÝ ÝÇÝN
			}
		}

		texFile.close();
	}
};




