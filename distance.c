#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct  point
{
    double x;
    double y;
}point_t;

double square_distance(point_t a, point_t b)
{
    point_t l;

    l.x = b.x - a.x;
    l.y = b.y - a.y;

    return (l.x)*(l.x) + (l.y)*(l.y);
}

//a의 좌표와 b의 좌표의 변경
void swap(point_t *a, point_t *b)
{
    point_t temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    point_t a = {1, 2};
    point_t b = {11, 22};
    double d;
    double p = 4.89;

    printf("a의 좌표 (%.1lf, %.1lf)\n", a.x, a.y);
    printf("b의 좌표 (%.1lf, %.1lf)\n", b.x, b.y);

    d = sqrt(square_distance(a, b));
    printf("a와 b사이의 거리는 %.1lf입니다\n", d);

    return 0;    
}