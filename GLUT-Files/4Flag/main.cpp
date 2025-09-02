#include <windows.h>
#include <GL/glut.h>
#include <cmath>

void initGL() {
    glClearColor(0.5f, 0.5f, 0.5f, 1.0f);
    glPointSize(3.0f);
}

void drawAxes() {
    glColor3f(0.0f, 1.0f, 0.0f);
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(0.0f, -1.0f);
    glVertex2f(0.0f, 1.0f);
    glEnd();
}

//Somalia
void drawSomaliaFlag() {
    glColor3f(0.0f, 0.5f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.3f, 0.4f);
    glVertex2f(0.8f, 0.4f);
    glVertex2f(0.8f, 0.7f);
    glVertex2f(0.3f, 0.7f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    float cx = 0.55f, cy = 0.55f, r = 0.07f;
    glBegin(GL_TRIANGLES);
    for (int i = 0; i < 5; ++i) {
        float a1 = (2 * M_PI / 5) * i;
        float a2 = (2 * M_PI / 5) * (i + 2);
        glVertex2f(cx, cy);
        glVertex2f(cx + r * cos(a1), cy + r * sin(a1));
        glVertex2f(cx + r * cos(a2), cy + r * sin(a2));
    }
    glEnd();
}

//Sudan
void drawSudanFlag() {
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.8f, 0.4f);
    glVertex2f(-0.3f, 0.4f);
    glVertex2f(-0.3f, 0.7f);
    glVertex2f(-0.8f, 0.7f);
    glEnd();

    glColor3f(0.8f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.8f, 0.6f);
    glVertex2f(-0.3f, 0.6f);
    glVertex2f(-0.3f, 0.7f);
    glVertex2f(-0.8f, 0.7f);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.8f, 0.4f);
    glVertex2f(-0.3f, 0.4f);
    glVertex2f(-0.3f, 0.5f);
    glVertex2f(-0.8f, 0.5f);
    glEnd();

    glColor3f(0.0f, 0.6f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.8f, 0.4f);
    glVertex2f(-0.8f, 0.7f);
    glVertex2f(-0.55f, 0.55f);
    glEnd();
}

//Tonga
void drawTongaFlag() {
    glColor3f(0.8f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.3f, -0.7f);
    glVertex2f(0.8f, -0.7f);
    glVertex2f(0.8f, -0.4f);
    glVertex2f(0.3f, -0.4f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.3f, -0.55f);
    glVertex2f(0.45f, -0.55f);
    glVertex2f(0.45f, -0.4f);
    glVertex2f(0.3f, -0.4f);
    glEnd();

    // Red cross
    glColor3f(0.8f, 0.0f, 0.0f);
    glBegin(GL_QUADS);

    glVertex2f(0.355f, -0.52f);
    glVertex2f(0.385f, -0.52f);
    glVertex2f(0.385f, -0.42f);
    glVertex2f(0.355f, -0.42f);

    glVertex2f(0.33f, -0.485f);
    glVertex2f(0.42f, -0.485f);
    glVertex2f(0.42f, -0.455f);
    glVertex2f(0.33f, -0.455f);
    glEnd();
}
//Denmark
void drawDenmarkFlag() {
    glColor3f(0.8f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.8f, -0.7f);
    glVertex2f(-0.3f, -0.7f);
    glVertex2f(-0.3f, -0.4f);
    glVertex2f(-0.8f, -0.4f);
    glEnd();

    //White cross
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS);

    glVertex2f(-0.7f, -0.7f);
    glVertex2f(-0.66f, -0.7f);
    glVertex2f(-0.66f, -0.4f);
    glVertex2f(-0.7f, -0.4f);

    glVertex2f(-0.8f, -0.55f);
    glVertex2f(-0.3f, -0.55f);
    glVertex2f(-0.3f, -0.50f);
    glVertex2f(-0.8f, -0.50f);
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    drawAxes();
    drawSomaliaFlag();
    drawSudanFlag();
    drawTongaFlag();
    drawDenmarkFlag();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1000, 1000);
    glutCreateWindow("4 Flags");
    glutDisplayFunc(display);
    initGL();
    glutMainLoop();
    return 0;
}
