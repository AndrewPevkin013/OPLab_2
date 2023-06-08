#ifndef OPENGL_PROJECT_KEYPROCESSING_H
#define OPENGL_PROJECT_KEYPROCESSING_H
#include "Menu.h"
#include "KeyProcessing.h"
#include "ShowDisplay.h"
#include "Options.h"
#include <GL\glut.h>
#include <cstdlib>

void specialKeys(int key, int, int) {

    if (key == GLUT_KEY_DOWN) {
        xRot += 3;
        if (xRot >= 360)
            xRot -= 360;
        glutPostRedisplay();
    }

    if (key == GLUT_KEY_UP) {
        xRot -= 3;
        if (xRot < 0)
            xRot += 360;
        glutPostRedisplay();
    }

    if (key == GLUT_KEY_RIGHT) {
        yRot += 3;
        if (yRot >= 360)
            yRot -= 360;
        glutPostRedisplay();
    }

    if (key == GLUT_KEY_LEFT) {
        yRot -= 3;
        if (yRot < 0)
            yRot += 360;
        glutPostRedisplay();
    }

    if (key == GLUT_KEY_HOME) {
        translateZ += 5;
        glutPostRedisplay();
    }

    if (key == GLUT_KEY_END) {
        translateZ -= 5;
        glutPostRedisplay();
    }

    if (key == GLUT_KEY_F1) {
        cube.clear(CUBE_SIZE, colors);
        glutPostRedisplay();
    }
}

void keys(unsigned char key, int, int) {
    if (cube.current == -1 && key >= '0' && key < '6') {
        cube.Rotate(key - '0', 3);
        display();
    }
}

void mouse(int key, int state, int, int) {
    if (key == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        timerOn = 1 - timerOn;
    }
}

void timer(int) {
    glutTimerFunc(TIMER, timer, 0);
    if (timerOn) {
        if (cube.current == -1) {
            keys(rand() % 6 + '0', 0, 0);
        }
        else {
            cube.Rotate(cube.current, 3);
        }
    }
    else {
        if (cube.current != -1) {
            cube.Rotate(cube.current, 3);
        }
    }
    display();
}

#endif //OPENGL_PROJECT_KEYPROCESSING_H
