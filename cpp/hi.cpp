#include <graphics.h>

int main()
{
    initgraph();

    rectangle(100,100,200,200);
    circle(300,200,50);
    line(50,50,400,50);

    getch();
}