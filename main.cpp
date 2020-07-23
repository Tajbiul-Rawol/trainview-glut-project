#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
#define PI 3.14159265358979323846
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
              glClear(GL_COLOR_BUFFER_BIT);

//Sky
              glBegin(GL_QUADS);
              glColor3ub(115,207,249);
              glVertex2f(1.0,0.0);
              glVertex2f(1.0,1.0);
              glVertex2f(-1.0,1.0);
              glVertex2f(-1.0,0.0);
              glEnd();

//Hill Side
              glBegin(GL_TRIANGLES);
              glColor3ub(5,82,39);
              glVertex2f(-.4,0.0);
              glVertex2f(-.7,0.65);
              glVertex2f(-1.0,0.0);
              glEnd();


              glBegin(GL_TRIANGLES);
              glColor3ub(5,82,39);
              glVertex2f(0.2,0.0);
              glVertex2f(-0.1,0.65);
              glVertex2f(-0.4,0.0);
              glEnd();

              glBegin(GL_TRIANGLES);
              glColor3ub(5,82,39);
              glVertex2f(1.0,0.0);
              glVertex2f(0.6,0.65);
              glVertex2f(0.2,0.0);
              glEnd();


//Grass Field
              glBegin(GL_QUADS);
              glColor3ub(7,175,9); // grass color
              glVertex2f(1.0,-1.0);
              glVertex2f(1.0,1.0); // hilly side station
              glVertex2f(-1.0,0.0);
              glVertex2f(-1.0,-1.0);
              glEnd();

//Rail Line

              glBegin(GL_QUADS);
              glColor3ub(206,201,201);
              glVertex2f(1.0,-.8);
              glVertex2f(1.0,-.7);
              glVertex2f(-1.0,-.7);
              glVertex2f(-1.0,-.8);
              glEnd();

              glBegin(GL_QUADS);
              glColor3ub(150,75,0); // rail track colors
              glVertex2f(.9,-.8);
              glVertex2f(1.0,-.7);
              glVertex2f(0.9,-.7);
              glVertex2f(0.8,-.8);
              glEnd();

              glBegin(GL_QUADS);
               glColor3ub(150,75,0); // rail track colors
              glVertex2f(.7,-.8);
              glVertex2f(.8,-.7);
              glVertex2f(0.7,-.7);
              glVertex2f(0.6,-.8);
              glEnd();

              glBegin(GL_QUADS);
               glColor3ub(150,75,0); // rail track colors
              glVertex2f(.4,-.8);
              glVertex2f(.5,-.7);
              glVertex2f(.4,-.7);
              glVertex2f(0.3,-.8);
              glEnd();

              glBegin(GL_QUADS);
              glColor3ub(150,75,0); // rail track colors
              glVertex2f(.1,-.8);
              glVertex2f(.2,-.7);
              glVertex2f(.1,-.7);
              glVertex2f(0.0,-.8);
              glEnd();

              glBegin(GL_QUADS);
              glColor3ub(150,75,0); // rail track colors
              glVertex2f(-.2,-.8);
              glVertex2f(-.1,-.7);
              glVertex2f(-.2,-.7);
              glVertex2f(-.3,-.8);
              glEnd();

              glBegin(GL_QUADS);
               glColor3ub(150,75,0); // rail track colors
              glVertex2f(-.5,-.8);
              glVertex2f(-.4,-.7);
              glVertex2f(-.5,-.7);
              glVertex2f(-.6,-.8);
              glEnd();

              glBegin(GL_QUADS);
               glColor3ub(150,75,0); // rail track colors
              glVertex2f(-.8,-.8);
              glVertex2f(-.7,-.7);
              glVertex2f(-.8,-.7);
              glVertex2f(-.9,-.8);
              glEnd();

