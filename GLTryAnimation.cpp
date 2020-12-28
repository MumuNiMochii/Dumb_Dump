#include <GL/gl.h>
#include <GL/glu.h>
// The first headers are only necessary to run this program on lower versions
#include <GL/glut.h>

// Just like with Godot's user-defined functions
void display();
void reshape(int,int);
void timer(int);

void init(){
    // Specifies color (0-min intensity:1-max intensity)
    glClearColor(1,0,0.5,0.25);
}

int main(int argc, char**argv){
    /* Args declared from main() are inputted to glutInit
        '&' is used to argc to become a pointer whilst
        argv is already one
    */
    glutInit(&argc, argv);
    /* glutInitDisplayMode does have GLUT_RGB too, dunno about HSL though
        GLUT_DOUBLE is just a 'front' being displayed, and a 'rear' which stores data in memory
    */
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
    // Window's position when initialized
    glutInitWindowPosition(200, 100);
    // Window's size when initialized
    glutInitWindowSize(500, 500);
    // Enables creation of a window with its title
    glutCreateWindow("First 3D Project");
    // Callback
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    /* A timer function with 3 args: (1000 = 1sec),
        function to be called each time passes,
        and an int to be passed to the called function
    */
    glutTimerFunc(0,timer,0);
    init();
    // Loops the glut args, although a callback function is needed first
    glutMainLoop();
}

// Variable to be called and changed every timer's end count
float x_pos = -10.0;
// Same as the user-defined global variable 'direction' in Godot
int state = 1;

// A display function serves as a single frame in an animation
void display(){
    // Sets color buffer
    glClear(GL_COLOR_BUFFER_BIT);
    // Resets the matrix
    glLoadIdentity();

    // Size of points
    glPointSize(10.0); // << How many pixels
    // Where drawing stuff happens
    // Draw START
    glBegin(GL_POLYGON); // << Points can be any number

    /* Vertex-float takes 2 args: x, y in Cart. plane
        Vertices' order rule: clockwise (shows back of shape), counter-clockwise(shows front of shape)
    */
    glVertex2f(x_pos, 1.0);
    glVertex2f(x_pos, -1.0);
    glVertex2f(x_pos+2.0, -1.0);
    glVertex2f(x_pos+2.0, 1.0);

    glEnd();
    // Draw END

    // Only used with declared GLUT_DOUBLE
    glutSwapBuffers();
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

void timer(int){
    glutPostRedisplay();
    // Args: calls 1000ms per 60ms passed for 60FPS
    glutTimerFunc(1000/60,timer,0);
    // Cases for state
    switch(state){
    case 1:
        if(x_pos<8){
            x_pos += 0.25; // << There's no need to change the timer, only the incrementing/decrementing values, which is this
        }
        else{
            state = -1;
        }
        break;
    case -1:
        if(x_pos>-10){
            x_pos -= 0.25;
        }
        else{
            state = 1;
        }
        break;
    }
}
