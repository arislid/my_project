#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year, month, day;

    printf("년과 월을 입력하세요: ");
    scanf("%d %d", &year, &month);


    switch(month)
    {
        case 1:
            day = 31;
            printf("%d년 %d월 %d일 입니다\n", year, month, day);
            break;
        
        case 2:
            if( !(year % 4) && (year % 100)  || !(year % 400))
            {
                day = 29;
                printf("%d년 %d월 %d일 입니다\n", year, month, day);
                break;
            }
            else
            {
                day = 28;
                printf("%d년 %d월 %d일 입니다\n", year, month, day);
                break;
            }
        case 3:
            day = 31;
            printf("%d년 %d월 %d일 입니다\n", year, month, day);
            break;
        case 4:
            day = 30;
            printf("%d년 %d월 %d일 입니다\n", year, month, day);
            break;
        case 5:
            day = 31;
            printf("%d년 %d월 %d일 입니다\n", year, month, day);
            break;
        case 6:
            day = 30;
            printf("%d년 %d월 %d일 입니다\n", year, month, day);
            break;
        case 7:
            day = 31;
            printf("%d년 %d월 %d일 입니다\n", year, month, day);
            break;
        case 8:
            day = 31;
            printf("%d년 %d월 %d일 입니다\n", year, month, day);
            break;
        case 9:
            day = 30;
            printf("%d년 %d월 %d일 입니다\n", year, month, day);
            break;
        case 10:
            day = 31;
            printf("%d년 %d월 %d일 입니다\n", year, month, day);
            break;
        case 11:
            day = 30;
            printf("%d년 %d월 %d일 입니다\n", year, month, day);
            break;
        case 12:
            day = 31;
            printf("%d년 %d월 %d일 입니다\n", year, month, day);
            break;
    }

    return 0;
}