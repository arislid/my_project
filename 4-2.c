#include <stdio.h>

int main(void)
{
    size_t a = 0;

    for(int i=0; i<10; i++)
    {
        a = i * 2;
        printf("a = %ld\n", a);
    }

    printf("size_t 자료형 크기: %ld\n", sizeof(size_t));
    printf("char 자료형의 크기 : %ld\n", sizeof("A"));
    printf("char 자료형의 크기 : %ld\n", sizeof('A'));

    return 0;
}