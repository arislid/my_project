#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

    int ans;
    int n;
    int count = 1;

    srand(time(0));
    ans = rand() % 1000 + 1;

    for(int i=0; i<10; i++)
    {
        printf("숫자를 입력하세요: ");
        scanf("%d", &n);
        printf("%d 번째 시도입니다\n", i+1);

        if(n == ans)
        {
            printf("축하합니다! 정답은 %d입니다!!\n", ans);
            return 0;
            break;    
        }

    }
    printf("아쉽지만 탈락입니다! 정답은 %d 입니다~\n", ans);
    
    return 0;
}