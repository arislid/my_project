#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int choose_lotto(void)
{
    int num;
    num = rand() % 45 + + 1;
    return num;
}

void get_lotto(int *p)
{
    int i, j;

    for(i=0; i<6; i++)
    {
        *(p+i) = choose_lotto();
        for(j=0; j<i; j++)
        {
            if(*(p+i) == *(p+j))
            {
                *(p+i) = 0;
                i--;
            }
        }
        
    }
}
int main(void)
{
    int lotto_number[6];
    int rand_number, i, j;

    srand(time(NULL));
   
    get_lotto(lotto_number);

    printf("추출한 랜덤 로또 번호는... ");
    for(i=0; i<6; i++)
        printf("%4d", lotto_number[i]);
    printf("입니다\n");

    return 0;
}