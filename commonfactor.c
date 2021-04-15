#include <stdio.h>

int main(void)
{
    int x, i, j;
    int res[100] = {0};

    printf("약수를 구할 숫자를 입력해주세요: ");
    scanf("%d", &x);
    for(i=1, j=0; i<=x;i++)
    {
        if(!(x%i))
        {
            //printf("%d는 %d의 약수입니다\n", i, x);
            res[j] = i;
            j++;
        }
    }

    printf("%d의 약수는 다음과 같습니다!!\n", x);
    for(i=0; res[i]; i++)
        printf("%d  ", res[i]);
    printf("\n");

    return 0;

}