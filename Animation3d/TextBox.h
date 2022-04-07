#pragma once
#include "libs.h"

class TextBox
{
public:
	TextBox(int _x, int _y, float _w, float _h, int windowId);
	TextBox(int _x, int _y, float _w, float _h, string _text, int windowId);
	~TextBox();
	void draw();
	void setText(string text);
	void addChar(unsigned char key);
	string getText();
	void mouseEvent(int button, int state, int x, int y);
	void keyBoardEvent(unsigned char key, int x, int y);
private:
	int windowId;
	string text;
	int x, y;
	float w, h;
	bool isFocus;
	Rgb* rectColor, * borderColor, * fontColor;
	float borderWidth = 3;
};

