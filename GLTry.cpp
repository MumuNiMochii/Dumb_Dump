#include <GL/gl.h>
#include <GL/glu.h>
// The first headers are only necessary to run this program on lower versions
#include <GL/glut.h>

void display();

void init(){
    // Specifies color (0-min intensity:1-max intensity)
    glClearColor(1,0,0.5,0.25);
}

int main(int argc, char**argv){
    // Args declared from main() are inputted to glutInit
    // '&' is used to argc to become a pointer whilst
    // argv is already one
    glutInit(&argc, argv);
    // glutInitDisplayMode does have GLUT_RGB too, dunno about HSL though
    glutInitDisplayMode(GLUT_RGBA);
    // Window's position when initialized
    glutInitWindowPosition(200, 100);
    // Window's size when initialized
    glutInitWindowSize(500, 500);
    // Enables creation of a window with its title
    glutCreateWindow("First 3D Project");
    // Callback
    glutDisplayFunc(display);
    init();
    // Loops the glut args, although a callback function is needed first
    glutMainLoop();
}

void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    // Resets the matrix
    glLoadIdentity();
    // Displays frame buffer on screen
    glFlush();
}
