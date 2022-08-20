#include<cstdio>
#include <windows.h>  // for MS Windows
#include <GL/glut.h>    // GLUT, include glu.h and gl.h
#include <GL/glut.h>
#include <math.h>
# define PI           3.14159265358979323846
GLfloat i = 0.0f;
void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}

GLfloat position = 0.0f;
GLfloat speed = 0.03f;

void update(int value) {

    if(position <-1.0)
        position = 1.0f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(200, update, 0);
}
GLfloat position2 = 0.0f;
GLfloat speed2 = 0.03f;
void update2(int value2) {

    if(position2 >1.0)
        position2 = -1.0f;

    position2 += speed2;

	glutPostRedisplay();


	glutTimerFunc(200, update2, 0);
}
GLfloat position3 = 0.0f;
GLfloat speed3 = 0.01f;
void update3(int value3) {

    if(position3 >1.0)
        position3 = -1.0f;

    position3 += speed3;

	glutPostRedisplay();


	glutTimerFunc(200, update3, 0);
}


GLfloat position4 = 0.0f;
GLfloat speed4 = 0.01f;

void update4(int value) {

    if(position4 <-1.0)
        position4 = 1.0f;

    position4 -= speed4;

	glutPostRedisplay();


	glutTimerFunc(200, update4, 0);
}

GLfloat position5 = -1.0f;
GLfloat speed5 = 0.1f;

void update5(int value) {

if(position5 >3.8)
position5 = -1.0f;

position5 += speed5;
glutPostRedisplay();
glutTimerFunc(200, update5, 0);
}


GLfloat position6 = 0.0f;
GLfloat speed6 = 0.02f;
void update6(int value) {

    if(position6 >=1.5)
        position6 = -0.2f;

    position6 += speed6;

	glutPostRedisplay();


	glutTimerFunc(200, update6, 0);
}




GLfloat position7 = 0.0f;
GLfloat speed7 = 0.0035f;
void update7(int value) {

    if(position7 >=1.0)
        position7 = -1.0f;

    position7 += speed7;

	glutPostRedisplay();


	glutTimerFunc(200, update7, 0);
}







GLfloat position8 = 0.0f;
GLfloat speed8 = 0.03f;

void update8(int value) {

    if(position8 <0.0)
        position8 = 1.0f;

    position8 -= speed8;

	glutPostRedisplay();


	glutTimerFunc(200, update8, 0);
}




void sound()
{

    PlaySound("sound.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);


}



void mute()
{

    PlaySound(NULL, NULL, SND_ASYNC|SND_FILENAME);


}





void morning() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    //sky
    glBegin(GL_QUADS);
    glColor3ub(98, 229, 252);
    glVertex2f(-1.0f,1.0f);
    glVertex2f(-1.0f,0.4f);
    glVertex2f(1.0f,0.4f);
    glVertex2f(1.0f,1.0f);
    glEnd();




    //water
    glBegin(GL_QUADS);
    glColor3ub(134, 179, 227);
    glVertex2f(-1.0f,0.4f);
    glVertex2f(-1.0f,-1.0f);
    glVertex2f(1.f,-1.0f);
    glVertex2f(1.0f,0.4f);




glEnd();



    //Greens
    glBegin(GL_POLYGON);
    glColor3ub(37, 128, 38);
    glVertex2f(-1.2f,0.4f);
    glVertex2f(-0.8f,0.45f);
    glVertex2f(-0.6f,0.4f);
    glVertex2f(-0.4f,0.45f);
    glVertex2f(-0.2f,0.4f);
    glVertex2f(0.0f,0.45f);
    glVertex2f(0.2f,0.4f);
    glVertex2f(0.4f,0.45f);
    glVertex2f(0.6f,0.4f);
    glVertex2f(0.8f,0.45f);
    glVertex2f(1.2f,0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(36, 125, 37);
    glVertex2f(0.6f,0.4f);
    glVertex2f(0.65f,0.45f);
    glVertex2f(0.75f,0.45f);
    glVertex2f(0.8f,0.48f);
    glVertex2f(0.9f,0.48f);
    glVertex2f(1.2f,0.4f);
    glEnd();

    //sun
   GLfloat x=0.89f;GLfloat y=0.89f;GLfloat radius =.1f;
   GLfloat twicePi = 2.0f * PI;
   int triangleAmount = 20;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(250, 148, 15);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    //windMils
glTranslatef(1.05,0.42,0);
glScalef(0.35,0.35,0);
glBegin(GL_QUADS);
glColor3ub(140, 128, 98);

glVertex2f(-0.7f,0.5f);
glVertex2f(-0.75f,0.5f);
glVertex2f(-0.75f,0.1f);
glVertex2f(-0.7f,0.1f);
glEnd();

glPushMatrix();
glTranslatef(-0.725,0.5,0);
glRotatef(i,0,0.0,0.1);

glBegin(GL_TRIANGLES);

glColor3ub(250, 247, 247);
glVertex2f(0.0f, 0.0f);
glVertex2f( 0.2f, 0.1f);
glVertex2f( 0.1f, 0.2f);

glColor3ub(250, 247, 247);
glVertex2f(0.0f, 0.0f);
glVertex2f( -0.1f, 0.2f);
glVertex2f( -0.2f, 0.1f);

glColor3ub(1250, 247, 247);
glVertex2f(0.0f, 0.0f);
glVertex2f( -0.2f, -0.1f);
glVertex2f( -0.1f, -0.2f);

glColor3ub(250, 247, 247);
glVertex2f(0.0f, 0.0f);

glVertex2f( 0.1f, -0.2f);
glVertex2f( 0.2f, -0.1f);

glEnd();

glBegin(GL_LINES);
glColor3ub(20, 19, 19);
glVertex2f(0.0f, 0.0f);
glVertex2f( 0.15f, -0.15f);

glColor3ub(20, 19, 19);
glVertex2f(0.0f, 0.0f);
glVertex2f( -0.15f, -0.15f);

glColor3ub(20, 19, 19);
glVertex2f(0.0f, 0.0f);
glVertex2f( 0.15f, 0.15f);

glColor3ub(20, 19, 19);
glVertex2f(0.0f, 0.0f);
glVertex2f( -0.15f, 0.15f);

glEnd();

glPopMatrix();

i+=0.2f;

glLoadIdentity();

//tree
glTranslatef(1.4,0.4,0);
glScalef(0.5,0.5,0);

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2f(-0.85f,0.1f);
glVertex2f(-0.85f,0.25f);
glVertex2f(-0.9f,0.25f);
glVertex2f(-0.9f,0.1f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0,200,20);
glVertex2f(-0.85f,0.25f);
glVertex2f(-0.8f,0.3f);
glVertex2f(-0.85f,0.4f);
glVertex2f(-0.9f,0.4f);
glVertex2f(-0.95f,0.3f);
glVertex2f(-0.9f,0.25f);
glEnd();

glLoadIdentity();

//Houses
glTranslatef(1.0,0.41,0);
glScalef(0.4,0.4,0);
glBegin(GL_QUADS);
glColor3ub(148, 148, 10);
glVertex2f(-0.2f,0.1f);
glVertex2f(-0.2f,0.3f);
glVertex2f(-0.4f,0.3f);
glVertex2f(-0.4f,0.1f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(130, 3, 64);
glVertex2f(-0.2f,0.3f);
glVertex2f(-0.3f,0.45f);
glVertex2f(-0.4f,0.3f);
glEnd();

glLoadIdentity();

   glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(230, 184, 0);
    glVertex2f(-1.0f,0.4f);
    glVertex2f(1.0f,0.4f);
        glEnd();


//boat
glPushMatrix();
glTranslatef(position3,0.0f, 0.0f);
glBegin(GL_QUADS);// left most

glColor3ub(255,255,255);
glVertex2f(-0.96f,0.20f);
glVertex2f(-0.93f,0.14f);
glVertex2f(-0.77f,0.14f);
glVertex2f(-0.74f,0.20f);

glColor3ub(0,0,0);
glVertex2f(-0.93f,0.25f);
glVertex2f(-0.93f,0.20f);
glVertex2f(-0.8f,0.20f);
glVertex2f(-0.8f,0.25f);


glColor3ub(102, 51, 0);
glVertex2f(-0.8f,0.225f);
glVertex2f(-0.8f,0.20f);
glVertex2f(-0.77f,0.20f);
glVertex2f(-0.77f,0.225f);


glColor3ub(255,0,0);
glVertex2f(-0.91f,0.25f);
glVertex2f(-0.83f,0.25f);
glVertex2f(-0.83f,0.265f);
glVertex2f(-0.91f,0.265f);//boat 1 complete
glEnd();


glBegin(GL_QUADS);//boat 2

glColor3ub(255,255,255);
glVertex2f(-0.36f,0.20f);
glVertex2f(-0.33f,0.14f);
glVertex2f(-0.17f,0.14f);
glVertex2f(-0.14f,0.20f);

glColor3ub(89, 89, 89);
glVertex2f(-0.33f,0.25f);
glVertex2f(-0.33f,0.20f);
glVertex2f(-0.2f,0.20f);
glVertex2f(-0.2f,0.25f);


glColor3ub(153, 102, 0);
glVertex2f(-0.2f,0.225f);
glVertex2f(-0.2f,0.20f);
glVertex2f(-0.17f,0.20f);
glVertex2f(-0.17f,0.225f);


glColor3ub(255,0,0);
glVertex2f(-0.31f,0.25f);
glVertex2f(-0.23f,0.25f);
glVertex2f(-0.23f,0.265f);
glVertex2f(-0.31f,0.265f);//boat 2 end

glEnd();
glPopMatrix();

//small boat

glPushMatrix();
glTranslatef(position4,0.0f, 0.0f);

glBegin(GL_QUADS);

glColor3ub(255,255,255);
glVertex2f(0.31f,0.36f);
glVertex2f(0.28f,0.33f);
glVertex2f(0.20f,0.33f);
glVertex2f(0.17f,0.36f);

glColor3ub(0,0,0);
glVertex2f(0.28f,0.38f);
glVertex2f(0.28f,0.36f);
glVertex2f(0.23f,0.36f);
glVertex2f(0.23f,0.38f);


glColor3ub(153, 102, 0);
glVertex2f(0.23f,0.375f);
glVertex2f(0.23f,0.36f);
glVertex2f(0.20f,0.36f);
glVertex2f(0.20f,0.375f);


glColor3ub(255,0,0);
glVertex2f(0.245f,0.38f);
glVertex2f(0.265f,0.38f);
glVertex2f(0.265f,0.39f);
glVertex2f(0.245f,0.39f);


glEnd();


glBegin(GL_QUADS);

glColor3ub(255,255,255);
glVertex2f(-0.51f,0.36f);
glVertex2f(-0.48f,0.33f);
glVertex2f(-0.40f,0.33f);
glVertex2f(-0.37f,0.36f);

glColor3ub(0,0,0);
glVertex2f(-0.48f,0.38f);
glVertex2f(-0.48f,0.36f);
glVertex2f(-0.43f,0.36f);
glVertex2f(-0.43f,0.38f);


glColor3ub(153, 102, 0);
glVertex2f(-0.43f,0.375f);
glVertex2f(-0.43f,0.36f);
glVertex2f(-0.40f,0.36f);
glVertex2f(-0.40f,0.375f);


glColor3ub(255,0,0);
glVertex2f(-0.445f,0.38f);
glVertex2f(-0.465f,0.38f);
glVertex2f(-0.465f,0.39f);
glVertex2f(-0.445f,0.39f);

glEnd();
glPopMatrix();










        //############CLOUD##############



glPushMatrix();
glTranslatef(position7,0.0f, 0.0f);
x=-0.67f; y=0.8f; radius =.05f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=-0.74f; y=0.78f; radius =.048f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);

glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=-0.72f; y=0.81f; radius =.04f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=-0.68f; y=0.78f; radius =.05f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))

);
}
glEnd();

glTranslatef(0.6,0.1,0);

x=-0.67f; y=0.6f; radius =.05f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=-0.74f; y=0.58f; radius =.048f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=-0.72f; y=0.61f; radius =.04f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=-0.68f; y=0.58f; radius =.05f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

glTranslatef(0.4,-0.2,0);

x=-0.67f; y=0.9f; radius =.05f;
glBegin(GL_TRIANGLE_FAN);

glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=-0.74f; y=0.88f; radius =.048f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=-0.72f; y=0.91f; radius =.04f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),

y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=-0.68f; y=0.88f; radius =.05f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();
glPopMatrix();
glLoadIdentity();






//Grass
    glBegin(GL_QUADS);
    glColor3ub(0, 153,0);
    glVertex2f(-1.0, 0.0);
    glVertex2f(-1.0, -1.0);
    glVertex2f(1.0, -1.0);
    glVertex2f(1.0, 0.0);

    glColor3ub(230,184,0);
    glVertex2f(-1.0, 0.0);
    glVertex2f(-1.0, -0.04);
    glVertex2f(1.0, -0.04);
    glVertex2f(1.0, 0.0);
    glEnd();





















       //House
    glBegin(GL_TRIANGLES);
    glColor3ub(204,153,0);
   glVertex2f(-1.0, -0.3);
    glVertex2f(-0.9, -0.3);
    glVertex2f(-0.95, -0.2);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,51,0);
    glVertex2f(-0.95, -0.2);
     glVertex2f(-0.9, -0.3);
   glVertex2f(-0.7, -0.3);
    glVertex2f(-0.73, -0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204,153,0);
    glVertex2f(-0.9, -0.3);
     glVertex2f(-0.9, -0.48);
   glVertex2f(-0.7, -0.48);
    glVertex2f(-0.7, -0.3);
    glEnd();



     glBegin(GL_QUADS);
    glColor3ub(255,255,102);
    glVertex2f(-0.99, -0.3);
     glVertex2f(-0.99, -0.48);
   glVertex2f(-0.9, -0.48);
    glVertex2f(-0.9, -0.3);
    glEnd();




glBegin(GL_QUADS);
    glColor3ub(51,51,0);
    glVertex2f(-0.82, -0.4);
     glVertex2f(-0.82, -0.48);
   glVertex2f(-0.78, -0.48);
    glVertex2f(-0.78, -0.4);
    glEnd();




    //House 2
    //House
    glBegin(GL_TRIANGLES);
    glColor3ub(204,153,0);
   glVertex2f(1.0, -0.3);
    glVertex2f(0.9, -0.3);
    glVertex2f(0.95, -0.2);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,51,0);
    glVertex2f(0.95, -0.2);
     glVertex2f(0.9, -0.3);
   glVertex2f(0.7, -0.3);
    glVertex2f(0.73, -0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204,153,0);
    glVertex2f(0.9, -0.3);
     glVertex2f(0.9, -0.48);
   glVertex2f(0.7, -0.48);
    glVertex2f(0.7, -0.3);
    glEnd();



     glBegin(GL_QUADS);
    glColor3ub(255,255,102);
    glVertex2f(0.99, -0.3);
     glVertex2f(0.99, -0.48);
   glVertex2f(0.9, -0.48);
    glVertex2f(0.9, -0.3);
    glEnd();




