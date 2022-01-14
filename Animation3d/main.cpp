
////// Includes
#include"libs.h"
#include "Animation.h"

////// Global Variables
GLsizei pencereEni = 800, pencereBoyu = 800;

Animation* animasyon;
int animationFrames = 0;

void addSomeData()
{
	Texture* tex = new Texture();
	Object3D* nesne1 = new Object3D(tex);
	Object3D* nesne2 = new Object3D(tex);
	Object3D* nesne3 = new Object3D(tex);
	Object3D* nesne4 = new Object3D(tex);

	Timeline* ilkSaniye = new Timeline(0, 3);
	ilkSaniye->addObject(nesne1);
	ilkSaniye->addObject(nesne2);
	ilkSaniye->addObject(nesne3);
	ilkSaniye->addObject(nesne4);
	ilkSaniye->addMove(new Translate(2.0f, 0.0f, 0.0f, ilkSaniye->getTime()), nesne1);
	ilkSaniye->addMove(new Translate(-2.0f, 0.0f, 0.0f, ilkSaniye->getTime()), nesne2);
	ilkSaniye->addMove(new Translate(0.0f, 2.0f, 0.0f, ilkSaniye->getTime()), nesne3);
	ilkSaniye->addMove(new Translate(0.0f, -2.0f, 0.0f, ilkSaniye->getTime()), nesne4);
	animasyon->addTimeline(ilkSaniye);

	Timeline* ikinciSaniye = new Timeline(3, 6); // saniye
	ikinciSaniye->addObject(nesne1);
	ikinciSaniye->addObject(nesne2);
	ikinciSaniye->addObject(nesne3);
	ikinciSaniye->addObject(nesne4);
	ikinciSaniye->addMove(new Translate(0.0f, 2.0f, 0.0f, ikinciSaniye->getTime()), nesne1);
	ikinciSaniye->addMove(new Translate(0.0f, -2.0f, 0.0f, ikinciSaniye->getTime()), nesne2);
	ikinciSaniye->addMove(new Translate(2.0f, 0.0f, 0.0f, ikinciSaniye->getTime()), nesne3);
	ikinciSaniye->addMove(new Translate(-2.0f, 0.0f, 0.0f, ikinciSaniye->getTime()), nesne4);
	animasyon->addTimeline(ikinciSaniye);

	Timeline* ucuncuSaniye = new Timeline(6, 9); // saniye
	ucuncuSaniye->addObject(nesne1);
	ucuncuSaniye->addObject(nesne2);
	ucuncuSaniye->addObject(nesne3);
	ucuncuSaniye->addObject(nesne4);
	ucuncuSaniye->addMove(new Translate(-2.0f, 0.0f, 0.0f, ucuncuSaniye->getTime()), nesne1);
	ucuncuSaniye->addMove(new Translate(2.0f, 0.0f, 0.0f, ucuncuSaniye->getTime()), nesne2);
	ucuncuSaniye->addMove(new Translate(0.0f, -2.0f, 0.0f, ucuncuSaniye->getTime()), nesne3);
	ucuncuSaniye->addMove(new Translate(0.0f, 2.0f, 0.0f, ucuncuSaniye->getTime()), nesne4);
	animasyon->addTimeline(ucuncuSaniye);

	Timeline* dorduncuSaniye = new Timeline(9, 12); // saniye
	dorduncuSaniye->addObject(nesne1);
	dorduncuSaniye->addObject(nesne2);
	dorduncuSaniye->addObject(nesne3);
	dorduncuSaniye->addObject(nesne4);
	dorduncuSaniye->addMove(new Translate(0.0f, -2.0f, 0.0f, dorduncuSaniye->getTime()), nesne1);
	dorduncuSaniye->addMove(new Rotate(90, 1.0f, 0.0f, 0.0f, dorduncuSaniye->getTime()), nesne1);
	dorduncuSaniye->addMove(new Translate(0.0f, -2.0f, 0.0f, dorduncuSaniye->getTime()), nesne2);
	dorduncuSaniye->addMove(new Rotate(90, 1.0f, 0.0f, 0.0f, dorduncuSaniye->getTime()), nesne2);
	dorduncuSaniye->addMove(new Translate(0.0f, -2.0f, 0.0f, dorduncuSaniye->getTime()), nesne3);
	dorduncuSaniye->addMove(new Rotate(90, 1.0f, 0.0f, 0.0f, dorduncuSaniye->getTime()), nesne3);
	dorduncuSaniye->addMove(new Translate(0.0f, -2.0f, 0.0f, dorduncuSaniye->getTime()), nesne4);
	dorduncuSaniye->addMove(new Rotate(90, 1.0f, 0.0f, 0.0f, dorduncuSaniye->getTime()), nesne4);
	animasyon->addTimeline(dorduncuSaniye);

	Timeline* besinciSaniye = new Timeline(12, 15); // saniye
	besinciSaniye->addObject(nesne1);
	besinciSaniye->addObject(nesne2);
	besinciSaniye->addObject(nesne3);
	besinciSaniye->addObject(nesne4);
	besinciSaniye->addMove(new Translate(-2.0f, -2.0f, 0.0f, besinciSaniye->getTime()), nesne1);
	besinciSaniye->addMove(new Rotate(90, 1.0f, 1.0f, 0.0f, besinciSaniye->getTime()), nesne1);
	besinciSaniye->addMove(new Translate(-2.0f, -2.0f, 0.0f, besinciSaniye->getTime()), nesne2);
	besinciSaniye->addMove(new Rotate(90, 1.0f, 1.0f, 0.0f, besinciSaniye->getTime()), nesne2);
	besinciSaniye->addMove(new Translate(-2.0f, -2.0f, 0.0f, besinciSaniye->getTime()), nesne3);
	besinciSaniye->addMove(new Rotate(90, 1.0f, 1.0f, 0.0f, besinciSaniye->getTime()), nesne3);
	besinciSaniye->addMove(new Translate(-2.0f, -2.0f, 0.0f, besinciSaniye->getTime()), nesne4);
	besinciSaniye->addMove(new Rotate(90, 1.0f, 1.0f, 0.0f, besinciSaniye->getTime()), nesne4);
	animasyon->addTimeline(besinciSaniye);

	Timeline* altinciSaniye = new Timeline(15, 18); // saniye
	altinciSaniye->addObject(nesne1);
	altinciSaniye->addObject(nesne2);
	altinciSaniye->addObject(nesne3);
	altinciSaniye->addObject(nesne4);
	altinciSaniye->addMove(new SinusMove(-3.0f, 1.0f, 0.0f, altinciSaniye->getTime()), nesne1);
	altinciSaniye->addMove(new SinusMove(3.0f, 6.0f, 0.0f, altinciSaniye->getTime()), nesne2);
	altinciSaniye->addMove(new SinusMove(2.0f, -4.0f, 0.0f, altinciSaniye->getTime()), nesne3);
	altinciSaniye->addMove(new SinusMove(6.0f, 5.0f, 0.0f, altinciSaniye->getTime()), nesne4);
	animasyon->addTimeline(altinciSaniye);
}


