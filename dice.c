#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int arr[6] = {0};
    int i, dice;

    srand(time(NULL));
    for(i=0; i<10000; i++)
    {
        dice = rand() % 6 + 1;
        arr[dice - 1]++;
    }
    for(i=0; i<6; i++)
        printf("%d 나온 횟수: %d\n", i+1, arr[i]);

    return 0;
}