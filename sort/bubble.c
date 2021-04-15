#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_sort(int *arr, int size)
{
    int i;
    for(i=0; i<size; i++)
        printf("%5d", arr[i]);
}

//버블 정렬
void bubble_sort(int arr[], int size)
{
    int i, j;
    
    for(i=size-1; i>=0; i--)
    {
        for(j=0; j<i; j++)
        {
            if(arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
    }
}
//내림차순 선택 정렬
void selection_big_sort(int arr[], int size)
{
    int i, j, big;
    
    for(i=0; i<size; i++)
    {   
        big = i;
        for(j=i; j<size; j++)
        {
            if(arr[j] > arr[big])
                big = j;
        }
        swap(&arr[i], &arr[big]);
    } 
}

//오름차순 선택 정렬
void selection_little_sort(int arr[], int size)
{
    int i, j, little;

    for(i=0; i<size; i++)
    {
        little = i;
        for(j=i; j<size; j++)
        {
            if(arr[little] > arr[j])
            {
                little = j;
            }
        }
        swap(&arr[i], &arr[little]);
    }
}
int main(void)
{
    int numArr[10] = { 8, 4, 2, 5, 3, 7, 10, 1, 6, 9 };
    int i, j;
    int size = sizeof(numArr)/sizeof(int);
    srand(time(NULL));
    
    printf("정렬 이전 배열 출력하면...");
    print_sort(numArr, size);
    printf("\n");

    bubble_sort(numArr, size);
    printf("버블정렬 이후 배열 출력하면...");
    print_sort(numArr, size);
    printf("\n");
    
    printf("다시 정렬을 랜덤배치하겠습니다...");
    for(i=0; i<10; i++)
    {
        numArr[i] = rand() % 10 + 1;
        
        for(j=0; j<i; j++)
        {
            if(numArr[j] == numArr[i])
                i--;
        }
    }
    print_sort(numArr, size);
    printf("\n");

    selection_little_sort(numArr, size);
    printf("오름차순 선택정렬 이후 배열 출력하면...");
    print_sort(numArr, size);
    printf("\n");

    selection_big_sort(numArr, size);
    printf("내림차순 선택정렬 이후 배열 출력하면...");
    print_sort(numArr, size);
    printf("\n");

    return 0;
}