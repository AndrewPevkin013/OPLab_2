#ifndef OPENGL_PROJECT_OPTIONS_H
#define OPENGL_PROJECT_OPTIONS_H
#include "Cube.h"
#define CUBE_SIZE 13
#define TIMER 30

unsigned int colors[6] = {0xFFFFFF, 0xFFFF00,
                          0x0000FF, 0x00FF00,
                          0xFF0000, 0xF94F00};

GLfloat lightPos[] = {0, 100, 200, 0};
int xRot = 225, yRot = 225, zRot = 90;
double translateZ = -35.0;
Cube cube;
int timerOn = 0;

#endif //OPENGL_PROJECT_OPTIONS_H
