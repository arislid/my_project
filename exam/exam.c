#include <stdio.h>
#include "student.h"
#include "sub.c"

int main()
{
    exam_t a = {"홍길동", 100};
    int arr[] = {0, 1, 2, 5, 3, 1, 2, 6, 10, 9};
    int size = sizeof(arr)/sizeof(int);

    print_arr(arr, size);
    int *p = NULL;

    
    return 0;
}