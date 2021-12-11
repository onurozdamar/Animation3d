#include "main.h"
#include <gl/glut.h>
#include <Windows.h>
#include <stdio.h>

void draw() {
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glOrtho(0, 4, 0, 4, -1, 1);

	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("tez");
	glutDisplayFunc(draw);
	glutMainLoop();
}