// Initialize
// desc: initializes OpenGL
void init()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);  // White  display window.
	glClearDepth(100.0f);
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glOrtho(-5, 5, -5, 5, -5, 5);
	glMatrixMode(GL_MODELVIEW);

	animasyon = new Animation();

	addSomeData();
}

// Render
// desc: handles drawing of scene
void Render()
{
	// clear screen and depth buffer
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	gluLookAt(5, 5, -2, 0, 0, 0, 0, 1.0, 0.0);

	animasyon->draw();

	glutSwapBuffers();			// bring backbuffer to foreground
	glutPostRedisplay();
}

// 2 * 25 = 2sn
void anim(int timeMill) {
	if (timeMill == 0)
	{
		if (animasyon->nextFrame())
		{
			cout << "sonraki frame" << endl;
			animationFrames = animasyon->getTime() * FRAMES;
			timeMill = animationFrames;
			animasyon->print();
		}
		else {
			cout << "animasyon son buldu!" << endl;
			return;
		}
	}
	//1 - 49 / 50 = 0.01
	animasyon->animate(animationFrames - timeMill);

	glutTimerFunc(1000 / FRAMES, anim, timeMill - 1);
	glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{
	switch (button)
	{
	case GLUT_LEFT_BUTTON:
		if (state == GLUT_DOWN)
		{
			if (animasyon->animating)
			{
				return;
			}
			cout << "animasyon start" << endl;
			animationFrames = animasyon->getTime() * FRAMES;
			animasyon->pauseOtherTimelines();
			anim(animationFrames);
			animasyon->print();

		}
		break;
	default:
		break;
	}
}

void pencereYenidenSekillendir(int yeniEn, int yeniBoy) {
	//Bakýþ güvertesi (view port) ve projeksiyon parametrelerini ayarla
	glViewport(0, 0, yeniEn, yeniBoy);
	//glMatrixMode(GL_PROJECTION);		// projeksiyon parametrelerini ayarla
	//glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);
	glClear(GL_COLOR_BUFFER_BIT);
	// Mevcut pencere eni ve boyunu güncelle
	pencereEni = yeniEn;
	pencereBoyu = yeniBoy;
}

int main(int argc, char** argv)
{
	glutInit(&argc, (char**)argv);  // GLUT'u baþlat
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH); //gösterim modunu ayarla
	glutInitWindowPosition(100, 100); // Pencerenin sol üst ekran köþesinden uzaklýðýný ayarla
	glutInitWindowSize(pencereEni, pencereBoyu);   // Pencere boyunu ayarla
	glutCreateWindow("Dama tahtasi dokulu kup");	// Verilen baþlýkla pencereyi oluþtur
	init();							//Ýlklendirmeyi çalýþtýr
	glutMouseFunc(mouse); // set mouse func
	glutDisplayFunc(Render); // Yeniden pencere çizimleri için gösterim geri bildirim fonksiyonunu kayýtla
	glutReshapeFunc(pencereYenidenSekillendir);
	glutMainLoop();           // Sonsuz bir þekilde süreç iþlem döngüsüne gir

	return 0;
}