glBegin(GL_QUADS);
    glColor3ub(51,51,0);
    glVertex2f(0.82, -0.4);
     glVertex2f(0.82, -0.48);
   glVertex2f(0.78, -0.48);
    glVertex2f(0.78, -0.4);
    glEnd();







//Tree 1

glBegin(GL_QUADS);
    glColor3ub(230,172,0);
    glVertex2f(0.2, -0.28);
     glVertex2f(0.2, -0.48);
   glVertex2f(0.24, -0.48);
    glVertex2f(0.24, -0.28);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(26,255,26);
    glVertex2f(0.15, -0.28);
     glVertex2f(0.29, -0.28);
   glVertex2f(0.22, -0.2);


   glColor3ub(26,255,26);
    glVertex2f(0.15, -0.23);
     glVertex2f(0.29, -0.23);
   glVertex2f(0.22, -0.1);
    glEnd();







    //Tree 2

glBegin(GL_QUADS);
    glColor3ub(230,172,0);
    glVertex2f(-0.2, -0.28);
     glVertex2f(-0.2, -0.48);
   glVertex2f(-0.24, -0.48);
    glVertex2f(-0.24, -0.28);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(26,255,26);
    glVertex2f(-0.15, -0.28);
     glVertex2f(-0.29, -0.28);
   glVertex2f(-0.22, -0.2);


   glColor3ub(26,255,26);
    glVertex2f(-0.15, -0.23);
     glVertex2f(-0.29, -0.23);
   glVertex2f(-0.22, -0.1);
    glEnd();






       //Tree 3

glBegin(GL_QUADS);
    glColor3ub(230,172,0);
    glVertex2f(-0.5, -0.28);
     glVertex2f(-0.5, -0.48);
   glVertex2f(-0.54, -0.48);
    glVertex2f(-0.54, -0.28);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(26,255,26);
    glVertex2f(-0.45, -0.28);
     glVertex2f(-0.59, -0.28);
   glVertex2f(-0.52, -0.2);


   glColor3ub(26,255,26);
    glVertex2f(-0.45, -0.23);
     glVertex2f(-0.59, -0.23);
   glVertex2f(-0.52, -0.1);
    glEnd();





//Tree 4

glBegin(GL_QUADS);
    glColor3ub(230,172,0);
    glVertex2f(0.5, -0.28);
     glVertex2f(0.5, -0.48);
   glVertex2f(0.54, -0.48);
    glVertex2f(0.54, -0.28);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(26,255,26);
    glVertex2f(0.45, -0.28);
     glVertex2f(0.59, -0.28);
   glVertex2f(0.52, -0.2);


   glColor3ub(26,255,26);
    glVertex2f(0.45, -0.23);
     glVertex2f(0.59, -0.23);
   glVertex2f(0.52, -0.1);
    glEnd();









    //Road
glBegin(GL_QUADS);
    glColor3ub(25, 25, 25);
   glVertex2f(-1.0, -0.55);
    glVertex2f(-1.0, -0.94);
    glVertex2f(1.0, -0.94);
    glVertex2f(1.0, -0.55);


    //road middle border

   glColor3ub(245,245,239);
   glVertex2f(-1.0, -0.73);
    glVertex2f(-1.0, -0.77);
    glVertex2f(-0.85, -0.77);
    glVertex2f(-0.85, -0.73);

    glColor3ub(245,245,239);
   glVertex2f(-0.7, -0.73);
    glVertex2f(-0.7, -0.77);
    glVertex2f(-0.55, -0.77);
    glVertex2f(-0.55, -0.73);

     glColor3ub(245,245,239);
   glVertex2f(-0.4, -0.73);
    glVertex2f(-0.4, -0.77);
    glVertex2f(-0.25, -0.77);
    glVertex2f(-0.25, -0.73);

    glColor3ub(245,245,239);
   glVertex2f(-0.1, -0.73);
    glVertex2f(-0.1, -0.77);
    glVertex2f(0.05, -0.77);
    glVertex2f(0.05, -0.73);

        glColor3ub(245,245,239);
   glVertex2f(0.2, -0.73);
    glVertex2f(0.2, -0.77);
    glVertex2f(0.35, -0.77);
    glVertex2f(0.35, -0.73);

     glColor3ub(245,245,239);
   glVertex2f(0.5, -0.73);
    glVertex2f(0.5, -0.77);
    glVertex2f(0.65, -0.77);
    glVertex2f(0.65, -0.73);

    glColor3ub(245,245,239);
   glVertex2f(0.8, -0.73);
    glVertex2f(0.8, -0.77);
    glVertex2f(0.95, -0.77);
    glVertex2f(0.95, -0.73);
    glEnd();







    // Car
    glPushMatrix();
glTranslatef(position2,0.0f, 0.0f);
    glBegin(GL_POLYGON);

glColor3ub(255, 102, 0);//car
glVertex2f(-0.95f,-0.62f);
glVertex2f(-.95f,-0.65f);
glVertex2f(-0.76f,-0.65f);
glVertex2f(-0.76f,-0.63f);
glVertex2f(-0.775f,-0.62f);

glEnd();


glBegin(GL_QUADS);//car hood

glColor3ub(0, 0, 0);

glVertex2f(-0.93f,-0.62f);
glVertex2f(-0.9f,-0.58f);
glVertex2f(-0.82f,-0.58f);
glVertex2f(-0.8f,-0.62f);
glEnd();

glLineWidth(2.5);
glBegin(GL_LINES);//car hood

