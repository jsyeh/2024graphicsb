///上週有做過, 請用剪貼的
#include <GL/glut.h>
#include "glm.h"
GLMmodel * pmodel = NULL;
void drawmodel(void)
{
    if (!pmodel) {
        pmodel = glmReadOBJ("gundam.obj");
        ///上週的模型檔,放在奇怪的目錄裡 桌面\freeglut\bin
        ///本週,要換更好的地方
        if (!pmodel) exit(0);
        glmUnitize(pmodel);
        glmFacetNormals(pmodel);
        glmVertexNormals(pmodel, 90.0);
    }

    glmDraw(pmodel, GLM_SMOOTH | GLM_MATERIAL);
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    drawmodel(); ///glutSolidTeapot( 0.3 );
    glutSwapBuffers();
}
int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week07-1 obj gundam");
    glutDisplayFunc(display);

    glutMainLoop();
}
