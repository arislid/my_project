#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    /*
    int ans;
    int n;
    int count = 1;

    srand((unsigned) ans);
    ans = rand() % 100 + 1;

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
    */

    char point[20];
    int grade;

    printf("점수를 입력하세요: ");
    scanf("%s", point);
    printf("점수: %s\n", point);
    grade = atoi(point);

    if(!(grade))
    {
        printf("숫자를 입력하세요\n");
    }

    else
    {
        if(grade >= 90 && grade <= 100)
        {
            printf("성적은 A 입니다\n");
        }
        else if(grade >= 80 && grade < 90)
        {
            printf("성적은 B 입니다\n");
        }
        else if(grade >= 70 && grade < 80)
        {
            printf("성적은 C 입니다\n");
        }
        else if(grade >=60 && grade <70)
        {
            printf("성적은 D 입니다\n");
        }
        else if(grade>= 0 && grade < 60)
        {
            printf("성적은 F 입니다\n");
        }
        else
        {
			printf("점수가 잘못입력되었습니다\n");
		}
    }
    return 0;

}