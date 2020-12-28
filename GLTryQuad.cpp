#include <GL/gl.h>
#include <GL/glu.h>
// The first headers are only necessary to run this program on lower versions
#include <GL/glut.h>

// Just like with Godot's user-defined functions
void display();
void reshape(int,int);

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
    glutReshapeFunc(reshape);
    init();
    // Loops the glut args, although a callback function is needed first
    glutMainLoop();
}

void display(){
    // Sets color buffer
    glClear(GL_COLOR_BUFFER_BIT);
    // Resets the matrix
    glLoadIdentity();

    // Size of points
    glPointSize(10.0); // << How many pixels
    // Where drawing stuff happens
    // Draw START
    glBegin(GL_QUADS); //

    // Vertex-float takes 2 args: x, y in Cart. plane
    glVertex2f(-8.0, 8.0);
    glVertex2f(8.0, 8.0);
    glVertex2f(8.0, -8.0);
    glVertex2f(-8.0, -8.0);

    glEnd();
    // Draw END

    // Displays frame buffer on screen
    glFlush();
}

void reshape(int w, int h){
    // Viewport inside the window
    // Has 4 args: x,y,width,height
    /*
    ===============
    =             =
    =             =
    =             = << Right now its size is the same as the window itself
    =             =
    =             =
    ===============
    */
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    // Sets matrix projection
    glMatrixMode(GL_PROJECTION);
    // Resets matrix projection
    glLoadIdentity();
    // Sets orthographic projection
    // 4 args: left, right, bottom, top points of Cart. plane
    /*      (10,10)
    ===============
    =      -      =
    =      -      =
    =------*------= << Right now the origin is at center due to the declared points
    =      -      =
    =      -      =
    ===============
    (-10,-10)
    */
    gluOrtho2D(-10,10,-10,10);
    glMatrixMode(GL_MODELVIEW);
}
