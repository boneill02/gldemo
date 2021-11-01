#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

#define WIN_WIDTH 800
#define WIN_HEIGHT 600

GLfloat vertices[][2] = {
	{ 0.0, 0.0 }, { 25.0, 50.0 }, { 50.0, 0.0 },
};

void display() {
	/* init colors */
	glClearColor(1.0, 1.0, 1.0, 1.0); // white bg
	glColor3f(1.0, 0.0, 0.0); // red fg

	/* viewing */
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 50.0, 0.0, 50.0);
	glMatrixMode(GL_MODELVIEW);

	/* draw triangle */
	glBegin(GL_TRIANGLES);
	glVertex2fv(vertices[0]);
	glVertex2fv(vertices[1]);
	glVertex2fv(vertices[2]);

	glEnd();
	glFlush();
}

int main(int argc, char *argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(WIN_WIDTH, WIN_HEIGHT);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("opengl triangle");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
