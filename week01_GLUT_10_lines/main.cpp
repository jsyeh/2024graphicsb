#include <GL/glut.h> ///使用 GLUT外掛 18行

void display() ///自己寫
{
    glutSolidTeapot( 0.3 ); ///自己寫
    glutSwapBuffers(); ///自己寫
}


int main(int argc, char *argv[]) ///我們的 main函式 138行
{
    glutInit(&argc, argv); ///初始化 GLUT 140行
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///143行

    glutCreateWindow("我自己寫的哦!"); ///145行 建視窗

    glutDisplayFunc(display); ///148行 設定要畫圖的display函式

    glutMainLoop(); ///174行 主要迴圈
}
