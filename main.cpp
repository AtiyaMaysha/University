#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>


void myDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0, 0.5, 0.0);
    glBegin(GL_POLYGON);
        glVertex2f(15.0,15.0);
        glVertex2f(985.0,15.0);
        glVertex2f(985.0,535.0);
        glVertex2f(15.0,535.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINES);
        /// Bottom line
        glVertex2f(35.0,35.0);
        glVertex2f(965.0,35.0);

        /// Up line
        glVertex2f(965.0,515.0);
        glVertex2f(35.0,515.0);

        /// Left line
        glVertex2f(35.0,35.0);
        glVertex2f(35.0,515.0);

        /// Right line
        glVertex2f(965.0,35.0);
        glVertex2f(965.0,515.0);

        /// Center line
        glVertex2f(500.0,35.0);
        glVertex2f(500.0,515.0);

        /*/// Extra
        glVertex2f(35.0,275.0);
        glVertex2f(965.0,275.0);*/

        /// Left Bar Large
        glVertex2f(35.0,137.0);
        glVertex2f(200.0,137.0);

        glVertex2f(200.0,137.0);
        glVertex2f(200.0,413.0);

        glVertex2f(35.0,413.0);
        glVertex2f(200.0,413.0);

        /// Left Bar Small
        glVertex2f(35.0,206.0);
        glVertex2f(101.0,206.0);

        glVertex2f(101.0,206.0);
        glVertex2f(101.0,344.0);

        glVertex2f(101.0,344.0);
        glVertex2f(35.0,344.0);

        /// Right Bar Large
        glVertex2f(965.0,137.0);
        glVertex2f(800.0,137.0);

        glVertex2f(800.0,137.0);
        glVertex2f(800.0,413.0);

        glVertex2f(800.0,413.0);
        glVertex2f(965.0,413.0);

        /// Right Bar Small
        glVertex2f(965.0,206.0);
        glVertex2f(899.0,206.0);

        glVertex2f(899.0,206.0);
        glVertex2f(899.0,344.0);

        glVertex2f(899.0,344.0);
        glVertex2f(965.0,344.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POINTS);
        glVertex2f(150.0,275.0);
        glVertex2f(850.0,275.0);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINE_STRIP);
        float theta;
        for(int i=0; i<360; i++){
            theta = i*3.1416/180;
            glVertex2f(500+60*cos(theta), 275+60*sin(theta));
        }
    glEnd();

    /*glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINE_STRIP);
        theta;
        for(int i=0; i<360; i++){
            theta = i*3.1416/180;
            glVertex2f(137+80*cos(theta), 275+80*sin(theta));
        }
    glEnd();*/

    glFlush();

}


void myInit (void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1000.0, 0.0, 550.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1000, 550);
    glutInitWindowPosition (50, 50);
    glutCreateWindow ("Youth Academy");
    glutDisplayFunc(myDisplay);
    //glutMouseFunc(MyMouse);
    myInit ();
    glutMainLoop();
}
