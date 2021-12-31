#include"libs.h"
#include "Animation.h"

GLsizei pencereEni = 800, pencereBoyu = 800;

void init()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glClearDepth(100.0f);
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glOrtho(-2, 2, -2, 2, -5, 5);
	glMatrixMode(GL_MODELVIEW);
}

void draw() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	gluLookAt(1, 1, 0, 0, 0, 0, 0, 1.0, 0.0);

	glutSwapBuffers();
	glutPostRedisplay();
}

void anim(int timeMill) {


	glutTimerFunc(40, anim, timeMill - 1);
	glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{

}

int main(int argc, char** argv) {
	glutInit(&argc, (char**)argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(pencereEni, pencereBoyu);
	glutCreateWindow("Animation 3D");
	init();
	glutMouseFunc(mouse);
	glutDisplayFunc(draw);
	glutMainLoop();

	return 0;
}