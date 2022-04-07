#include "TextBox.h"

TextBox::TextBox(int _x, int _y, float _w, float _h, string _text, int _windowId)
{
	x = _x;
	y = _y;
	w = _w;
	h = _h;
	text = _text;
	windowId = _windowId;

	rectColor = new Rgb(0.1, 0.2, 0.1);
	borderColor = new Rgb(0.5, 0.2, 0.9);
	fontColor = new Rgb(1, 1, 1);
}

TextBox::TextBox(int _x, int _y, float _w, float _h, int windowId) : TextBox(_x, _y, _w, _h, "", windowId)
{
}

TextBox::~TextBox()
{
	free(rectColor);
	free(borderColor);
	free(fontColor);
}

void TextBox::draw()
{
	glColor3f(borderColor->r, borderColor->g, borderColor->b);
	glBegin(GL_POLYGON);
	glVertex2i(x - borderWidth, y - borderWidth);
	glVertex2i(x + w + borderWidth, y - borderWidth);
	glVertex2i(x + w + borderWidth, y + h + borderWidth);
	glVertex2i(x - borderWidth, y + h + borderWidth);
	glEnd();

	glColor3f(rectColor->r, rectColor->g, rectColor->b);
	glBegin(GL_POLYGON);
	glVertex2i(x, y);
	glVertex2i(x + w, y);
	glVertex2i(x + w, y + h);
	glVertex2i(x, y + h);
	glEnd();

	glColor3f(fontColor->r, fontColor->g, fontColor->b);
	glRasterPos2i(x, y + w / 2);
	for (size_t i = 0; i < text.size(); ++i)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
	}

}

void TextBox::addChar(unsigned char key)
{
	text += key;
}


void TextBox::setText(string _text)
{
	text = _text;
}

string TextBox::getText()
{
	return text;
}

void TextBox::mouseEvent(int button, int state, int x, int y)
{
	if (state != 0) // pressed mi
	{
		return;
	}
	cout << x << " " << y << " " << this->x << " " << this->y << " " << state << endl;
	// mouse koordinatlarý textboxu kapsýyor mu
	if (x > this->x && y > this->y && x <= this->x + this->w && y <= this->y + this->h)
	{
		cout << "contains";
		isFocus = true;
		borderColor = new Rgb(1, 0, 0);
	}
	else {
		isFocus = false;
		borderColor = new Rgb(0.5, 0.2, 0.9);
	}
	glutPostRedisplay();
}

void TextBox::keyBoardEvent(unsigned char key, int x, int y)
{
	cout << "key press";
	if (!isFocus)
	{
		return;
	}
	addChar(key);
	cout << " text = " << text;
	//glutSetWindow(windowId);
	glutPostRedisplay();
}