glColor3ub(255,255,255);
glVertex2f(-0.87f,-0.58f);
glVertex2f(-0.87f,-0.62f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car wheel
glVertex2f(-0.9f,-0.65f);
glVertex2f(-.91f,-0.66f);
glVertex2f(-0.91f,-0.67f);
glVertex2f(-0.9f,-0.68f);
glVertex2f(-0.89f,-0.67f);
glVertex2f(-0.89f,-0.66f);
glVertex2f(-0.9f,-0.65f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car whee2
glVertex2f(-0.8f,-0.65f);
glVertex2f(-.81f,-0.66f);
glVertex2f(-0.81f,-0.67f);
glVertex2f(-0.8f,-0.68f);
glVertex2f(-0.79f,-0.67f);
glVertex2f(-0.79f,-0.66f);
glVertex2f(-0.8f,-0.65f);
glEnd();




   // Car
    glBegin(GL_POLYGON);

glColor3ub(255, 102, 0);//car
glVertex2f(-0.65f,-0.62f);
glVertex2f(-.65f,-0.65f);
glVertex2f(-0.46f,-0.65f);
glVertex2f(-0.46f,-0.63f);
glVertex2f(-0.475f,-0.62f);

glEnd();


glBegin(GL_QUADS);//car hood

glColor3ub(0, 0, 0);

glVertex2f(-0.63f,-0.62f);
glVertex2f(-0.6f,-0.58f);
glVertex2f(-0.52f,-0.58f);
glVertex2f(-0.5f,-0.62f);
glEnd();

glLineWidth(2.5);
glBegin(GL_LINES);//car hood

glColor3ub(255,255,255);
glVertex2f(-0.57f,-0.58f);
glVertex2f(-0.57f,-0.62f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car wheel
glVertex2f(-0.6f,-0.65f);
glVertex2f(-.61f,-0.66f);
glVertex2f(-0.61f,-0.67f);
glVertex2f(-0.6f,-0.68f);
glVertex2f(-0.59f,-0.67f);
glVertex2f(-0.59f,-0.66f);
glVertex2f(-0.6f,-0.65f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car whee2
glVertex2f(-0.5f,-0.65f);
glVertex2f(-.51f,-0.66f);
glVertex2f(-0.51f,-0.67f);
glVertex2f(-0.5f,-0.68f);
glVertex2f(-0.49f,-0.67f);
glVertex2f(-0.49f,-0.66f);
glVertex2f(-0.5f,-0.65f);
glEnd();




  // Car
    glBegin(GL_POLYGON);

glColor3ub(255, 102, 0);//car
glVertex2f(-0.65f,-0.62f);
glVertex2f(-.65f,-0.65f);
glVertex2f(-0.46f,-0.65f);
glVertex2f(-0.46f,-0.63f);
glVertex2f(-0.475f,-0.62f);

glEnd();


glBegin(GL_QUADS);//car hood

glColor3ub(0, 0, 0);

glVertex2f(-0.63f,-0.62f);
glVertex2f(-0.6f,-0.58f);
glVertex2f(-0.52f,-0.58f);
glVertex2f(-0.5f,-0.62f);
glEnd();

glLineWidth(2.5);
glBegin(GL_LINES);//car hood

glColor3ub(255,255,255);
glVertex2f(-0.57f,-0.58f);
glVertex2f(-0.57f,-0.62f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car wheel
glVertex2f(-0.6f,-0.65f);
glVertex2f(-.61f,-0.66f);
glVertex2f(-0.61f,-0.67f);
glVertex2f(-0.6f,-0.68f);
glVertex2f(-0.59f,-0.67f);
glVertex2f(-0.59f,-0.66f);
glVertex2f(-0.6f,-0.65f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car whee2
glVertex2f(-0.5f,-0.65f);
glVertex2f(-.51f,-0.66f);
glVertex2f(-0.51f,-0.67f);
glVertex2f(-0.5f,-0.68f);
glVertex2f(-0.49f,-0.67f);
glVertex2f(-0.49f,-0.66f);
glVertex2f(-0.5f,-0.65f);
glEnd();

glPopMatrix();



///////////////CAR bottom


glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
glBegin(GL_POLYGON);

glColor3ub(255, 102, 0);//car3
glVertex2f(0.95f,-0.87f);
glVertex2f(.95f,-0.9f);
glVertex2f(0.76f,-0.9f);
glVertex2f(0.76f,-0.88f);
glVertex2f(0.775f,-0.87f);

glEnd();


glBegin(GL_QUADS);//car hood

glColor3ub(0, 0, 0);

glVertex2f(0.93f,-0.87f);
glVertex2f(0.9f,-0.83f);
glVertex2f(0.82f,-0.83f);
glVertex2f(0.8f,-0.87f);
glEnd();

glLineWidth(2.5);
glBegin(GL_LINES);//car hood

glColor3ub(255,255,255);
glVertex2f(0.87f,-0.83f);
glVertex2f(0.87f,-0.87f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car wheel
glVertex2f(0.9f,-0.9f);
glVertex2f(.91f,-0.91f);
glVertex2f(0.91f,-0.92f);
glVertex2f(0.9f,-0.93f);
glVertex2f(0.89f,-0.92f);
glVertex2f(0.89f,-0.91f);
glVertex2f(0.9f,-0.9f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car whee2
glVertex2f(0.8f,-0.9f);
glVertex2f(.81f,-0.91f);
glVertex2f(0.81f,-0.92f);
glVertex2f(0.8f,-0.93f);
glVertex2f(0.79f,-0.92f);
glVertex2f(0.79f,-0.91f);
glVertex2f(0.8f,-0.9f);
glEnd();









glBegin(GL_POLYGON);

glColor3ub(153, 255, 51);//car4
glVertex2f(0.65f,-0.87f);
glVertex2f(.65f,-0.9f);
glVertex2f(0.46f,-0.9f);
glVertex2f(0.46f,-0.88f);
glVertex2f(0.475f,-0.87f);

glEnd();


glBegin(GL_QUADS);//car hood

glColor3ub(0, 0, 0);

glVertex2f(0.63f,-0.87f);
glVertex2f(0.6f,-0.83f);
glVertex2f(0.52f,-0.83f);
glVertex2f(0.5f,-0.87f);
glEnd();

glLineWidth(2.5);
glBegin(GL_LINES);//car hood

glColor3ub(255,255,255);
glVertex2f(0.57f,-0.83f);
glVertex2f(0.57f,-0.87f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car wheel
glVertex2f(0.6f,-0.9f);
glVertex2f(.61f,-0.91f);
glVertex2f(0.61f,-0.92f);
glVertex2f(0.6f,-0.93f);
glVertex2f(0.59f,-0.92f);
glVertex2f(0.59f,-0.91f);
glVertex2f(0.6f,-0.9f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car whee2
glVertex2f(0.5f,-0.9f);
glVertex2f(.51f,-0.91f);
glVertex2f(0.51f,-0.92f);
glVertex2f(0.5f,-0.93f);
glVertex2f(0.49f,-0.92f);
glVertex2f(0.49f,-0.91f);
glVertex2f(0.5f,-0.9f);
glEnd();







glBegin(GL_POLYGON);

glColor3ub(255, 0, 0);//car 5
glVertex2f(0.25f,-0.87f);
glVertex2f(.25f,-0.9f);
glVertex2f(0.06f,-0.9f);
glVertex2f(0.06f,-0.88f);
glVertex2f(0.075f,-0.87f);

glEnd();


glBegin(GL_QUADS);//car hood

glColor3ub(0, 0, 0);

glVertex2f(0.23f,-0.87f);
glVertex2f(0.2f,-0.83f);
glVertex2f(0.12f,-0.83f);
glVertex2f(0.1f,-0.87f);
glEnd();

glLineWidth(2.5);
glBegin(GL_LINES);//car hood

glColor3ub(255,255,255);
glVertex2f(0.17f,-0.83f);
glVertex2f(0.17f,-0.87f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car wheel
glVertex2f(0.2f,-0.9f);
glVertex2f(.21f,-0.91f);
glVertex2f(0.21f,-0.92f);
glVertex2f(0.2f,-0.93f);
glVertex2f(0.19f,-0.92f);
glVertex2f(0.19f,-0.91f);
glVertex2f(0.2f,-0.9f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car whee2
glVertex2f(0.1f,-0.9f);
glVertex2f(.11f,-0.91f);
glVertex2f(0.11f,-0.92f);
glVertex2f(0.1f,-0.93f);
glVertex2f(0.09f,-0.92f);
glVertex2f(0.09f,-0.91f);
glVertex2f(0.1f,-0.9f);
glEnd();

glPopMatrix();



//BIRD

glTranslatef(-0.5,-0.4,0);

glScalef(0.4,0.4,0);

glPushMatrix();
glTranslatef(position5,position5, 0.0f);

x=-0.3f;y=0.3f;radius =.01f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(21, 23, 26);
glVertex2f(x, y); // center of circle
for(int j = 0; j<=triangleAmount;j++) {
glVertex2f(
x + (radius * cos(j * twicePi / triangleAmount)),
y + (radius * sin(j * twicePi / triangleAmount))
);
}
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(224, 107, 74);
glVertex2f(-0.3f,0.3f);
glVertex2f(-0.25f,0.4f);
glVertex2f(-0.3f,0.4f);

glColor3ub(224, 107, 74);
glVertex2f(-0.3f,0.3f);
glVertex2f(-0.2f,0.3f);
glVertex2f(-0.2f,0.35f);
glEnd();

x=-0.3f;y=0.15f;radius =.01f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(21, 23, 26);
glVertex2f(x, y); // center of circle
for(int j = 0; j<=triangleAmount;j++) {
glVertex2f(
x + (radius * cos(j * twicePi / triangleAmount)),
y + (radius * sin(j * twicePi / triangleAmount))
);
}
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(34, 133, 64);
glVertex2f(-0.3f,0.15f);
glVertex2f(-0.25f,0.25f);
glVertex2f(-0.3f,0.25f);

glColor3ub(34, 133, 64);
glVertex2f(-0.3f,0.15f);
glVertex2f(-0.2f,0.15f);
glVertex2f(-0.2f,0.2f);
glEnd();

x=-0.15f;y=0.2f;radius =.01f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(21, 23, 26);
glVertex2f(x, y); // center of circle
for(int j = 0; j<=triangleAmount;j++){

glVertex2f(
x + (radius * cos(j * twicePi / triangleAmount)),
y + (radius * sin(j * twicePi / triangleAmount))
);
}
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(34, 133, 64);
glVertex2f(-0.15f,0.2f);
glVertex2f(-0.05f,0.2f);
glVertex2f(-0.05f,0.25f);

glColor3f(34, 133, 64);
glVertex2f(-0.15f,0.2f);
glVertex2f(-0.1f,0.3f);
glVertex2f(-0.15f,0.3f);
glEnd();

glPopMatrix();
glLoadIdentity();



	glFlush();
}










//################################################################day#########################################################################


void day() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    //sky
    glBegin(GL_QUADS);
    glColor3ub(252, 216, 10);
    glVertex2f(-1.0f,1.0f);
    glVertex2f(-1.0f,0.4f);
    glVertex2f(1.0f,0.4f);
    glVertex2f(1.0f,1.0f);
    glEnd();



    //water
    glBegin(GL_QUADS);
    glColor3ub(133, 224, 224);
    glVertex2f(-1.0f,0.4f);
    glVertex2f(-1.0f,-1.0f);
    glVertex2f(1.f,-1.0f);
    glVertex2f(1.0f,0.4f);
glEnd();


 glEnable(GL_LIGHTING);//Enable Light Effect

  GLfloat global_ambient1[] = {6,7,0.0,0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient1);//A lighting model parameter.
 //sun
   GLfloat x=0.0f;GLfloat y=0.885f;GLfloat radius =.1f;
   GLfloat twicePi = 2.0f * PI;
   int triangleAmount = 20;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 0);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




glDisable(GL_LIGHTING);//Enable Light Effect



//boat
glPushMatrix();
glTranslatef(position3,0.0f, 0.0f);
glBegin(GL_QUADS);// left most

glColor3ub(255,255,255);
glVertex2f(-0.96f,0.20f);
glVertex2f(-0.93f,0.14f);
glVertex2f(-0.77f,0.14f);
glVertex2f(-0.74f,0.20f);

glColor3ub(0,0,0);
glVertex2f(-0.93f,0.25f);
glVertex2f(-0.93f,0.20f);
glVertex2f(-0.8f,0.20f);
glVertex2f(-0.8f,0.25f);


glColor3ub(102, 51, 0);
glVertex2f(-0.8f,0.225f);
glVertex2f(-0.8f,0.20f);
glVertex2f(-0.77f,0.20f);
glVertex2f(-0.77f,0.225f);


glColor3ub(255,0,0);
glVertex2f(-0.91f,0.25f);
glVertex2f(-0.83f,0.25f);
glVertex2f(-0.83f,0.265f);
glVertex2f(-0.91f,0.265f);//boat 1 complete
glEnd();


glBegin(GL_QUADS);//boat 2

glColor3ub(255,255,255);
glVertex2f(-0.36f,0.20f);
glVertex2f(-0.33f,0.14f);
glVertex2f(-0.17f,0.14f);
glVertex2f(-0.14f,0.20f);

glColor3ub(89, 89, 89);
glVertex2f(-0.33f,0.25f);
glVertex2f(-0.33f,0.20f);
glVertex2f(-0.2f,0.20f);
glVertex2f(-0.2f,0.25f);


glColor3ub(153, 102, 0);
glVertex2f(-0.2f,0.225f);
glVertex2f(-0.2f,0.20f);
glVertex2f(-0.17f,0.20f);
glVertex2f(-0.17f,0.225f);


glColor3ub(255,0,0);
glVertex2f(-0.31f,0.25f);
glVertex2f(-0.23f,0.25f);
glVertex2f(-0.23f,0.265f);
glVertex2f(-0.31f,0.265f);//boat 2 end

glEnd();
glPopMatrix();

//small boat

glPushMatrix();
glTranslatef(position4,0.0f, 0.0f);

glBegin(GL_QUADS);

glColor3ub(255,255,255);
glVertex2f(0.31f,0.36f);
glVertex2f(0.28f,0.33f);
glVertex2f(0.20f,0.33f);
glVertex2f(0.17f,0.36f);

glColor3ub(0,0,0);
glVertex2f(0.28f,0.38f);
glVertex2f(0.28f,0.36f);
glVertex2f(0.23f,0.36f);
glVertex2f(0.23f,0.38f);


glColor3ub(153, 102, 0);
glVertex2f(0.23f,0.375f);
glVertex2f(0.23f,0.36f);
glVertex2f(0.20f,0.36f);
glVertex2f(0.20f,0.375f);


glColor3ub(255,0,0);
glVertex2f(0.245f,0.38f);
glVertex2f(0.265f,0.38f);
glVertex2f(0.265f,0.39f);
glVertex2f(0.245f,0.39f);


glEnd();


glBegin(GL_QUADS);

glColor3ub(255,255,255);
glVertex2f(-0.51f,0.36f);
glVertex2f(-0.48f,0.33f);
glVertex2f(-0.40f,0.33f);
glVertex2f(-0.37f,0.36f);

glColor3ub(0,0,0);
glVertex2f(-0.48f,0.38f);
glVertex2f(-0.48f,0.36f);
glVertex2f(-0.43f,0.36f);
glVertex2f(-0.43f,0.38f);


glColor3ub(153, 102, 0);
glVertex2f(-0.43f,0.375f);
glVertex2f(-0.43f,0.36f);
glVertex2f(-0.40f,0.36f);
glVertex2f(-0.40f,0.375f);


glColor3ub(255,0,0);
glVertex2f(-0.445f,0.38f);
glVertex2f(-0.465f,0.38f);
glVertex2f(-0.465f,0.39f);
glVertex2f(-0.445f,0.39f);

glEnd();
glPopMatrix();




    //Greens
    glBegin(GL_POLYGON);
    glColor3ub(37, 128, 38);
    glVertex2f(-1.2f,0.4f);
    glVertex2f(-0.8f,0.45f);
    glVertex2f(-0.6f,0.4f);
    glVertex2f(-0.4f,0.45f);
    glVertex2f(-0.2f,0.4f);
    glVertex2f(0.0f,0.45f);
    glVertex2f(0.2f,0.4f);
    glVertex2f(0.4f,0.45f);
    glVertex2f(0.6f,0.4f);
    glVertex2f(0.8f,0.45f);
    glVertex2f(1.2f,0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(36, 125, 37);
    glVertex2f(0.6f,0.4f);
    glVertex2f(0.65f,0.45f);
    glVertex2f(0.75f,0.45f);
    glVertex2f(0.8f,0.48f);
    glVertex2f(0.9f,0.48f);
    glVertex2f(1.2f,0.4f);
    glEnd();



    //windMils
glTranslatef(1.05,0.42,0);
glScalef(0.35,0.35,0);
glBegin(GL_QUADS);
glColor3ub(140, 128, 98);

glVertex2f(-0.7f,0.5f);
glVertex2f(-0.75f,0.5f);
glVertex2f(-0.75f,0.1f);
glVertex2f(-0.7f,0.1f);
glEnd();

glPushMatrix();
glTranslatef(-0.725,0.5,0);
glRotatef(i,0,0.0,0.1);

glBegin(GL_TRIANGLES);

glColor3ub(250, 247, 247);
glVertex2f(0.0f, 0.0f);
glVertex2f( 0.2f, 0.1f);
glVertex2f( 0.1f, 0.2f);

glColor3ub(250, 247, 247);
glVertex2f(0.0f, 0.0f);
glVertex2f( -0.1f, 0.2f);
glVertex2f( -0.2f, 0.1f);

glColor3ub(1250, 247, 247);
glVertex2f(0.0f, 0.0f);
glVertex2f( -0.2f, -0.1f);
glVertex2f( -0.1f, -0.2f);

glColor3ub(250, 247, 247);
glVertex2f(0.0f, 0.0f);

glVertex2f( 0.1f, -0.2f);
glVertex2f( 0.2f, -0.1f);

glEnd();

glBegin(GL_LINES);
glColor3ub(20, 19, 19);
glVertex2f(0.0f, 0.0f);
glVertex2f( 0.15f, -0.15f);

glColor3ub(20, 19, 19);
glVertex2f(0.0f, 0.0f);
glVertex2f( -0.15f, -0.15f);

glColor3ub(20, 19, 19);
glVertex2f(0.0f, 0.0f);
glVertex2f( 0.15f, 0.15f);

glColor3ub(20, 19, 19);
glVertex2f(0.0f, 0.0f);
glVertex2f( -0.15f, 0.15f);

glEnd();

glPopMatrix();

i+=0.2f;

glLoadIdentity();

//tree
glTranslatef(1.4,0.4,0);
glScalef(0.5,0.5,0);

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2f(-0.85f,0.1f);
glVertex2f(-0.85f,0.25f);
glVertex2f(-0.9f,0.25f);
glVertex2f(-0.9f,0.1f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0,200,20);
glVertex2f(-0.85f,0.25f);
glVertex2f(-0.8f,0.3f);
glVertex2f(-0.85f,0.4f);
glVertex2f(-0.9f,0.4f);
glVertex2f(-0.95f,0.3f);
glVertex2f(-0.9f,0.25f);
glEnd();

glLoadIdentity();

//Houses
glTranslatef(1.0,0.41,0);
glScalef(0.4,0.4,0);
glBegin(GL_QUADS);
glColor3ub(148, 148, 10);
glVertex2f(-0.2f,0.1f);
glVertex2f(-0.2f,0.3f);
glVertex2f(-0.4f,0.3f);
glVertex2f(-0.4f,0.1f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(130, 3, 64);
glVertex2f(-0.2f,0.3f);
glVertex2f(-0.3f,0.45f);
glVertex2f(-0.4f,0.3f);
glEnd();

glLoadIdentity();

glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(230, 184, 0);
    glVertex2f(-1.0f,0.4f);
    glVertex2f(1.0f,0.4f);
        glEnd();







//############CLOUD##############




glPushMatrix();
glTranslatef(position7,0.0f, 0.0f);
x=-0.67f; y=0.8f; radius =.05f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=-0.74f; y=0.78f; radius =.048f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);

glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=-0.72f; y=0.81f; radius =.04f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=-0.68f; y=0.78f; radius =.05f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))

);
}
glEnd();

glTranslatef(0.6,0.1,0);

x=-0.67f; y=0.6f; radius =.05f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=-0.74f; y=0.58f; radius =.048f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=-0.72f; y=0.61f; radius =.04f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=-0.68f; y=0.58f; radius =.05f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

glTranslatef(0.4,-0.2,0);

x=-0.67f; y=0.9f; radius =.05f;
glBegin(GL_TRIANGLE_FAN);

glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=-0.74f; y=0.88f; radius =.048f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=-0.72f; y=0.91f; radius =.04f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),

y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=-0.68f; y=0.88f; radius =.05f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();
glPopMatrix();
glLoadIdentity();








//Grass
    glBegin(GL_QUADS);
    glColor3ub(0, 153,0);
    glVertex2f(-1.0, 0.0);
    glVertex2f(-1.0, -1.0);
    glVertex2f(1.0, -1.0);
    glVertex2f(1.0, 0.0);

    glColor3ub(230,184,0);
    glVertex2f(-1.0, 0.0);
    glVertex2f(-1.0, -0.04);
    glVertex2f(1.0, -0.04);
    glVertex2f(1.0, 0.0);
    glEnd();






       //House
    glBegin(GL_TRIANGLES);
    glColor3ub(204,153,0);
   glVertex2f(-1.0, -0.3);
    glVertex2f(-0.9, -0.3);
    glVertex2f(-0.95, -0.2);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,51,0);
    glVertex2f(-0.95, -0.2);
     glVertex2f(-0.9, -0.3);
   glVertex2f(-0.7, -0.3);
    glVertex2f(-0.73, -0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204,153,0);
    glVertex2f(-0.9, -0.3);
     glVertex2f(-0.9, -0.48);
   glVertex2f(-0.7, -0.48);
    glVertex2f(-0.7, -0.3);
    glEnd();



     glBegin(GL_QUADS);
    glColor3ub(255,255,102);
    glVertex2f(-0.99, -0.3);
     glVertex2f(-0.99, -0.48);
   glVertex2f(-0.9, -0.48);
    glVertex2f(-0.9, -0.3);
    glEnd();




glBegin(GL_QUADS);
    glColor3ub(51,51,0);
    glVertex2f(-0.82, -0.4);
     glVertex2f(-0.82, -0.48);
   glVertex2f(-0.78, -0.48);
    glVertex2f(-0.78, -0.4);
    glEnd();




    //House 2
    //House
    glBegin(GL_TRIANGLES);
    glColor3ub(204,153,0);
   glVertex2f(1.0, -0.3);
    glVertex2f(0.9, -0.3);
    glVertex2f(0.95, -0.2);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,51,0);
    glVertex2f(0.95, -0.2);
     glVertex2f(0.9, -0.3);
   glVertex2f(0.7, -0.3);
    glVertex2f(0.73, -0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204,153,0);
    glVertex2f(0.9, -0.3);
     glVertex2f(0.9, -0.48);
   glVertex2f(0.7, -0.48);
    glVertex2f(0.7, -0.3);
    glEnd();



     glBegin(GL_QUADS);
    glColor3ub(255,255,102);
    glVertex2f(0.99, -0.3);
     glVertex2f(0.99, -0.48);
   glVertex2f(0.9, -0.48);
    glVertex2f(0.9, -0.3);
    glEnd();




glBegin(GL_QUADS);
    glColor3ub(51,51,0);
    glVertex2f(0.82, -0.4);
     glVertex2f(0.82, -0.48);
   glVertex2f(0.78, -0.48);
    glVertex2f(0.78, -0.4);
    glEnd();







//Tree 1

glBegin(GL_QUADS);
    glColor3ub(230,172,0);
    glVertex2f(0.2, -0.28);
     glVertex2f(0.2, -0.48);
   glVertex2f(0.24, -0.48);
    glVertex2f(0.24, -0.28);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(26,255,26);
    glVertex2f(0.15, -0.28);
     glVertex2f(0.29, -0.28);
   glVertex2f(0.22, -0.2);


   glColor3ub(26,255,26);
    glVertex2f(0.15, -0.23);
     glVertex2f(0.29, -0.23);
   glVertex2f(0.22, -0.1);
    glEnd();







    //Tree 2

glBegin(GL_QUADS);
    glColor3ub(230,172,0);
    glVertex2f(-0.2, -0.28);
     glVertex2f(-0.2, -0.48);
   glVertex2f(-0.24, -0.48);
    glVertex2f(-0.24, -0.28);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(26,255,26);
    glVertex2f(-0.15, -0.28);
     glVertex2f(-0.29, -0.28);
   glVertex2f(-0.22, -0.2);


   glColor3ub(26,255,26);
    glVertex2f(-0.15, -0.23);
     glVertex2f(-0.29, -0.23);
   glVertex2f(-0.22, -0.1);
    glEnd();






       //Tree 3

glBegin(GL_QUADS);
    glColor3ub(230,172,0);
    glVertex2f(-0.5, -0.28);
     glVertex2f(-0.5, -0.48);
   glVertex2f(-0.54, -0.48);
    glVertex2f(-0.54, -0.28);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(26,255,26);
    glVertex2f(-0.45, -0.28);
     glVertex2f(-0.59, -0.28);
   glVertex2f(-0.52, -0.2);


   glColor3ub(26,255,26);
    glVertex2f(-0.45, -0.23);
     glVertex2f(-0.59, -0.23);
   glVertex2f(-0.52, -0.1);
    glEnd();





//Tree 4

glBegin(GL_QUADS);
    glColor3ub(230,172,0);
    glVertex2f(0.5, -0.28);
     glVertex2f(0.5, -0.48);
   glVertex2f(0.54, -0.48);
    glVertex2f(0.54, -0.28);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(26,255,26);
    glVertex2f(0.45, -0.28);
     glVertex2f(0.59, -0.28);
   glVertex2f(0.52, -0.2);


   glColor3ub(26,255,26);
    glVertex2f(0.45, -0.23);
     glVertex2f(0.59, -0.23);
   glVertex2f(0.52, -0.1);
    glEnd();








    //Road
glBegin(GL_QUADS);
    glColor3ub(25, 25, 25);
   glVertex2f(-1.0, -0.55);
    glVertex2f(-1.0, -0.94);
    glVertex2f(1.0, -0.94);
    glVertex2f(1.0, -0.55);


    //road middle border

   glColor3ub(245,245,239);
   glVertex2f(-1.0, -0.73);
    glVertex2f(-1.0, -0.77);
    glVertex2f(-0.85, -0.77);
    glVertex2f(-0.85, -0.73);

    glColor3ub(245,245,239);
   glVertex2f(-0.7, -0.73);
    glVertex2f(-0.7, -0.77);
    glVertex2f(-0.55, -0.77);
    glVertex2f(-0.55, -0.73);

     glColor3ub(245,245,239);
   glVertex2f(-0.4, -0.73);
    glVertex2f(-0.4, -0.77);
    glVertex2f(-0.25, -0.77);
    glVertex2f(-0.25, -0.73);

    glColor3ub(245,245,239);
   glVertex2f(-0.1, -0.73);
    glVertex2f(-0.1, -0.77);
    glVertex2f(0.05, -0.77);
    glVertex2f(0.05, -0.73);

        glColor3ub(245,245,239);
   glVertex2f(0.2, -0.73);
    glVertex2f(0.2, -0.77);
    glVertex2f(0.35, -0.77);
    glVertex2f(0.35, -0.73);

     glColor3ub(245,245,239);
   glVertex2f(0.5, -0.73);
    glVertex2f(0.5, -0.77);
    glVertex2f(0.65, -0.77);
    glVertex2f(0.65, -0.73);

    glColor3ub(245,245,239);
   glVertex2f(0.8, -0.73);
    glVertex2f(0.8, -0.77);
    glVertex2f(0.95, -0.77);
    glVertex2f(0.95, -0.73);
    glEnd();







    // Car
    glPushMatrix();
glTranslatef(position2,0.0f, 0.0f);
    glBegin(GL_POLYGON);

glColor3ub(255, 102, 0);//car
glVertex2f(-0.95f,-0.62f);
glVertex2f(-.95f,-0.65f);
glVertex2f(-0.76f,-0.65f);
glVertex2f(-0.76f,-0.63f);
glVertex2f(-0.775f,-0.62f);

glEnd();


glBegin(GL_QUADS);//car hood

glColor3ub(0, 0, 0);

glVertex2f(-0.93f,-0.62f);
glVertex2f(-0.9f,-0.58f);
glVertex2f(-0.82f,-0.58f);
glVertex2f(-0.8f,-0.62f);
glEnd();

glLineWidth(2.5);
glBegin(GL_LINES);//car hood

glColor3ub(255,255,255);
glVertex2f(-0.87f,-0.58f);
glVertex2f(-0.87f,-0.62f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car wheel
glVertex2f(-0.9f,-0.65f);
glVertex2f(-.91f,-0.66f);
glVertex2f(-0.91f,-0.67f);
glVertex2f(-0.9f,-0.68f);
glVertex2f(-0.89f,-0.67f);
glVertex2f(-0.89f,-0.66f);
glVertex2f(-0.9f,-0.65f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car whee2
glVertex2f(-0.8f,-0.65f);
glVertex2f(-.81f,-0.66f);
glVertex2f(-0.81f,-0.67f);
glVertex2f(-0.8f,-0.68f);
glVertex2f(-0.79f,-0.67f);
glVertex2f(-0.79f,-0.66f);
glVertex2f(-0.8f,-0.65f);
glEnd();




   // Car
    glBegin(GL_POLYGON);

glColor3ub(255, 102, 0);//car
glVertex2f(-0.65f,-0.62f);
glVertex2f(-.65f,-0.65f);
glVertex2f(-0.46f,-0.65f);
glVertex2f(-0.46f,-0.63f);
glVertex2f(-0.475f,-0.62f);

glEnd();


glBegin(GL_QUADS);//car hood

glColor3ub(0, 0, 0);

glVertex2f(-0.63f,-0.62f);
glVertex2f(-0.6f,-0.58f);
glVertex2f(-0.52f,-0.58f);
glVertex2f(-0.5f,-0.62f);
glEnd();

glLineWidth(2.5);
glBegin(GL_LINES);//car hood

glColor3ub(255,255,255);
glVertex2f(-0.57f,-0.58f);
glVertex2f(-0.57f,-0.62f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car wheel
glVertex2f(-0.6f,-0.65f);
glVertex2f(-.61f,-0.66f);
glVertex2f(-0.61f,-0.67f);
glVertex2f(-0.6f,-0.68f);
glVertex2f(-0.59f,-0.67f);
glVertex2f(-0.59f,-0.66f);
glVertex2f(-0.6f,-0.65f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car whee2
glVertex2f(-0.5f,-0.65f);
glVertex2f(-.51f,-0.66f);
glVertex2f(-0.51f,-0.67f);
glVertex2f(-0.5f,-0.68f);
glVertex2f(-0.49f,-0.67f);
glVertex2f(-0.49f,-0.66f);
glVertex2f(-0.5f,-0.65f);
glEnd();




  // Car
    glBegin(GL_POLYGON);

glColor3ub(255, 102, 0);//car
glVertex2f(-0.65f,-0.62f);
glVertex2f(-.65f,-0.65f);
glVertex2f(-0.46f,-0.65f);
glVertex2f(-0.46f,-0.63f);
glVertex2f(-0.475f,-0.62f);

glEnd();


glBegin(GL_QUADS);//car hood

glColor3ub(0, 0, 0);

glVertex2f(-0.63f,-0.62f);
glVertex2f(-0.6f,-0.58f);
glVertex2f(-0.52f,-0.58f);
glVertex2f(-0.5f,-0.62f);
glEnd();

glLineWidth(2.5);
glBegin(GL_LINES);//car hood

glColor3ub(255,255,255);
glVertex2f(-0.57f,-0.58f);
glVertex2f(-0.57f,-0.62f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car wheel
glVertex2f(-0.6f,-0.65f);
glVertex2f(-.61f,-0.66f);
glVertex2f(-0.61f,-0.67f);
glVertex2f(-0.6f,-0.68f);
glVertex2f(-0.59f,-0.67f);
glVertex2f(-0.59f,-0.66f);
glVertex2f(-0.6f,-0.65f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car whee2
glVertex2f(-0.5f,-0.65f);
glVertex2f(-.51f,-0.66f);
glVertex2f(-0.51f,-0.67f);
glVertex2f(-0.5f,-0.68f);
glVertex2f(-0.49f,-0.67f);
glVertex2f(-0.49f,-0.66f);
glVertex2f(-0.5f,-0.65f);
glEnd();

glPopMatrix();



///////////////CAR bottom


glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
glBegin(GL_POLYGON);

glColor3ub(255, 102, 0);//car3
glVertex2f(0.95f,-0.87f);
glVertex2f(.95f,-0.9f);
glVertex2f(0.76f,-0.9f);
glVertex2f(0.76f,-0.88f);
glVertex2f(0.775f,-0.87f);

glEnd();


glBegin(GL_QUADS);//car hood

glColor3ub(0, 0, 0);

glVertex2f(0.93f,-0.87f);
glVertex2f(0.9f,-0.83f);
glVertex2f(0.82f,-0.83f);
glVertex2f(0.8f,-0.87f);
glEnd();

glLineWidth(2.5);
glBegin(GL_LINES);//car hood

glColor3ub(255,255,255);
glVertex2f(0.87f,-0.83f);
glVertex2f(0.87f,-0.87f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car wheel
glVertex2f(0.9f,-0.9f);
glVertex2f(.91f,-0.91f);
glVertex2f(0.91f,-0.92f);
glVertex2f(0.9f,-0.93f);
glVertex2f(0.89f,-0.92f);
glVertex2f(0.89f,-0.91f);
glVertex2f(0.9f,-0.9f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car whee2
glVertex2f(0.8f,-0.9f);
glVertex2f(.81f,-0.91f);
glVertex2f(0.81f,-0.92f);
glVertex2f(0.8f,-0.93f);
glVertex2f(0.79f,-0.92f);
glVertex2f(0.79f,-0.91f);
glVertex2f(0.8f,-0.9f);
glEnd();









glBegin(GL_POLYGON);

glColor3ub(153, 255, 51);//car4
glVertex2f(0.65f,-0.87f);
glVertex2f(.65f,-0.9f);
glVertex2f(0.46f,-0.9f);
glVertex2f(0.46f,-0.88f);
glVertex2f(0.475f,-0.87f);

glEnd();


glBegin(GL_QUADS);//car hood

glColor3ub(0, 0, 0);

glVertex2f(0.63f,-0.87f);
glVertex2f(0.6f,-0.83f);
glVertex2f(0.52f,-0.83f);
glVertex2f(0.5f,-0.87f);
glEnd();

glLineWidth(2.5);
glBegin(GL_LINES);//car hood

glColor3ub(255,255,255);
glVertex2f(0.57f,-0.83f);
glVertex2f(0.57f,-0.87f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car wheel
glVertex2f(0.6f,-0.9f);
glVertex2f(.61f,-0.91f);
glVertex2f(0.61f,-0.92f);
glVertex2f(0.6f,-0.93f);
glVertex2f(0.59f,-0.92f);
glVertex2f(0.59f,-0.91f);
glVertex2f(0.6f,-0.9f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car whee2
glVertex2f(0.5f,-0.9f);
glVertex2f(.51f,-0.91f);
glVertex2f(0.51f,-0.92f);
glVertex2f(0.5f,-0.93f);
glVertex2f(0.49f,-0.92f);
glVertex2f(0.49f,-0.91f);
glVertex2f(0.5f,-0.9f);
glEnd();







glBegin(GL_POLYGON);

glColor3ub(255, 0, 0);//car 5
glVertex2f(0.25f,-0.87f);
glVertex2f(.25f,-0.9f);
glVertex2f(0.06f,-0.9f);
glVertex2f(0.06f,-0.88f);
glVertex2f(0.075f,-0.87f);

glEnd();


glBegin(GL_QUADS);//car hood

glColor3ub(0, 0, 0);

glVertex2f(0.23f,-0.87f);
glVertex2f(0.2f,-0.83f);
glVertex2f(0.12f,-0.83f);
glVertex2f(0.1f,-0.87f);
glEnd();

glLineWidth(2.5);
glBegin(GL_LINES);//car hood

glColor3ub(255,255,255);
glVertex2f(0.17f,-0.83f);
glVertex2f(0.17f,-0.87f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car wheel
glVertex2f(0.2f,-0.9f);
glVertex2f(.21f,-0.91f);
glVertex2f(0.21f,-0.92f);
glVertex2f(0.2f,-0.93f);
glVertex2f(0.19f,-0.92f);
glVertex2f(0.19f,-0.91f);
glVertex2f(0.2f,-0.9f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car whee2
glVertex2f(0.1f,-0.9f);
glVertex2f(.11f,-0.91f);
glVertex2f(0.11f,-0.92f);
glVertex2f(0.1f,-0.93f);
glVertex2f(0.09f,-0.92f);
glVertex2f(0.09f,-0.91f);
glVertex2f(0.1f,-0.9f);
glEnd();

glPopMatrix();



 //#####BIRD#########



glTranslatef(-0.5,-0.4,0);

glScalef(0.4,0.4,0);

glPushMatrix();
glTranslatef(position5,position5, 0.0f);

x=-0.3f;y=0.3f;radius =.01f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(21, 23, 26);
glVertex2f(x, y); // center of circle
for(int j = 0; j<=triangleAmount;j++) {
glVertex2f(
x + (radius * cos(j * twicePi / triangleAmount)),
y + (radius * sin(j * twicePi / triangleAmount))
);
}
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(224, 107, 74);
glVertex2f(-0.3f,0.3f);
glVertex2f(-0.25f,0.4f);
glVertex2f(-0.3f,0.4f);

glColor3ub(224, 107, 74);
glVertex2f(-0.3f,0.3f);
glVertex2f(-0.2f,0.3f);
glVertex2f(-0.2f,0.35f);
glEnd();

x=-0.3f;y=0.15f;radius =.01f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(21, 23, 26);
glVertex2f(x, y); // center of circle
for(int j = 0; j<=triangleAmount;j++) {
glVertex2f(
x + (radius * cos(j * twicePi / triangleAmount)),
y + (radius * sin(j * twicePi / triangleAmount))
);
}
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(34, 133, 64);
glVertex2f(-0.3f,0.15f);
glVertex2f(-0.25f,0.25f);
glVertex2f(-0.3f,0.25f);

glColor3ub(34, 133, 64);
glVertex2f(-0.3f,0.15f);
glVertex2f(-0.2f,0.15f);
glVertex2f(-0.2f,0.2f);
glEnd();

x=-0.15f;y=0.2f;radius =.01f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(21, 23, 26);
glVertex2f(x, y); // center of circle
for(int j = 0; j<=triangleAmount;j++){

glVertex2f(
x + (radius * cos(j * twicePi / triangleAmount)),
y + (radius * sin(j * twicePi / triangleAmount))
);
}
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(34, 133, 64);
glVertex2f(-0.15f,0.2f);
glVertex2f(-0.05f,0.2f);
glVertex2f(-0.05f,0.25f);

glColor3f(34, 133, 64);
glVertex2f(-0.15f,0.2f);
glVertex2f(-0.1f,0.3f);
glVertex2f(-0.15f,0.3f);
glEnd();

glPopMatrix();
glLoadIdentity();




	glFlush();
}






//##################################################EVINING#######################################################################








void evening() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    //sky
    glBegin(GL_QUADS);
    glColor3ub(255, 133, 51);
    glVertex2f(-1.0f,1.0f);
    glVertex2f(-1.0f,0.4f);
    glVertex2f(1.0f,0.4f);
    glVertex2f(1.0f,1.0f);
    glEnd();

     //#########Plane############
glPushMatrix();
glTranslatef(position6,0.0f, 0.0f);
  glBegin(GL_POLYGON);
  glColor3ub(204, 204, 179);
glVertex2f(-.85f,0.78f);
glVertex2f(-.95f,0.78f);
glVertex2f(-1.0f,0.76f);
glVertex2f(-.95f,0.74f);
glVertex2f(-.82f,0.74f);
glVertex2f(-0.82f,0.76f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(255, 0, 0);
glVertex2f(-.95f,0.78f);
glVertex2f(-.935f,0.78f);
glVertex2f(-.95f,0.83f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 204);

glVertex2f(-.93f,0.745f);
glVertex2f(-.85f,0.69f);
glVertex2f(-.83f,0.67f);
glVertex2f(-.9f,0.745f);

glEnd();
glPopMatrix();


    //water
    glBegin(GL_QUADS);
    glColor3ub(134, 179, 227);
    glVertex2f(-1.0f,0.4f);
    glVertex2f(-1.0f,-1.0f);
    glVertex2f(1.f,-1.0f);
    glVertex2f(1.0f,0.4f);
glEnd();





//small boat

glPushMatrix();
glTranslatef(position4,0.0f, 0.0f);

glBegin(GL_QUADS);

glColor3ub(255,255,255);
glVertex2f(0.31f,0.36f);
glVertex2f(0.28f,0.33f);
glVertex2f(0.20f,0.33f);
glVertex2f(0.17f,0.36f);

glColor3ub(0,0,0);
glVertex2f(0.28f,0.38f);
glVertex2f(0.28f,0.36f);
glVertex2f(0.23f,0.36f);
glVertex2f(0.23f,0.38f);


glColor3ub(153, 102, 0);
glVertex2f(0.23f,0.375f);
glVertex2f(0.23f,0.36f);
glVertex2f(0.20f,0.36f);
glVertex2f(0.20f,0.375f);


glColor3ub(255,0,0);
glVertex2f(0.245f,0.38f);
glVertex2f(0.265f,0.38f);
glVertex2f(0.265f,0.39f);
glVertex2f(0.245f,0.39f);


glEnd();


glBegin(GL_QUADS);

glColor3ub(255,255,255);
glVertex2f(-0.51f,0.36f);
glVertex2f(-0.48f,0.33f);
glVertex2f(-0.40f,0.33f);
glVertex2f(-0.37f,0.36f);

glColor3ub(0,0,0);
glVertex2f(-0.48f,0.38f);
glVertex2f(-0.48f,0.36f);
glVertex2f(-0.43f,0.36f);
glVertex2f(-0.43f,0.38f);


glColor3ub(153, 102, 0);
glVertex2f(-0.43f,0.375f);
glVertex2f(-0.43f,0.36f);
glVertex2f(-0.40f,0.36f);
glVertex2f(-0.40f,0.375f);


glColor3ub(255,0,0);
glVertex2f(-0.445f,0.38f);
glVertex2f(-0.465f,0.38f);
glVertex2f(-0.465f,0.39f);
glVertex2f(-0.445f,0.39f);

glEnd();
glPopMatrix();


//sun
   GLfloat x=-0.885f;GLfloat y=0.49f;GLfloat radius =.09f;
   GLfloat twicePi = 2.0f * PI;
   int triangleAmount = 20;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 64, 0);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    //Greens
    glBegin(GL_POLYGON);
    glColor3ub(37, 128, 38);
    glVertex2f(-1.2f,0.4f);
    glVertex2f(-0.8f,0.45f);
    glVertex2f(-0.6f,0.4f);
    glVertex2f(-0.4f,0.45f);
    glVertex2f(-0.2f,0.4f);
    glVertex2f(0.0f,0.45f);
    glVertex2f(0.2f,0.4f);
    glVertex2f(0.4f,0.45f);
    glVertex2f(0.6f,0.4f);
    glVertex2f(0.8f,0.45f);
    glVertex2f(1.2f,0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(36, 125, 37);
    glVertex2f(0.6f,0.4f);
    glVertex2f(0.65f,0.45f);
    glVertex2f(0.75f,0.45f);
    glVertex2f(0.8f,0.48f);
    glVertex2f(0.9f,0.48f);
    glVertex2f(1.2f,0.4f);
    glEnd();




    //windMils
glTranslatef(1.05,0.42,0);
glScalef(0.35,0.35,0);
glBegin(GL_QUADS);
glColor3ub(140, 128, 98);

glVertex2f(-0.7f,0.5f);
glVertex2f(-0.75f,0.5f);
glVertex2f(-0.75f,0.1f);
glVertex2f(-0.7f,0.1f);
glEnd();

glPushMatrix();
glTranslatef(-0.725,0.5,0);
glRotatef(i,0,0.0,0.1);

glBegin(GL_TRIANGLES);

glColor3ub(250, 247, 247);
glVertex2f(0.0f, 0.0f);
glVertex2f( 0.2f, 0.1f);
glVertex2f( 0.1f, 0.2f);

glColor3ub(250, 247, 247);
glVertex2f(0.0f, 0.0f);
glVertex2f( -0.1f, 0.2f);
glVertex2f( -0.2f, 0.1f);

glColor3ub(1250, 247, 247);
glVertex2f(0.0f, 0.0f);
glVertex2f( -0.2f, -0.1f);
glVertex2f( -0.1f, -0.2f);

glColor3ub(250, 247, 247);
glVertex2f(0.0f, 0.0f);

glVertex2f( 0.1f, -0.2f);
glVertex2f( 0.2f, -0.1f);

glEnd();

glBegin(GL_LINES);
glColor3ub(20, 19, 19);
glVertex2f(0.0f, 0.0f);
glVertex2f( 0.15f, -0.15f);

glColor3ub(20, 19, 19);
glVertex2f(0.0f, 0.0f);
glVertex2f( -0.15f, -0.15f);

glColor3ub(20, 19, 19);
glVertex2f(0.0f, 0.0f);
glVertex2f( 0.15f, 0.15f);

glColor3ub(20, 19, 19);
glVertex2f(0.0f, 0.0f);
glVertex2f( -0.15f, 0.15f);

glEnd();

glPopMatrix();

i+=0.2f;

glLoadIdentity();

//tree
glTranslatef(1.4,0.4,0);
glScalef(0.5,0.5,0);

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2f(-0.85f,0.1f);
glVertex2f(-0.85f,0.25f);
glVertex2f(-0.9f,0.25f);
glVertex2f(-0.9f,0.1f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0,200,20);
glVertex2f(-0.85f,0.25f);
glVertex2f(-0.8f,0.3f);
glVertex2f(-0.85f,0.4f);
glVertex2f(-0.9f,0.4f);
glVertex2f(-0.95f,0.3f);
glVertex2f(-0.9f,0.25f);
glEnd();

glLoadIdentity();

//Houses
glTranslatef(1.0,0.41,0);
glScalef(0.4,0.4,0);
glBegin(GL_QUADS);
glColor3ub(148, 148, 10);
glVertex2f(-0.2f,0.1f);
glVertex2f(-0.2f,0.3f);
glVertex2f(-0.4f,0.3f);
glVertex2f(-0.4f,0.1f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(130, 3, 64);
glVertex2f(-0.2f,0.3f);
glVertex2f(-0.3f,0.45f);
glVertex2f(-0.4f,0.3f);
glEnd();

glLoadIdentity();

   glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(230, 184, 0);
    glVertex2f(-1.0f,0.4f);
    glVertex2f(1.0f,0.4f);
        glEnd();










        //############CLOUD##############




x=-0.67f; y=0.8f; radius =.05f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=-0.74f; y=0.78f; radius =.048f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);

glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=-0.72f; y=0.81f; radius =.04f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=-0.68f; y=0.78f; radius =.05f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))

);
}
glEnd();

glTranslatef(0.6,0.1,0);

x=-0.67f; y=0.6f; radius =.05f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=-0.74f; y=0.58f; radius =.048f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=-0.72f; y=0.61f; radius =.04f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=-0.68f; y=0.58f; radius =.05f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

glTranslatef(0.4,-0.2,0);

x=-0.67f; y=0.9f; radius =.05f;
glBegin(GL_TRIANGLE_FAN);

glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=-0.74f; y=0.88f; radius =.048f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=-0.72f; y=0.91f; radius =.04f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),

y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=-0.68f; y=0.88f; radius =.05f;
glBegin(GL_TRIANGLE_FAN);
glColor3f(1,1,1);
glVertex2f(x, y); // center of circle
for(int i = 0; i<= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();
glLoadIdentity();










//Grass
    glBegin(GL_QUADS);
    glColor3ub(0, 153,0);
    glVertex2f(-1.0, 0.0);
    glVertex2f(-1.0, -1.0);
    glVertex2f(1.0, -1.0);
    glVertex2f(1.0, 0.0);

    glColor3ub(230,184,0);
    glVertex2f(-1.0, 0.0);
    glVertex2f(-1.0, -0.04);
    glVertex2f(1.0, -0.04);
    glVertex2f(1.0, 0.0);
    glEnd();















       //House
    glBegin(GL_TRIANGLES);
    glColor3ub(204,153,0);
   glVertex2f(-1.0, -0.3);
    glVertex2f(-0.9, -0.3);
    glVertex2f(-0.95, -0.2);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,51,0);
    glVertex2f(-0.95, -0.2);
     glVertex2f(-0.9, -0.3);
   glVertex2f(-0.7, -0.3);
    glVertex2f(-0.73, -0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204,153,0);
    glVertex2f(-0.9, -0.3);
     glVertex2f(-0.9, -0.48);
   glVertex2f(-0.7, -0.48);
    glVertex2f(-0.7, -0.3);
    glEnd();



     glBegin(GL_QUADS);
    glColor3ub(255,255,102);
    glVertex2f(-0.99, -0.3);
     glVertex2f(-0.99, -0.48);
   glVertex2f(-0.9, -0.48);
    glVertex2f(-0.9, -0.3);
    glEnd();




glBegin(GL_QUADS);
    glColor3ub(51,51,0);
    glVertex2f(-0.82, -0.4);
     glVertex2f(-0.82, -0.48);
   glVertex2f(-0.78, -0.48);
    glVertex2f(-0.78, -0.4);
    glEnd();




    //House 2
    //House
    glBegin(GL_TRIANGLES);
    glColor3ub(204,153,0);
   glVertex2f(1.0, -0.3);
    glVertex2f(0.9, -0.3);
    glVertex2f(0.95, -0.2);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,51,0);
    glVertex2f(0.95, -0.2);
     glVertex2f(0.9, -0.3);
   glVertex2f(0.7, -0.3);
    glVertex2f(0.73, -0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204,153,0);
    glVertex2f(0.9, -0.3);
     glVertex2f(0.9, -0.48);
   glVertex2f(0.7, -0.48);
    glVertex2f(0.7, -0.3);
    glEnd();



     glBegin(GL_QUADS);
    glColor3ub(255,255,102);
    glVertex2f(0.99, -0.3);
     glVertex2f(0.99, -0.48);
   glVertex2f(0.9, -0.48);
    glVertex2f(0.9, -0.3);
    glEnd();




glBegin(GL_QUADS);
    glColor3ub(51,51,0);
    glVertex2f(0.82, -0.4);
     glVertex2f(0.82, -0.48);
   glVertex2f(0.78, -0.48);
    glVertex2f(0.78, -0.4);
    glEnd();







//Tree 1

glBegin(GL_QUADS);
    glColor3ub(230,172,0);
    glVertex2f(0.2, -0.28);
     glVertex2f(0.2, -0.48);
   glVertex2f(0.24, -0.48);
    glVertex2f(0.24, -0.28);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(26,255,26);
    glVertex2f(0.15, -0.28);
     glVertex2f(0.29, -0.28);
   glVertex2f(0.22, -0.2);


   glColor3ub(26,255,26);
    glVertex2f(0.15, -0.23);
     glVertex2f(0.29, -0.23);
   glVertex2f(0.22, -0.1);
    glEnd();







    //Tree 2

glBegin(GL_QUADS);
    glColor3ub(230,172,0);
    glVertex2f(-0.2, -0.28);
     glVertex2f(-0.2, -0.48);
   glVertex2f(-0.24, -0.48);
    glVertex2f(-0.24, -0.28);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(26,255,26);
    glVertex2f(-0.15, -0.28);
     glVertex2f(-0.29, -0.28);
   glVertex2f(-0.22, -0.2);


   glColor3ub(26,255,26);
    glVertex2f(-0.15, -0.23);
     glVertex2f(-0.29, -0.23);
   glVertex2f(-0.22, -0.1);
    glEnd();






       //Tree 3

glBegin(GL_QUADS);
    glColor3ub(230,172,0);
    glVertex2f(-0.5, -0.28);
     glVertex2f(-0.5, -0.48);
   glVertex2f(-0.54, -0.48);
    glVertex2f(-0.54, -0.28);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(26,255,26);
    glVertex2f(-0.45, -0.28);
     glVertex2f(-0.59, -0.28);
   glVertex2f(-0.52, -0.2);


   glColor3ub(26,255,26);
    glVertex2f(-0.45, -0.23);
     glVertex2f(-0.59, -0.23);
   glVertex2f(-0.52, -0.1);
    glEnd();





//Tree 4

glBegin(GL_QUADS);
    glColor3ub(230,172,0);
    glVertex2f(0.5, -0.28);
     glVertex2f(0.5, -0.48);
   glVertex2f(0.54, -0.48);
    glVertex2f(0.54, -0.28);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(26,255,26);
    glVertex2f(0.45, -0.28);
     glVertex2f(0.59, -0.28);
   glVertex2f(0.52, -0.2);


   glColor3ub(26,255,26);
    glVertex2f(0.45, -0.23);
     glVertex2f(0.59, -0.23);
   glVertex2f(0.52, -0.1);
    glEnd();














    //Road
glBegin(GL_QUADS);
    glColor3ub(25, 25, 25);
   glVertex2f(-1.0, -0.55);
    glVertex2f(-1.0, -0.94);
    glVertex2f(1.0, -0.94);
    glVertex2f(1.0, -0.55);


    //road middle border

   glColor3ub(245,245,239);
   glVertex2f(-1.0, -0.73);
    glVertex2f(-1.0, -0.77);
    glVertex2f(-0.85, -0.77);
    glVertex2f(-0.85, -0.73);

    glColor3ub(245,245,239);
   glVertex2f(-0.7, -0.73);
    glVertex2f(-0.7, -0.77);
    glVertex2f(-0.55, -0.77);
    glVertex2f(-0.55, -0.73);

     glColor3ub(245,245,239);
   glVertex2f(-0.4, -0.73);
    glVertex2f(-0.4, -0.77);
    glVertex2f(-0.25, -0.77);
    glVertex2f(-0.25, -0.73);

    glColor3ub(245,245,239);
   glVertex2f(-0.1, -0.73);
    glVertex2f(-0.1, -0.77);
    glVertex2f(0.05, -0.77);
    glVertex2f(0.05, -0.73);

        glColor3ub(245,245,239);
   glVertex2f(0.2, -0.73);
    glVertex2f(0.2, -0.77);
    glVertex2f(0.35, -0.77);
    glVertex2f(0.35, -0.73);

     glColor3ub(245,245,239);
   glVertex2f(0.5, -0.73);
    glVertex2f(0.5, -0.77);
    glVertex2f(0.65, -0.77);
    glVertex2f(0.65, -0.73);

    glColor3ub(245,245,239);
   glVertex2f(0.8, -0.73);
    glVertex2f(0.8, -0.77);
    glVertex2f(0.95, -0.77);
    glVertex2f(0.95, -0.73);
    glEnd();







    // Car
    glPushMatrix();
glTranslatef(position2,0.0f, 0.0f);
    glBegin(GL_POLYGON);

glColor3ub(255, 102, 0);//car
glVertex2f(-0.95f,-0.62f);
glVertex2f(-.95f,-0.65f);
glVertex2f(-0.76f,-0.65f);
glVertex2f(-0.76f,-0.63f);
glVertex2f(-0.775f,-0.62f);

glEnd();


glBegin(GL_QUADS);//car hood

glColor3ub(0, 0, 0);

glVertex2f(-0.93f,-0.62f);
glVertex2f(-0.9f,-0.58f);
glVertex2f(-0.82f,-0.58f);
glVertex2f(-0.8f,-0.62f);
glEnd();

glLineWidth(2.5);
glBegin(GL_LINES);//car hood

glColor3ub(255,255,255);
glVertex2f(-0.87f,-0.58f);
glVertex2f(-0.87f,-0.62f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car wheel
glVertex2f(-0.9f,-0.65f);
glVertex2f(-.91f,-0.66f);
glVertex2f(-0.91f,-0.67f);
glVertex2f(-0.9f,-0.68f);
glVertex2f(-0.89f,-0.67f);
glVertex2f(-0.89f,-0.66f);
glVertex2f(-0.9f,-0.65f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car whee2
glVertex2f(-0.8f,-0.65f);
glVertex2f(-.81f,-0.66f);
glVertex2f(-0.81f,-0.67f);
glVertex2f(-0.8f,-0.68f);
glVertex2f(-0.79f,-0.67f);
glVertex2f(-0.79f,-0.66f);
glVertex2f(-0.8f,-0.65f);
glEnd();




   // Car
    glBegin(GL_POLYGON);

glColor3ub(255, 102, 0);//car
glVertex2f(-0.65f,-0.62f);
glVertex2f(-.65f,-0.65f);
glVertex2f(-0.46f,-0.65f);
glVertex2f(-0.46f,-0.63f);
glVertex2f(-0.475f,-0.62f);

glEnd();


glBegin(GL_QUADS);//car hood

glColor3ub(0, 0, 0);

glVertex2f(-0.63f,-0.62f);
glVertex2f(-0.6f,-0.58f);
glVertex2f(-0.52f,-0.58f);
glVertex2f(-0.5f,-0.62f);
glEnd();

glLineWidth(2.5);
glBegin(GL_LINES);//car hood

glColor3ub(255,255,255);
glVertex2f(-0.57f,-0.58f);
glVertex2f(-0.57f,-0.62f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car wheel
glVertex2f(-0.6f,-0.65f);
glVertex2f(-.61f,-0.66f);
glVertex2f(-0.61f,-0.67f);
glVertex2f(-0.6f,-0.68f);
glVertex2f(-0.59f,-0.67f);
glVertex2f(-0.59f,-0.66f);
glVertex2f(-0.6f,-0.65f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car whee2
glVertex2f(-0.5f,-0.65f);
glVertex2f(-.51f,-0.66f);
glVertex2f(-0.51f,-0.67f);
glVertex2f(-0.5f,-0.68f);
glVertex2f(-0.49f,-0.67f);
glVertex2f(-0.49f,-0.66f);
glVertex2f(-0.5f,-0.65f);
glEnd();




  // Car
    glBegin(GL_POLYGON);

glColor3ub(255, 102, 0);//car
glVertex2f(-0.65f,-0.62f);
glVertex2f(-.65f,-0.65f);
glVertex2f(-0.46f,-0.65f);
glVertex2f(-0.46f,-0.63f);
glVertex2f(-0.475f,-0.62f);

glEnd();


glBegin(GL_QUADS);//car hood

glColor3ub(0, 0, 0);

glVertex2f(-0.63f,-0.62f);
glVertex2f(-0.6f,-0.58f);
glVertex2f(-0.52f,-0.58f);
glVertex2f(-0.5f,-0.62f);
glEnd();

glLineWidth(2.5);
glBegin(GL_LINES);//car hood

glColor3ub(255,255,255);
glVertex2f(-0.57f,-0.58f);
glVertex2f(-0.57f,-0.62f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car wheel
glVertex2f(-0.6f,-0.65f);
glVertex2f(-.61f,-0.66f);
glVertex2f(-0.61f,-0.67f);
glVertex2f(-0.6f,-0.68f);
glVertex2f(-0.59f,-0.67f);
glVertex2f(-0.59f,-0.66f);
glVertex2f(-0.6f,-0.65f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car whee2
glVertex2f(-0.5f,-0.65f);
glVertex2f(-.51f,-0.66f);
glVertex2f(-0.51f,-0.67f);
glVertex2f(-0.5f,-0.68f);
glVertex2f(-0.49f,-0.67f);
glVertex2f(-0.49f,-0.66f);
glVertex2f(-0.5f,-0.65f);
glEnd();

glPopMatrix();



///////////////CAR bottom


glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
glBegin(GL_POLYGON);

glColor3ub(255, 102, 0);//car3
glVertex2f(0.95f,-0.87f);
glVertex2f(.95f,-0.9f);
glVertex2f(0.76f,-0.9f);
glVertex2f(0.76f,-0.88f);
glVertex2f(0.775f,-0.87f);

glEnd();


glBegin(GL_QUADS);//car hood

glColor3ub(0, 0, 0);

glVertex2f(0.93f,-0.87f);
glVertex2f(0.9f,-0.83f);
glVertex2f(0.82f,-0.83f);
glVertex2f(0.8f,-0.87f);
glEnd();

glLineWidth(2.5);
glBegin(GL_LINES);//car hood

glColor3ub(255,255,255);
glVertex2f(0.87f,-0.83f);
glVertex2f(0.87f,-0.87f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car wheel
glVertex2f(0.9f,-0.9f);
glVertex2f(.91f,-0.91f);
glVertex2f(0.91f,-0.92f);
glVertex2f(0.9f,-0.93f);
glVertex2f(0.89f,-0.92f);
glVertex2f(0.89f,-0.91f);
glVertex2f(0.9f,-0.9f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car whee2
glVertex2f(0.8f,-0.9f);
glVertex2f(.81f,-0.91f);
glVertex2f(0.81f,-0.92f);
glVertex2f(0.8f,-0.93f);
glVertex2f(0.79f,-0.92f);
glVertex2f(0.79f,-0.91f);
glVertex2f(0.8f,-0.9f);
glEnd();









glBegin(GL_POLYGON);

glColor3ub(153, 255, 51);//car4
glVertex2f(0.65f,-0.87f);
glVertex2f(.65f,-0.9f);
glVertex2f(0.46f,-0.9f);
glVertex2f(0.46f,-0.88f);
glVertex2f(0.475f,-0.87f);

glEnd();


glBegin(GL_QUADS);//car hood

glColor3ub(0, 0, 0);

glVertex2f(0.63f,-0.87f);
glVertex2f(0.6f,-0.83f);
glVertex2f(0.52f,-0.83f);
glVertex2f(0.5f,-0.87f);
glEnd();

glLineWidth(2.5);
glBegin(GL_LINES);//car hood

glColor3ub(255,255,255);
glVertex2f(0.57f,-0.83f);
glVertex2f(0.57f,-0.87f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car wheel
glVertex2f(0.6f,-0.9f);
glVertex2f(.61f,-0.91f);
glVertex2f(0.61f,-0.92f);
glVertex2f(0.6f,-0.93f);
glVertex2f(0.59f,-0.92f);
glVertex2f(0.59f,-0.91f);
glVertex2f(0.6f,-0.9f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car whee2
glVertex2f(0.5f,-0.9f);
glVertex2f(.51f,-0.91f);
glVertex2f(0.51f,-0.92f);
glVertex2f(0.5f,-0.93f);
glVertex2f(0.49f,-0.92f);
glVertex2f(0.49f,-0.91f);
glVertex2f(0.5f,-0.9f);
glEnd();







glBegin(GL_POLYGON);

glColor3ub(255, 0, 0);//car 5
glVertex2f(0.25f,-0.87f);
glVertex2f(.25f,-0.9f);
glVertex2f(0.06f,-0.9f);
glVertex2f(0.06f,-0.88f);
glVertex2f(0.075f,-0.87f);

glEnd();


glBegin(GL_QUADS);//car hood

glColor3ub(0, 0, 0);

glVertex2f(0.23f,-0.87f);
glVertex2f(0.2f,-0.83f);
glVertex2f(0.12f,-0.83f);
glVertex2f(0.1f,-0.87f);
glEnd();

glLineWidth(2.5);
glBegin(GL_LINES);//car hood

glColor3ub(255,255,255);
glVertex2f(0.17f,-0.83f);
glVertex2f(0.17f,-0.87f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car wheel
glVertex2f(0.2f,-0.9f);
glVertex2f(.21f,-0.91f);
glVertex2f(0.21f,-0.92f);
glVertex2f(0.2f,-0.93f);
glVertex2f(0.19f,-0.92f);
glVertex2f(0.19f,-0.91f);
glVertex2f(0.2f,-0.9f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car whee2
glVertex2f(0.1f,-0.9f);
glVertex2f(.11f,-0.91f);
glVertex2f(0.11f,-0.92f);
glVertex2f(0.1f,-0.93f);
glVertex2f(0.09f,-0.92f);
glVertex2f(0.09f,-0.91f);
glVertex2f(0.1f,-0.9f);
glEnd();

glPopMatrix();









//BIRD

glTranslatef(-0.5,-0.4,0);

glScalef(0.4,0.4,0);

glPushMatrix();
glTranslatef(position5,position5, 0.0f);

x=-0.3f;y=0.3f;radius =.01f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(21, 23, 26);
glVertex2f(x, y); // center of circle
for(int j = 0; j<=triangleAmount;j++) {
glVertex2f(
x + (radius * cos(j * twicePi / triangleAmount)),
y + (radius * sin(j * twicePi / triangleAmount))
);
}
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(224, 107, 74);
glVertex2f(-0.3f,0.3f);
glVertex2f(-0.25f,0.4f);
glVertex2f(-0.3f,0.4f);

glColor3ub(224, 107, 74);
glVertex2f(-0.3f,0.3f);
glVertex2f(-0.2f,0.3f);
glVertex2f(-0.2f,0.35f);
glEnd();

x=-0.3f;y=0.15f;radius =.01f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(21, 23, 26);
glVertex2f(x, y); // center of circle
for(int j = 0; j<=triangleAmount;j++) {
glVertex2f(
x + (radius * cos(j * twicePi / triangleAmount)),
y + (radius * sin(j * twicePi / triangleAmount))
);
}
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(34, 133, 64);
glVertex2f(-0.3f,0.15f);
glVertex2f(-0.25f,0.25f);
glVertex2f(-0.3f,0.25f);

glColor3ub(34, 133, 64);
glVertex2f(-0.3f,0.15f);
glVertex2f(-0.2f,0.15f);
glVertex2f(-0.2f,0.2f);
glEnd();

x=-0.15f;y=0.2f;radius =.01f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(21, 23, 26);
glVertex2f(x, y); // center of circle
for(int j = 0; j<=triangleAmount;j++){

glVertex2f(
x + (radius * cos(j * twicePi / triangleAmount)),
y + (radius * sin(j * twicePi / triangleAmount))
);
}
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(34, 133, 64);
glVertex2f(-0.15f,0.2f);
glVertex2f(-0.05f,0.2f);
glVertex2f(-0.05f,0.25f);

glColor3f(34, 133, 64);
glVertex2f(-0.15f,0.2f);
glVertex2f(-0.1f,0.3f);
glVertex2f(-0.15f,0.3f);
glEnd();

glPopMatrix();
glLoadIdentity();



	glFlush();
}






//#######################################################################night##################################################################













void night() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);




 glEnable(GL_LIGHTING);//Enable Light Effect

  GLfloat global_ambient[] = {0.0,0.4,0.4, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);//A lighting model parameter.
    //sky
    glBegin(GL_QUADS);
    glColor3ub(31, 31, 20);
    glVertex2f(-1.0f,1.0f);
    glVertex2f(-1.0f,0.4f);
    glVertex2f(1.0f,0.4f);
    glVertex2f(1.0f,1.0f);
    glEnd();
glDisable(GL_LIGHTING);
glEnable(GL_LIGHTING);

 GLfloat global_ambient1[] = {0.0,0.0,0.6, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient1);//A lighting model parameter.

       //water
    glBegin(GL_QUADS);
    glColor3ub(0, 26, 51);
    glVertex2f(-1.0f,0.4f);
    glVertex2f(-1.0f,-1.0f);
    glVertex2f(1.f,-1.0f);
    glVertex2f(1.0f,0.4f);
glEnd();
glDisable(GL_LIGHTING);
    //star
    glPointSize(2);
    glBegin(GL_POINTS);
    glColor3ub(255,255,255);
    glVertex2f(0.88f,0.9f);
    glVertex2f(0.86f,0.86f);
    glVertex2f(0.9f,0.86f);
    glVertex2f(0.88f,.85f);
    glVertex2f(.9f,.8f);
    glVertex2f(0.58f,0.9f);
    glVertex2f(0.56f,0.85f);
    glVertex2f(0.6f,0.82f);
    glVertex2f(0.58f,.8f);
    glVertex2f(.6f,.84f);


    glVertex2f(0.38f,0.9f);
    glVertex2f(0.36f,0.86f);
    glVertex2f(0.4f,0.86f);
    glVertex2f(0.38f,.85f);
    glVertex2f(.4f,.8f);
    glVertex2f(0.18f,0.9f);
    glVertex2f(0.16f,0.85f);
    glVertex2f(0.2f,0.82f);
    glVertex2f(0.18f,.8f);
    glVertex2f(.2f,.84f);



     glVertex2f(-0.88f,0.9f);
    glVertex2f(-0.86f,0.86f);
    glVertex2f(-0.9f,0.86f);
    glVertex2f(-0.88f,.85f);
    glVertex2f(-.9f,.8f);
    glVertex2f(-0.58f,0.9f);
    glVertex2f(-0.56f,0.85f);
    glVertex2f(-0.6f,0.82f);
    glVertex2f(-0.58f,.8f);
    glVertex2f(-.6f,.84f);


    glVertex2f(-0.38f,0.9f);
    glVertex2f(-0.36f,0.86f);
    glVertex2f(-0.4f,0.86f);
    glVertex2f(-0.38f,.85f);
    glVertex2f(-.4f,.8f);
    glVertex2f(-0.18f,0.9f);
    glVertex2f(-0.16f,0.85f);
    glVertex2f(-0.2f,0.82f);
    glVertex2f(-0.18f,.8f);
    glVertex2f(-.2f,.84f);
    glEnd();



//333333333333333333333333333333333333333333333333333333333

glPointSize(2);
    glBegin(GL_POINTS);
    glColor3ub(179, 179, 179);
    glVertex2f(0.88f,0.3f);
    glVertex2f(0.86f,0.26f);
    glVertex2f(0.9f,0.26f);
    glVertex2f(0.88f,.25f);
    glVertex2f(.9f,.2f);
    glVertex2f(0.58f,0.3f);
    glVertex2f(0.56f,0.25f);
    glVertex2f(0.6f,0.22f);
    glVertex2f(0.58f,.2f);
    glVertex2f(.6f,.24f);


    glVertex2f(0.38f,0.3f);
    glVertex2f(0.36f,0.26f);
    glVertex2f(0.4f,0.26f);
    glVertex2f(0.38f,.25f);
    glVertex2f(.4f,.2f);
    glVertex2f(0.18f,0.3f);
    glVertex2f(0.16f,0.25f);
    glVertex2f(0.2f,0.22f);
    glVertex2f(0.18f,.2f);
    glVertex2f(.2f,.24f);



     glVertex2f(-0.88f,0.3f);
    glVertex2f(-0.86f,0.26f);
    glVertex2f(-0.9f,0.26f);
    glVertex2f(-0.88f,.25f);
    glVertex2f(-.9f,.2f);
    glVertex2f(-0.58f,0.3f);
    glVertex2f(-0.56f,0.25f);
    glVertex2f(-0.6f,0.22f);
    glVertex2f(-0.58f,.2f);
    glVertex2f(-.6f,.24f);


    glVertex2f(-0.38f,0.3f);
    glVertex2f(-0.36f,0.26f);
    glVertex2f(-0.4f,0.26f);
    glVertex2f(-0.38f,.25f);
    glVertex2f(-.4f,.2f);
    glVertex2f(-0.18f,0.3f);
    glVertex2f(-0.16f,0.25f);
    glVertex2f(-0.2f,0.22f);
    glVertex2f(-0.18f,.2f);
    glVertex2f(-.2f,.24f);
    glEnd();
    //moon
   GLfloat x=-0.87f;GLfloat y=0.89f;GLfloat radius =.08f;
   GLfloat twicePi = 2.0f * PI;
   int triangleAmount = 20;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


 x=-0.87f; y=0.28f; radius =.085f;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(179, 179, 179);
glVertex2f(x, y); // center of circle
for(int i = 0; i <= triangleAmount;i++) {
glVertex2f(
x + (radius * cos(i * twicePi / triangleAmount)),
y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();




//boat
glPushMatrix();
glTranslatef(position3,0.0f, 0.0f);
glBegin(GL_QUADS);// left most

glColor3ub(255,255,255);
glVertex2f(-0.96f,0.20f);
glVertex2f(-0.93f,0.14f);
glVertex2f(-0.77f,0.14f);
glVertex2f(-0.74f,0.20f);

glColor3ub(0,0,0);
glVertex2f(-0.93f,0.25f);
glVertex2f(-0.93f,0.20f);
glVertex2f(-0.8f,0.20f);
glVertex2f(-0.8f,0.25f);


glColor3ub(102, 51, 0);
glVertex2f(-0.8f,0.225f);
glVertex2f(-0.8f,0.20f);
glVertex2f(-0.77f,0.20f);
glVertex2f(-0.77f,0.225f);


glColor3ub(255,0,0);
glVertex2f(-0.91f,0.25f);
glVertex2f(-0.83f,0.25f);
glVertex2f(-0.83f,0.265f);
glVertex2f(-0.91f,0.265f);//boat 1 complete
glEnd();


glBegin(GL_QUADS);//boat 2

glColor3ub(255,255,255);
glVertex2f(-0.36f,0.20f);
glVertex2f(-0.33f,0.14f);
glVertex2f(-0.17f,0.14f);
glVertex2f(-0.14f,0.20f);

glColor3ub(89, 89, 89);
glVertex2f(-0.33f,0.25f);
glVertex2f(-0.33f,0.20f);
glVertex2f(-0.2f,0.20f);
glVertex2f(-0.2f,0.25f);


glColor3ub(153, 102, 0);
glVertex2f(-0.2f,0.225f);
glVertex2f(-0.2f,0.20f);
glVertex2f(-0.17f,0.20f);
glVertex2f(-0.17f,0.225f);


glColor3ub(255,0,0);
glVertex2f(-0.31f,0.25f);
glVertex2f(-0.23f,0.25f);
glVertex2f(-0.23f,0.265f);
glVertex2f(-0.31f,0.265f);//boat 2 end

glEnd();
glPopMatrix();


    //Greens
    glBegin(GL_POLYGON);
    glColor3ub(37, 128, 38);
    glVertex2f(-1.2f,0.4f);
    glVertex2f(-0.8f,0.45f);
    glVertex2f(-0.6f,0.4f);
    glVertex2f(-0.4f,0.45f);
    glVertex2f(-0.2f,0.4f);
    glVertex2f(0.0f,0.45f);
    glVertex2f(0.2f,0.4f);
    glVertex2f(0.4f,0.45f);
    glVertex2f(0.6f,0.4f);
    glVertex2f(0.8f,0.45f);
    glVertex2f(1.2f,0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(36, 125, 37);
    glVertex2f(0.6f,0.4f);
    glVertex2f(0.65f,0.45f);
    glVertex2f(0.75f,0.45f);
    glVertex2f(0.8f,0.48f);
    glVertex2f(0.9f,0.48f);
    glVertex2f(1.2f,0.4f);
    glEnd();



    //windMils
glTranslatef(1.05,0.42,0);
glScalef(0.35,0.35,0);
glBegin(GL_QUADS);
glColor3ub(140, 128, 98);

glVertex2f(-0.7f,0.5f);
glVertex2f(-0.75f,0.5f);
glVertex2f(-0.75f,0.1f);
glVertex2f(-0.7f,0.1f);
glEnd();

glPushMatrix();
glTranslatef(-0.725,0.5,0);
glRotatef(i,0,0.0,0.1);

glBegin(GL_TRIANGLES);

glColor3ub(250, 247, 247);
glVertex2f(0.0f, 0.0f);
glVertex2f( 0.2f, 0.1f);
glVertex2f( 0.1f, 0.2f);

glColor3ub(250, 247, 247);
glVertex2f(0.0f, 0.0f);
glVertex2f( -0.1f, 0.2f);
glVertex2f( -0.2f, 0.1f);

glColor3ub(1250, 247, 247);
glVertex2f(0.0f, 0.0f);
glVertex2f( -0.2f, -0.1f);
glVertex2f( -0.1f, -0.2f);

glColor3ub(250, 247, 247);
glVertex2f(0.0f, 0.0f);

glVertex2f( 0.1f, -0.2f);
glVertex2f( 0.2f, -0.1f);

glEnd();

glBegin(GL_LINES);
glColor3ub(20, 19, 19);
glVertex2f(0.0f, 0.0f);
glVertex2f( 0.15f, -0.15f);

glColor3ub(20, 19, 19);
glVertex2f(0.0f, 0.0f);
glVertex2f( -0.15f, -0.15f);

glColor3ub(20, 19, 19);
glVertex2f(0.0f, 0.0f);
glVertex2f( 0.15f, 0.15f);

glColor3ub(20, 19, 19);
glVertex2f(0.0f, 0.0f);
glVertex2f( -0.15f, 0.15f);

glEnd();

glPopMatrix();

i+=0.2f;

glLoadIdentity();

//tree
glTranslatef(1.4,0.4,0);
glScalef(0.5,0.5,0);

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2f(-0.85f,0.1f);
glVertex2f(-0.85f,0.25f);
glVertex2f(-0.9f,0.25f);
glVertex2f(-0.9f,0.1f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0,200,20);
glVertex2f(-0.85f,0.25f);
glVertex2f(-0.8f,0.3f);
glVertex2f(-0.85f,0.4f);
glVertex2f(-0.9f,0.4f);
glVertex2f(-0.95f,0.3f);
glVertex2f(-0.9f,0.25f);
glEnd();

glLoadIdentity();

//Houses
glTranslatef(1.0,0.41,0);
glScalef(0.4,0.4,0);
glBegin(GL_QUADS);
glColor3ub(148, 148, 10);
glVertex2f(-0.2f,0.1f);
glVertex2f(-0.2f,0.3f);
glVertex2f(-0.4f,0.3f);
glVertex2f(-0.4f,0.1f);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(130, 3, 64);
glVertex2f(-0.2f,0.3f);
glVertex2f(-0.3f,0.45f);
glVertex2f(-0.4f,0.3f);
glEnd();

glLoadIdentity();


glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(230, 184, 0);
    glVertex2f(-1.0f,0.4f);
    glVertex2f(1.0f,0.4f);
        glEnd();



        //Grass
    glBegin(GL_QUADS);
    glColor3ub(0, 153,0);
    glVertex2f(-1.0, 0.0);
    glVertex2f(-1.0, -1.0);
    glVertex2f(1.0, -1.0);
    glVertex2f(1.0, 0.0);

    glColor3ub(230,184,0);
    glVertex2f(-1.0, 0.0);
    glVertex2f(-1.0, -0.04);
    glVertex2f(1.0, -0.04);
    glVertex2f(1.0, 0.0);
    glEnd();


    //House
    glBegin(GL_TRIANGLES);
    glColor3ub(204,153,0);
   glVertex2f(-1.0, -0.3);
    glVertex2f(-0.9, -0.3);
    glVertex2f(-0.95, -0.2);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,51,0);
    glVertex2f(-0.95, -0.2);
     glVertex2f(-0.9, -0.3);
   glVertex2f(-0.7, -0.3);
    glVertex2f(-0.73, -0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204,153,0);
    glVertex2f(-0.9, -0.3);
     glVertex2f(-0.9, -0.48);
   glVertex2f(-0.7, -0.48);
    glVertex2f(-0.7, -0.3);
    glEnd();



     glBegin(GL_QUADS);
    glColor3ub(255,255,102);
    glVertex2f(-0.99, -0.3);
     glVertex2f(-0.99, -0.48);
   glVertex2f(-0.9, -0.48);
    glVertex2f(-0.9, -0.3);
    glEnd();




glBegin(GL_QUADS);
    glColor3ub(51,51,0);
    glVertex2f(-0.82, -0.4);
     glVertex2f(-0.82, -0.48);
   glVertex2f(-0.78, -0.48);
    glVertex2f(-0.78, -0.4);
    glEnd();




    //House 2
    //House
    glBegin(GL_TRIANGLES);
    glColor3ub(204,153,0);
   glVertex2f(1.0, -0.3);
    glVertex2f(0.9, -0.3);
    glVertex2f(0.95, -0.2);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,51,0);
    glVertex2f(0.95, -0.2);
     glVertex2f(0.9, -0.3);
   glVertex2f(0.7, -0.3);
    glVertex2f(0.73, -0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204,153,0);
    glVertex2f(0.9, -0.3);
     glVertex2f(0.9, -0.48);
   glVertex2f(0.7, -0.48);
    glVertex2f(0.7, -0.3);
    glEnd();



     glBegin(GL_QUADS);
    glColor3ub(255,255,102);
    glVertex2f(0.99, -0.3);
     glVertex2f(0.99, -0.48);
   glVertex2f(0.9, -0.48);
    glVertex2f(0.9, -0.3);
    glEnd();




glBegin(GL_QUADS);
    glColor3ub(51,51,0);
    glVertex2f(0.82, -0.4);
     glVertex2f(0.82, -0.48);
   glVertex2f(0.78, -0.48);
    glVertex2f(0.78, -0.4);
    glEnd();







//Tree 1

glBegin(GL_QUADS);
    glColor3ub(230,172,0);
    glVertex2f(0.2, -0.28);
     glVertex2f(0.2, -0.48);
   glVertex2f(0.24, -0.48);
    glVertex2f(0.24, -0.28);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(26,255,26);
    glVertex2f(0.15, -0.28);
     glVertex2f(0.29, -0.28);
   glVertex2f(0.22, -0.2);


   glColor3ub(26,255,26);
    glVertex2f(0.15, -0.23);
     glVertex2f(0.29, -0.23);
   glVertex2f(0.22, -0.1);
    glEnd();







    //Tree 2

glBegin(GL_QUADS);
    glColor3ub(230,172,0);
    glVertex2f(-0.2, -0.28);
     glVertex2f(-0.2, -0.48);
   glVertex2f(-0.24, -0.48);
    glVertex2f(-0.24, -0.28);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(26,255,26);
    glVertex2f(-0.15, -0.28);
     glVertex2f(-0.29, -0.28);
   glVertex2f(-0.22, -0.2);


   glColor3ub(26,255,26);
    glVertex2f(-0.15, -0.23);
     glVertex2f(-0.29, -0.23);
   glVertex2f(-0.22, -0.1);
    glEnd();






       //Tree 3

glBegin(GL_QUADS);
    glColor3ub(230,172,0);
    glVertex2f(-0.5, -0.28);
     glVertex2f(-0.5, -0.48);
   glVertex2f(-0.54, -0.48);
    glVertex2f(-0.54, -0.28);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(26,255,26);
    glVertex2f(-0.45, -0.28);
     glVertex2f(-0.59, -0.28);
   glVertex2f(-0.52, -0.2);


   glColor3ub(26,255,26);
    glVertex2f(-0.45, -0.23);
     glVertex2f(-0.59, -0.23);
   glVertex2f(-0.52, -0.1);
    glEnd();





//Tree 4

glBegin(GL_QUADS);
    glColor3ub(230,172,0);
    glVertex2f(0.5, -0.28);
     glVertex2f(0.5, -0.48);
   glVertex2f(0.54, -0.48);
    glVertex2f(0.54, -0.28);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(26,255,26);
    glVertex2f(0.45, -0.28);
     glVertex2f(0.59, -0.28);
   glVertex2f(0.52, -0.2);


   glColor3ub(26,255,26);
    glVertex2f(0.45, -0.23);
     glVertex2f(0.59, -0.23);
   glVertex2f(0.52, -0.1);
    glEnd();









    //Road
glBegin(GL_QUADS);
    glColor3ub(25, 25, 25);
   glVertex2f(-1.0, -0.55);
    glVertex2f(-1.0, -0.94);
    glVertex2f(1.0, -0.94);
    glVertex2f(1.0, -0.55);


    //road middle border

   glColor3ub(245,245,239);
   glVertex2f(-1.0, -0.73);
    glVertex2f(-1.0, -0.77);
    glVertex2f(-0.85, -0.77);
    glVertex2f(-0.85, -0.73);

    glColor3ub(245,245,239);
   glVertex2f(-0.7, -0.73);
    glVertex2f(-0.7, -0.77);
    glVertex2f(-0.55, -0.77);
    glVertex2f(-0.55, -0.73);

     glColor3ub(245,245,239);
   glVertex2f(-0.4, -0.73);
    glVertex2f(-0.4, -0.77);
    glVertex2f(-0.25, -0.77);
    glVertex2f(-0.25, -0.73);

    glColor3ub(245,245,239);
   glVertex2f(-0.1, -0.73);
    glVertex2f(-0.1, -0.77);
    glVertex2f(0.05, -0.77);
    glVertex2f(0.05, -0.73);

        glColor3ub(245,245,239);
   glVertex2f(0.2, -0.73);
    glVertex2f(0.2, -0.77);
    glVertex2f(0.35, -0.77);
    glVertex2f(0.35, -0.73);

     glColor3ub(245,245,239);
   glVertex2f(0.5, -0.73);
    glVertex2f(0.5, -0.77);
    glVertex2f(0.65, -0.77);
    glVertex2f(0.65, -0.73);

    glColor3ub(245,245,239);
   glVertex2f(0.8, -0.73);
    glVertex2f(0.8, -0.77);
    glVertex2f(0.95, -0.77);
    glVertex2f(0.95, -0.73);
    glEnd();







    // Car
    glPushMatrix();
glTranslatef(position2,0.0f, 0.0f);
    glBegin(GL_POLYGON);

glColor3ub(255, 102, 0);//car
glVertex2f(-0.95f,-0.62f);
glVertex2f(-.95f,-0.65f);
glVertex2f(-0.76f,-0.65f);
glVertex2f(-0.76f,-0.63f);
glVertex2f(-0.775f,-0.62f);

glEnd();


glBegin(GL_QUADS);//car hood

glColor3ub(0, 0, 0);

glVertex2f(-0.93f,-0.62f);
glVertex2f(-0.9f,-0.58f);
glVertex2f(-0.82f,-0.58f);
glVertex2f(-0.8f,-0.62f);
glEnd();

glLineWidth(2.5);
glBegin(GL_LINES);//car hood

glColor3ub(255,255,255);
glVertex2f(-0.87f,-0.58f);
glVertex2f(-0.87f,-0.62f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car wheel
glVertex2f(-0.9f,-0.65f);
glVertex2f(-.91f,-0.66f);
glVertex2f(-0.91f,-0.67f);
glVertex2f(-0.9f,-0.68f);
glVertex2f(-0.89f,-0.67f);
glVertex2f(-0.89f,-0.66f);
glVertex2f(-0.9f,-0.65f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car whee2
glVertex2f(-0.8f,-0.65f);
glVertex2f(-.81f,-0.66f);
glVertex2f(-0.81f,-0.67f);
glVertex2f(-0.8f,-0.68f);
glVertex2f(-0.79f,-0.67f);
glVertex2f(-0.79f,-0.66f);
glVertex2f(-0.8f,-0.65f);
glEnd();




   // Car
    glBegin(GL_POLYGON);

glColor3ub(255, 102, 0);//car
glVertex2f(-0.65f,-0.62f);
glVertex2f(-.65f,-0.65f);
glVertex2f(-0.46f,-0.65f);
glVertex2f(-0.46f,-0.63f);
glVertex2f(-0.475f,-0.62f);

glEnd();


glBegin(GL_QUADS);//car hood

glColor3ub(0, 0, 0);

glVertex2f(-0.63f,-0.62f);
glVertex2f(-0.6f,-0.58f);
glVertex2f(-0.52f,-0.58f);
glVertex2f(-0.5f,-0.62f);
glEnd();

glLineWidth(2.5);
glBegin(GL_LINES);//car hood

glColor3ub(255,255,255);
glVertex2f(-0.57f,-0.58f);
glVertex2f(-0.57f,-0.62f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car wheel
glVertex2f(-0.6f,-0.65f);
glVertex2f(-.61f,-0.66f);
glVertex2f(-0.61f,-0.67f);
glVertex2f(-0.6f,-0.68f);
glVertex2f(-0.59f,-0.67f);
glVertex2f(-0.59f,-0.66f);
glVertex2f(-0.6f,-0.65f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car whee2
glVertex2f(-0.5f,-0.65f);
glVertex2f(-.51f,-0.66f);
glVertex2f(-0.51f,-0.67f);
glVertex2f(-0.5f,-0.68f);
glVertex2f(-0.49f,-0.67f);
glVertex2f(-0.49f,-0.66f);
glVertex2f(-0.5f,-0.65f);
glEnd();




  // Car
    glBegin(GL_POLYGON);

glColor3ub(255, 102, 0);//car
glVertex2f(-0.65f,-0.62f);
glVertex2f(-.65f,-0.65f);
glVertex2f(-0.46f,-0.65f);
glVertex2f(-0.46f,-0.63f);
glVertex2f(-0.475f,-0.62f);

glEnd();


glBegin(GL_QUADS);//car hood

glColor3ub(0, 0, 0);

glVertex2f(-0.63f,-0.62f);
glVertex2f(-0.6f,-0.58f);
glVertex2f(-0.52f,-0.58f);
glVertex2f(-0.5f,-0.62f);
glEnd();

glLineWidth(2.5);
glBegin(GL_LINES);//car hood

glColor3ub(255,255,255);
glVertex2f(-0.57f,-0.58f);
glVertex2f(-0.57f,-0.62f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car wheel
glVertex2f(-0.6f,-0.65f);
glVertex2f(-.61f,-0.66f);
glVertex2f(-0.61f,-0.67f);
glVertex2f(-0.6f,-0.68f);
glVertex2f(-0.59f,-0.67f);
glVertex2f(-0.59f,-0.66f);
glVertex2f(-0.6f,-0.65f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car whee2
glVertex2f(-0.5f,-0.65f);
glVertex2f(-.51f,-0.66f);
glVertex2f(-0.51f,-0.67f);
glVertex2f(-0.5f,-0.68f);
glVertex2f(-0.49f,-0.67f);
glVertex2f(-0.49f,-0.66f);
glVertex2f(-0.5f,-0.65f);
glEnd();

glPopMatrix();



///////////////CAR bottom


glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
glBegin(GL_POLYGON);

glColor3ub(255, 102, 0);//car3
glVertex2f(0.95f,-0.87f);
glVertex2f(.95f,-0.9f);
glVertex2f(0.76f,-0.9f);
glVertex2f(0.76f,-0.88f);
glVertex2f(0.775f,-0.87f);

glEnd();


glBegin(GL_QUADS);//car hood

glColor3ub(0, 0, 0);

glVertex2f(0.93f,-0.87f);
glVertex2f(0.9f,-0.83f);
glVertex2f(0.82f,-0.83f);
glVertex2f(0.8f,-0.87f);
glEnd();

glLineWidth(2.5);
glBegin(GL_LINES);//car hood

glColor3ub(255,255,255);
glVertex2f(0.87f,-0.83f);
glVertex2f(0.87f,-0.87f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car wheel
glVertex2f(0.9f,-0.9f);
glVertex2f(.91f,-0.91f);
glVertex2f(0.91f,-0.92f);
glVertex2f(0.9f,-0.93f);
glVertex2f(0.89f,-0.92f);
glVertex2f(0.89f,-0.91f);
glVertex2f(0.9f,-0.9f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car whee2
glVertex2f(0.8f,-0.9f);
glVertex2f(.81f,-0.91f);
glVertex2f(0.81f,-0.92f);
glVertex2f(0.8f,-0.93f);
glVertex2f(0.79f,-0.92f);
glVertex2f(0.79f,-0.91f);
glVertex2f(0.8f,-0.9f);
glEnd();









glBegin(GL_POLYGON);

glColor3ub(153, 255, 51);//car4
glVertex2f(0.65f,-0.87f);
glVertex2f(.65f,-0.9f);
glVertex2f(0.46f,-0.9f);
glVertex2f(0.46f,-0.88f);
glVertex2f(0.475f,-0.87f);

glEnd();


glBegin(GL_QUADS);//car hood

glColor3ub(0, 0, 0);

glVertex2f(0.63f,-0.87f);
glVertex2f(0.6f,-0.83f);
glVertex2f(0.52f,-0.83f);
glVertex2f(0.5f,-0.87f);
glEnd();

glLineWidth(2.5);
glBegin(GL_LINES);//car hood

glColor3ub(255,255,255);
glVertex2f(0.57f,-0.83f);
glVertex2f(0.57f,-0.87f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car wheel
glVertex2f(0.6f,-0.9f);
glVertex2f(.61f,-0.91f);
glVertex2f(0.61f,-0.92f);
glVertex2f(0.6f,-0.93f);
glVertex2f(0.59f,-0.92f);
glVertex2f(0.59f,-0.91f);
glVertex2f(0.6f,-0.9f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car whee2
glVertex2f(0.5f,-0.9f);
glVertex2f(.51f,-0.91f);
glVertex2f(0.51f,-0.92f);
glVertex2f(0.5f,-0.93f);
glVertex2f(0.49f,-0.92f);
glVertex2f(0.49f,-0.91f);
glVertex2f(0.5f,-0.9f);
glEnd();







glBegin(GL_POLYGON);

glColor3ub(255, 0, 0);//car 5
glVertex2f(0.25f,-0.87f);
glVertex2f(.25f,-0.9f);
glVertex2f(0.06f,-0.9f);
glVertex2f(0.06f,-0.88f);
glVertex2f(0.075f,-0.87f);

glEnd();


glBegin(GL_QUADS);//car hood

glColor3ub(0, 0, 0);

glVertex2f(0.23f,-0.87f);
glVertex2f(0.2f,-0.83f);
glVertex2f(0.12f,-0.83f);
glVertex2f(0.1f,-0.87f);
glEnd();

glLineWidth(2.5);
glBegin(GL_LINES);//car hood

glColor3ub(255,255,255);
glVertex2f(0.17f,-0.83f);
glVertex2f(0.17f,-0.87f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car wheel
glVertex2f(0.2f,-0.9f);
glVertex2f(.21f,-0.91f);
glVertex2f(0.21f,-0.92f);
glVertex2f(0.2f,-0.93f);
glVertex2f(0.19f,-0.92f);
glVertex2f(0.19f,-0.91f);
glVertex2f(0.2f,-0.9f);
glEnd();


glBegin(GL_POLYGON);

glColor3ub(255,255,255);//car whee2
glVertex2f(0.1f,-0.9f);
glVertex2f(.11f,-0.91f);
glVertex2f(0.11f,-0.92f);
glVertex2f(0.1f,-0.93f);
glVertex2f(0.09f,-0.92f);
glVertex2f(0.09f,-0.91f);
glVertex2f(0.1f,-0.9f);
glEnd();

glPopMatrix();






	glFlush();
}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'm':
   glutDisplayFunc(morning);
   sound();
   glutPostRedisplay();

    break;
case 'd':
   glutDisplayFunc(day);
   sound();
glutPostRedisplay();
    break;


    break;
    case 'e':
   glutDisplayFunc(evening);
   sound();
glutPostRedisplay();
    break;
case 'n':
   glutDisplayFunc(night);
   sound();
glutPostRedisplay();
    break;
    /*
    case 'p':
    speed=0.0;
    speed2=0.0;
glutPostRedisplay();
    break;
    case 's':
    speed=0.03;
    speed2=0.03;
glutPostRedisplay();
    break;
    case 'f':
    speed=0.06;
    speed2=0.06;
glutPostRedisplay();
    break;
    */


	}
}






void SpecialInput(int key, int x, int y)
{
switch(key)
{case GLUT_KEY_UP:
speed=0.03f;
speed2=0.03;
sound();
break;
case GLUT_KEY_DOWN:
speed=0.0f;
speed2=0.0f;
mute();
break;
case GLUT_KEY_LEFT:

break;
case GLUT_KEY_RIGHT:
speed2=0.08f;
speed=0.08f;
sound();
break;
break;}
glutPostRedisplay();
}






int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(320, 320);
	glutCreateWindow("Test");
	glutDisplayFunc(morning);
	sound();
	glutIdleFunc(Idle);

   glutTimerFunc(200, update, 0);
glutTimerFunc(200, update2, 0);
glutTimerFunc(200, update3, 0);
glutTimerFunc(200, update4, 0);
glutTimerFunc(200, update5, 0);
glutTimerFunc(200, update6, 0);
glutTimerFunc(200, update7, 0);
glutTimerFunc(200, update8, 0);
  glutKeyboardFunc(handleKeypress);
  glutSpecialFunc(SpecialInput);
  //int iGL();
	glutMainLoop();
	return 0;
}

