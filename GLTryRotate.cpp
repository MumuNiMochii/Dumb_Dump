#include <GL/gl.h>
#include <GL/glu.h>
// The first headers are only necessary to run this program on lower versions
#include <GL/glut.h>

// Just like with Godot's user-defined functions
void display();
void reshape(int,int);
void timer(int);

void init(){
    // Specifies bg color (0-min intensity:1-max intensity)
    glClearColor(1.0,1.0,0.5,0.25);
    // Enables arguments e.g. GLUT_DEPTH'S
    glEnable(GL_DEPTH_TEST);
}

int main(int argc, char**argv){
    /* Args declared from main() are inputted to glutInit
        '&' is used to argc to become a pointer whilst
        argv is already one
    */
    glutInit(&argc, argv);
    /* glutInitDisplayMode does have GLUT_RGB too, dunno about HSL though
        GLUT_DOUBLE is just a 'front' being displayed, and a 'rear' which stores data in memory
        Note that GLUT_DEPTH enables depth testing for front and back of a 3D shape
    */
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
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
float angle = 0.0;

// A display function serves as a single frame in an animation
void display(){
    // Sets/clears color buffer and depth
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    // Resets the matrix
    glLoadIdentity();
    /* << Transform shapes' coordinates
        Should not be between glBegin() and glEnd()
    */
    glTranslatef(0.0, 0.0, -8.0);
    glRotatef(angle,1.0,0.0,0.0);
    glRotatef(angle,0.0,1.0,0.0);// << Comment out the other 2 if the rotation is irritating
    glRotatef(angle,0.0,0.0,1.0);

    // glShadeModel(GL_SMOOTH); << Enables gradient of colors/vertices

    // Size of points
    glPointSize(10.0); // << How many pixels
    // Where drawing stuff happens
    // Draw START
    glBegin(GL_QUADS); // << Points can be any number

    /* 4 args: RGBA (f - float)
        All vertices which follow after this color are only the ones
        which will get the color
    */
    //glColor4f(1.0,0.5,1.0,0.25);
    /* Vertex-float takes 2 args: x, y in Cart. plane
        Vertices' order rule: clockwise (shows back of shape), counter-clockwise(shows front of shape)
        Hence, the color is applied per vertex, not the whole drawn shape
    */
    //front
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-1.0,1.0,1.0);
    glVertex3f(-1.0,-1.0,1.0);
    glVertex3f(1.0,-1.0,1.0);
    glVertex3f(1.0,1.0,1.0);
    //back
    glColor3f(0.0,1.0,0.0);
    glVertex3f(1.0,1.0,-1.0);
    glVertex3f(1.0,-1.0,-1.0);
    glVertex3f(-1.0,-1.0,-1.0);
    glVertex3f(-1.0,1.0,-1.0);
    //right
    glColor3f(0.0,0.0,1.0);
    glVertex3f(1.0,1.0,1.0);
    glVertex3f(1.0,-1.0,1.0);
    glVertex3f(1.0,-1.0,-1.0);
    glVertex3f(1.0,1.0,-1.0);
    //left
    glColor3f(1.0,1.0,0.0);
    glVertex3f(-1.0,1.0,-1.0);
    glVertex3f(-1.0,-1.0,-1.0);
    glVertex3f(-1.0,-1.0,1.0);
    glVertex3f(-1.0,1.0,1.0);
    //top
    glColor3f(0.0,1.0,1.0);
    glVertex3f(-1.0,1.0,-1.0);
    glVertex3f(-1.0,1.0,1.0);
    glVertex3f(1.0,1.0,1.0);
    glVertex3f(1.0,1.0,-1.0);
    //bottom
    glColor3f(1.0,0.0,1.0);
    glVertex3f(-1.0,-1.0,-1.0);
    glVertex3f(-1.0,-1.0,1.0);
    glVertex3f(1.0,-1.0,1.0);
    glVertex3f(1.0,-1.0,-1.0);

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
    /* Perspective allows 3D projection, unlike orthographic which is flat
        Args: angle, ratio, distance (double near || far)
        Note that the distance is always positive
    */
    gluPerspective(60,1,2.0,50.0);
    glMatrixMode(GL_MODELVIEW);
}

void timer(int){
    glutPostRedisplay();
    // Args: calls 1000ms per 60ms passed for 60FPS
    glutTimerFunc(1000/60,timer,0);
    // Cases for state

    angle += 0.5*3;
    if(angle > 360.0){
        angle = angle - 360.0;
    }
}
