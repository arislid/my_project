//#include <stdio.h>
void print_arr(int arr[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("arr[%d] = %4d ", i, arr[i]);
        if((i+1)%5 == 0)
            printf("\n");
    }

    printf("\n");
}