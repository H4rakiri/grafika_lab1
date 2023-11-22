#include "Render.h"

#include <Windows.h>
#include <GL\GL.h>
#include <GL\GLU.h>

void Render(double delta_time)
{    
	double V0[] = {0, 0, 0};
	double V1[] = {2, -4, 0};
	double V2[] = {8, -1, 0};
	double V3[] = {11, -4, 0}; 
	double V4[] = {9, 0, 0};
	double V5[] = {14, 4, 0};
	double V6[] = {8, 2, 0};
	double V7[] = {4, 6, 0};

	double V00[] = { 0, 0, 3 };
	double V11[] = { 2, -4, 3 };
	double V22[] = { 8, -1, 3 };
	double V33[] = { 11, -4, 3 };
	double V44[] = { 9, 0, 3 };
	double V55[] = { 14, 4, 3 };
	double V66[] = { 8, 2, 3 };
	double V77[] = { 4, 6, 3 };

	glBegin(GL_POLYGON);
	glColor3d(1, 0, 0);
	glVertex3dv(V0); //v0

	glVertex3dv(V1); //v1

	glVertex3dv(V2); //v2
	
	glVertex3dv(V6); //v6

	glVertex3dv(V7); //v7
	glEnd();
	glBegin(GL_TRIANGLES);
	glVertex3dv(V2); 

	glVertex3dv(V3); 
	
	glVertex3dv(V6); 
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex3dv(V4);

	glVertex3dv(V5);

	glVertex3dv(V6);
	glEnd();
	
	
	glBegin(GL_QUADS);
	glColor3d(0, 1, 1);
	glVertex3dv(V0);
	glVertex3dv(V00);
	glVertex3dv(V11);
	glVertex3dv(V1);
	glEnd();
	
	glBegin(GL_QUADS);
	glVertex3dv(V1);
	glVertex3dv(V11);
	glVertex3dv(V22);
	glVertex3dv(V2);
	glEnd();
	
	glBegin(GL_QUADS);
	glVertex3dv(V2);
	glVertex3dv(V22);
	glVertex3dv(V33);
	glVertex3dv(V3);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3dv(V3);
	glVertex3dv(V33);
	glVertex3dv(V44);
	glVertex3dv(V4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3dv(V4);
	glVertex3dv(V44);
	glVertex3dv(V55);
	glVertex3dv(V5);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3dv(V5);
	glVertex3dv(V55);
	glVertex3dv(V66);
	glVertex3dv(V6);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3dv(V6);
	glVertex3dv(V66);
	glVertex3dv(V77);
	glVertex3dv(V7);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3dv(V7);
	glVertex3dv(V77);
	glVertex3dv(V00);
	glVertex3dv(V0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3d(0, 1, 0);
	glVertex3dv(V00);
	glVertex3dv(V11);
	glVertex3dv(V22);
	glVertex3dv(V66);
	glVertex3dv(V77);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex3dv(V22);
	glVertex3dv(V33);
	glVertex3dv(V66);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex3dv(V44);
	glVertex3dv(V55);
	glVertex3dv(V66);
	glEnd();
}   

