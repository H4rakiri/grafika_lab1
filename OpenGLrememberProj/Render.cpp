#include "Render.h"

#include <Windows.h>
#include <GL\GL.h>
#include <GL\GLU.h>

void Render(double delta_time)
{    
	glBegin(GL_TRIANGLES);
	glColor3d(0, 1, 0);
	glVertex3d(0, 0, 0);
	glVertex3d(2, -4, 0);
	glVertex3d(3, -4, -3);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3d(0, 0, 0);
	glVertex3d(2, -4, 0);
	glVertex3d(8, -1, 0);
	
	glVertex3d(8, -1, 0);
	glVertex3d(11, -4, 0);

	glVertex3d(11, -4, 0);
	glVertex3d(9, 0, 0);
	
	glVertex3d(9, 0, 0);
	glVertex3d(14, 4, 0);

	glVertex3d(14, 4, 0);
	glVertex3d(8, 2, 0);

	glVertex3d(8, 2, 0);
	glVertex3d(4, 6, 0);

	glColor3d(0.5, 0.02, 0.9);
	glVertex3d(4, 6, 0);
	glVertex3d(0, 0, 0);
	glEnd();
}   

