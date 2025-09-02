#include <windows.h>
#include <GL/glut.h>

void display() {
    glClearColor(0.5f, 0.5f, 0.5f, 1.0f); // background grey
    glClear(GL_COLOR_BUFFER_BIT);

    // green lines
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f); // Green
    glVertex2f(0.0f, 1.0f);
    glVertex2f(0.0f, -1.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(-1.0f, 0.0f);
    glEnd();

    // Red Triangle
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(-0.7f, 0.6f);
    glVertex2f(-0.9f, 0.3f);
    glVertex2f(-0.6f, 0.3f);
    glEnd();

    //Yellow Hexagon
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f); // Yellow
    glVertex2f(0.4f, 0.55f);
    glVertex2f(0.6f, 0.55f);
    glVertex2f(0.7f, 0.35f);
    glVertex2f(0.6f, 0.20f);
    glVertex2f(0.4f, 0.20f);
    glVertex2f(0.3f, 0.35f);
    glEnd();

    //Green Square
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f); // Green
    glVertex2f(-0.8f, -0.5f);
    glVertex2f(-0.5f, -0.5f);
    glVertex2f(-0.5f, -0.8f);
    glVertex2f(-0.8f, -0.8f);
    glEnd();

    //Orange Triangle
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.6f, 0.0f); // Orange
    glVertex2f(0.7f, -0.4f);
    glVertex2f(0.6f, -0.8f);
    glVertex2f(0.75f, -0.8f);
    glEnd();

    glFlush(); // Render now
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Lab Task");
    glutInitWindowSize(400, 400);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
