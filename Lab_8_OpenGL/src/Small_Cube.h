#ifndef OPENGL_PROJECT_SMALL_CUBE_H
#define OPENGL_PROJECT_SMALL_CUBE_H
#include <GL\glut.h>
class Small_Cube {
private:
    unsigned char _color[4];

public:
    unsigned int color[6];
    double size;

    Small_Cube() {
        memset(color, 0, sizeof(color));
        size = 0.0;
    }

    void rotateZ() {
        unsigned int tmp = color[5];
        color[5] = color[3];
        color[3] = color[4];
        color[4] = color[2];
        color[2] = tmp;
    }

    void rotateY() {
        unsigned int tmp = color[2];
        color[2] = color[1];
        color[1] = color[3];
        color[3] = color[0];
        color[0] = tmp;
    }

    void rotateX() {
        unsigned int tmp = color[0];
        color[0] = color[4];
        color[4] = color[1];
        color[1] = color[5];
        color[5] = tmp;
    }

    void setColor(int i, int color) {
        this->color[i] = color;
    }

    unsigned char *at(int i) {
        _color[0] = color[i] >> 16;
        _color[1] = color[i] >>  8;
        _color[2] = color[i];
        return _color;
    }
    void draw() {
        glPushMatrix();
        glBegin(GL_QUADS);

        // Up
        glColor3ubv(at(0));
        glNormal3f(0, 0, 1);
        glVertex3f(size, size, size);
        glVertex3f(0, size, size);
        glVertex3f(0, 0, size);
        glVertex3f(size, 0, size);

        // Down
        glColor3ubv(at(1));
        glNormal3f(0, 0, -1);
        glVertex3f(size, 0, 0);
        glVertex3f(0, 0, 0);
        glVertex3f(0, size, 0);
        glVertex3f(size, size, 0);

        // Front
        glColor3ubv(at(2));
        glNormal3f(0, -1, 0);
        glVertex3f(size, 0, size);
        glVertex3f(0, 0, size);
        glVertex3f(0, 0, 0);
        glVertex3f(size, 0, 0);

        // Back
        glColor3ubv(at(3));
        glNormal3f(0, 1, 0);
        glVertex3f(size, size, 0);
        glVertex3f(0, size, 0);
        glVertex3f(0, size, size);
        glVertex3f(size, size, size);

        // Left
        glColor3ubv(at(4));
        glNormal3f(-1, 0, 0);
        glVertex3f(0, size, size);
        glVertex3f(0, size, 0);
        glVertex3f(0, 0, 0);
        glVertex3f(0, 0, size);

        // Right
        glColor3ubv(at(5));
        glNormal3f(1, 0, 0);
        glVertex3f(size, size, 0);
        glVertex3f(size, size, size);
        glVertex3f(size, 0, size);
        glVertex3f(size, 0, 0);

        glEnd();
        glPopMatrix();
    }

    void draw(double x, double y, double z) {
        glPushMatrix();
        glTranslated(x, y, z);
        draw();
        glPopMatrix();
    }


};
#endif //OPENGL_PROJECT_SMALL_CUBE_H