//Train
              glBegin(GL_QUADS);
              glColor3ub(171,64,171);  //coach 3 color
              glVertex2f(.8,-.6);
              glVertex2f(.8,-.3);
              glVertex2f(.4,-.3);
              glVertex2f(.4,-.6);
              glVertex2f(.2,.2);
              glEnd();

              glBegin(GL_QUADS);
              glColor3ub(0,0,0);  //coach 3 door color
              glVertex2f(.75,-.59);
              glVertex2f(.75,-.4);
              glVertex2f(.68,-.4);
              glVertex2f(.68,-.59);
              glVertex2f(.2,.2);
              glEnd();

              glBegin(GL_QUADS);
              glColor3ub(0,0,0); //coach 3 window color
              glVertex2f(.65,-.5);
              glVertex2f(.65,-.4);
              glVertex2f(.6,-.4);
              glVertex2f(.6,-.5);
              glVertex2f(.2,.2);
              glEnd();

              glBegin(GL_QUADS);
              glColor3ub(0,0,0);  // coach 3 window color
              glVertex2f(.57,-.5);
              glVertex2f(.57,-.4);
              glVertex2f(.52,-.4);
              glVertex2f(.52,-.5);
              glVertex2f(.2,.2);
              glEnd();

              glBegin(GL_QUADS);
              glColor3ub(0,0,0); //  coach 3 window color
              glVertex2f(.49,-.5);
              glVertex2f(.49,-.4);
              glVertex2f(.42,-.4);
              glVertex2f(.42,-.5);
              glVertex2f(.2,.2);
              glEnd();

              glColor3ub(0,0,0); // wheel color of coach 3
	          int a;

	          GLfloat x=.73f; GLfloat y=-.67f; GLfloat radius =.07f;
	          int triangleAmount = 20;


	          GLfloat twicePi = 2.0f * PI;

	         glBegin(GL_TRIANGLE_FAN);
		     glVertex2f(x, y);
		     for(a = 0; a <= triangleAmount;a++) {
             glVertex2f(
		            x + (radius * cos(a *  twicePi / triangleAmount)),
			    y + (radius * sin(a * twicePi / triangleAmount))
			);
		}
	       glEnd();

	       glColor3ub(0,0,0); //wheel colors of coach3
	          int b;

	          GLfloat x1=.47f; GLfloat y1=-.67f; GLfloat radius1 =.07f;
	          int triangleAmount1 = 20;


	          GLfloat twicePi1 = 2.0f * PI;

	         glBegin(GL_TRIANGLE_FAN);
		     glVertex2f(x1, y1);
		     for(b = 0; b <= triangleAmount1;b++) {
             glVertex2f(
		            x1 + (radius1 * cos(b *  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(b * twicePi1 / triangleAmount1))
			);
		}
              glEnd();

              glBegin(GL_QUADS);
              glColor3ub(0,0,0); //connecting rails colors
              glVertex2f(.4,-.55);
              glVertex2f(.4,-.5);   //coach connecting rails
              glVertex2f(.35,-.5);
              glVertex2f(.35,-.55);
              glVertex2f(.2,.2);
              glEnd();

	          glBegin(GL_QUADS);
              glColor3ub(171,64,171);  //coach 2 color
              glVertex2f(.35,-.6);
              glVertex2f(.35,-.3);
              glVertex2f(-.05,-.3);
              glVertex2f(-.05,-.6);
              glVertex2f(.2,.2);
              glEnd();

              glBegin(GL_QUADS);
              glColor3ub(0,0,0); //coach 2 door color
              glVertex2f(.3,-.59);
              glVertex2f(.3,-.4);
              glVertex2f(.23,-.4);
              glVertex2f(.23,-.59);
              glVertex2f(.2,.2);
              glEnd();

              glBegin(GL_QUADS);
              glColor3ub(0,0,0); // coach 2 window color
              glVertex2f(.2,-.5);
              glVertex2f(.2,-.4);
              glVertex2f(.15,-.4);
              glVertex2f(.15,-.5);
              glVertex2f(.2,.2);
              glEnd();

              glBegin(GL_QUADS);
              glColor3ub(0,0,0);  //coach 2 window color
              glVertex2f(.17,-.5);
              glVertex2f(.17,-.4);
              glVertex2f(.12,-.4);
              glVertex2f(.12,-.5);
              glVertex2f(.2,.2);
              glEnd();

              glBegin(GL_QUADS);
              glColor3ub(0,0,0); //coach 2 window color
              glVertex2f(.09,-.5);
              glVertex2f(.09,-.4);
              glVertex2f(.02,-.4);
              glVertex2f(.02,-.5);
              glVertex2f(.2,.2);
              glEnd();

              glColor3ub(0,0,0);//wheel colors of coach 2
	          int c;

	          GLfloat x2=.27f; GLfloat y2=-.67f; GLfloat radius2 =.07f;
	          int triangleAmount2 = 20;


	          GLfloat twicePi2 = 2.0f * PI;

	         glBegin(GL_TRIANGLE_FAN);
		     glVertex2f(x2, y2);
		     for(c = 0; c <= triangleAmount2;c++) {
             glVertex2f(
		            x2 + (radius2 * cos(c *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(c * twicePi2/ triangleAmount2))
			);
		}
	       glEnd();

	       glColor3ub(0,0,0); //wheel colors of coach 2
	          int d;

	          GLfloat x3=.03f; GLfloat y3=-.67f; GLfloat radius3 =.07f;
	          int triangleAmount3 = 20;


	          GLfloat twicePi3 = 2.0f * PI;

	         glBegin(GL_TRIANGLE_FAN);
		     glVertex2f(x3, y3);
		     for(d = 0; d <= triangleAmount3;d++) {
             glVertex2f(
		            x3 + (radius3 * cos(d *  twicePi3 / triangleAmount3)),
			    y3 + (radius3 * sin(d * twicePi3 / triangleAmount3))
			);
		}
	          glEnd();

	          glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(-.05,-.55);
              glVertex2f(-.05,-.5);   // doors of the coaches
              glVertex2f(-.1,-.5);
              glVertex2f(-.1,-.55);
              glEnd();

		      glBegin(GL_QUADS);
              glColor3ub(171,64,171);  //coach 1 color
              glVertex2f(-.1,-.6);
              glVertex2f(-.1,-.3);
              glVertex2f(-.5,-.3);  // doors of the coaches 2
              glVertex2f(-.55,-.6);
              glEnd();

              glBegin(GL_QUADS);
              glColor3ub(0,0,0); //coach 1 door color
              glVertex2f(-.12,-.59);
              glVertex2f(-.12,-.4);
              glVertex2f(-.19,-.4);
              glVertex2f(-.19,-.59);
              glEnd();

              glBegin(GL_QUADS);
              glColor3ub(0,0,0); //coach 1 window color
              glVertex2f(-.25,-.5);
              glVertex2f(-.25,-.38);
              glVertex2f(-.45,-.38);
              glVertex2f(-.45,-.5);
              glEnd();

              glColor3ub(0,0,0); //wheel colors of coach 1
	          int e;

	          GLfloat x4=-.18f; GLfloat y4=-.67f; GLfloat radius4 =.07f;
	          int triangleAmount4 = 20;


	          GLfloat twicePi4 = 2.0f * PI;

	         glBegin(GL_TRIANGLE_FAN);
		     glVertex2f(x4, y4);
		     for(e = 0; e <= triangleAmount4;e++) {
             glVertex2f(
		            x4 + (radius4 * cos(e *  twicePi4 / triangleAmount4)),
			    y4 + (radius4 * sin(e * twicePi4/ triangleAmount4))
			);
		}
	       glEnd();

             glColor3ub(0,0,0); //wheel color of coach 1
	          int f;

	          GLfloat x5=-.48f; GLfloat y5=-.67f; GLfloat radius5 =.07f;
	          int triangleAmount5 = 20;


	          GLfloat twicePi5 = 2.0f * PI;

	         glBegin(GL_TRIANGLE_FAN);
		     glVertex2f(x5, y5);
		     for(f = 0; f <= triangleAmount5;f++) {
             glVertex2f(
		            x5 + (radius5 * cos(f *  twicePi5 / triangleAmount5)),
			    y5 + (radius5 * sin(f * twicePi5 / triangleAmount5))
			);
        }
	        glEnd();

//Station
              glBegin(GL_QUADS);
              glColor3ub(0,0,0); //station roof color
              glVertex2f(1.0,.4);
              glVertex2f(1.0,0.5);
              glVertex2f(-.1,0.5);
              glVertex2f(-.1,.4);
              glEnd();

              glBegin(GL_QUADS);
              glColor3ub(239,188,13); // station body color
              glVertex2f(1.0,-.1);
              glVertex2f(1.0,0.4);
              glVertex2f(0.0,0.4);
              glVertex2f(0.0,-.1);
              glEnd();

              glBegin(GL_QUADS);
              glColor3ub(100,100,100);  //station base color
              glVertex2f(1.0,-.15);
              glVertex2f(1.0,-0.1);
              glVertex2f(0.0,-.1);
              glVertex2f(-0.05,-.15);
              glEnd();

              glBegin(GL_QUADS);
              glColor3ub(0,0,0);   //station window color
              glVertex2f(0.95,.15);
              glVertex2f(0.95,0.3);
              glVertex2f(0.85,0.3);
              glVertex2f(0.85,.15);
              glEnd();

              glBegin(GL_QUADS);
              glColor3ub(0,0,0);  // doors color
              glVertex2f(0.8,-.1);
              glVertex2f(0.8,0.3);
              glVertex2f(0.7,0.3);
              glVertex2f(0.7,-.1);
              glEnd();

              glBegin(GL_QUADS);
              glColor3ub(0,0,0);    //window color
              glVertex2f(0.6,.15);
              glVertex2f(0.6,0.3);
              glVertex2f(0.5,0.3);
              glVertex2f(0.5,.15);
              glEnd();

              glBegin(GL_QUADS);
              glColor3ub(0,0,0); //door colors
              glVertex2f(0.4,-.1);
              glVertex2f(0.4,0.3);
              glVertex2f(0.3,0.3);
              glVertex2f(0.3,-.1);
              glEnd();

              glBegin(GL_QUADS);
              glColor3ub(0,0,0); //window color
              glVertex2f(0.2,.15);
              glVertex2f(0.2,0.3);
              glVertex2f(0.1,0.3);
              glVertex2f(0.1,.15);
              glEnd();

//Tree
              glBegin(GL_QUADS);
              glColor3ub(106,72,71); //color of tree bark
              glVertex2f(-.65,-0.6);
              glVertex2f(-.65,-0.5);
              glVertex2f(-.7,-.5);
              glVertex2f(-.7,-0.6);
              glEnd();

              glBegin(GL_TRIANGLES);
              glColor3ub(0,150,0); //color of trees
              glVertex2f(-.55,-0.5);
              glVertex2f(-.67,-0.1);
              glVertex2f(-.8,-0.5);
              glEnd();

              glTranslatef(-0.55,-0.2,0.0);
              glScalef(0.5,0.5,0.3);



              glBegin(GL_TRIANGLES);
              glColor3ub(0,150,0); // color of trees
              glVertex2f(-.55,-0.5);
              glVertex2f(-.67,-0.1);
              glVertex2f(-.8,-0.5);
              glEnd();

              glBegin(GL_QUADS);
              glColor3ub(106,72,71); //color of tree bark 2
              glVertex2f(-.65,-0.6);
              glVertex2f(-.65,-0.5);
              glVertex2f(-.7,-.5);
              glVertex2f(-.7,-0.6);
              glEnd();

              glLoadIdentity();

//Sun
             glColor3ub(255,255,0); //color of the sun
             int g;

	GLfloat x6=-0.5f; GLfloat y6=.75f; GLfloat radius6 =.08f;
	int triangleAmount6 = 30;


	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6, y6);
		for(g = 0; g <= triangleAmount6;g++) {
			glVertex2f(
		            x6 + (radius6 * cos(g *  twicePi6 / triangleAmount6)),
			    y6 + (radius6 * sin(g * twicePi6 / triangleAmount6))
			);
		}
	glEnd();


              glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
