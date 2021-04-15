#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int find_max(int *max);
int find_min(int *min);
void print_arr(int *arr)
{
    for(int i=0; i<10; i++)
    {
        printf("%4d", arr[i]);
        if(i==4)
            printf("\n");
    }
}

int main(void)
{
    int arr[10] = {0};
    int i, j;

    srand(time(NULL));
    printf("배열에 저장된 숫자는 다음과 같습니다\n");
    
    /////arr[10]에 임의의 숫자 입력하기/////
    for(i=0; i<10; i++)
    {
        arr[i] = rand() % 100 + 1;
        for(j=0; j<i; j++)
        {
            if(arr[i] == arr[j])
            {
                arr[i] = 0;
                i--;
                break;
            }            
        }
    }

    /////////출력하기//////////
    print_arr(arr);
    
    printf("\n");
    printf("최대값은 %d, 최소값은 %d입니다\n", find_max(arr), find_min(arr));

    return 0;
}

int find_max(int *max)
{
    int a = *(max);

    for(int i=0; i<10; i++)
    {
        if(a < *(max+i))
            a = *(max+i);
    }
    return a;
}

int find_min(int *min)
{
    int a = *(min);

    for(int i=0; i<10; i++)
    {
        if(a > *(min+i))
            a = *(min+i);
    }
    return a;
}