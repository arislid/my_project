#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int arr[8];
    int *ptr = arr;
    int i = 0;

    const int n = 3;
    //n += 5;

    const int *cptr = ptr;
    cptr += 0x0c;
    //*cptr = 20;

    int *const cptr1 = ptr;
    //cptr1  = &arr;

    int const *cptr2 = ptr;
    cptr2 += 0x05;

    ptr++;
    //arr++;

    while(i < sizeof(arr)/sizeof(int))
    {
        arr[i] = i;
        printf("ptr[%d] = %d\n", i, ptr[i]);
        printf("*(arr+%d) = %d\n", i, *(arr+i));
        i++;
    }

    return 0;
}