#pragma once
#include <vector>
#include <glut.h>
#include <fstream>
#include <iostream>
#include <string>
#include <windows.h>
#include <stdexcept>

using namespace std;

#define FRAMES 25

class Rgb {
public:
	float r, g, b;
	Rgb(float _r, float _g, float _b) {
		r = _r;
		g = _g;
		b = _b;
	}
};

