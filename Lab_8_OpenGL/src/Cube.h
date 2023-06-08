#ifndef OPENGL_PROJECT_CUBE_H
#define OPENGL_PROJECT_CUBE_H
#include "Small_Cube.h"

class Cube {
private:
    Small_Cube a[3][3][3];
    int rotate[6];
    double size;
    unsigned int color[6];

    int _angle[4];
    bool ok[4][4][4];
    Small_Cube tmp[4][4];

public:
    int current;
    Cube() {}
    Cube(double size, unsigned int *color) {clear(size, color);}
    void clear(double size, unsigned int *color);
    void draw();
    void rot90(int idx, int sign);
    void Rotate(int idx, int angle);

};

#endif //OPENGL_PROJECT_CUBE_H
