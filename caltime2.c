#include <stdio.h>

int main(void)
{
    float d = 40e12;
    float c = 30e4; //빛의 속도: 300,000km/s
    float v = 60e3; //보이저 속도: 60,000km/h

    float v1 = (v / 3600); // 60,000/3600 km/s
    float lightyear = c * 3600 * 24 * 365;
    
    float t = d/(v1/lightyear); 
    
    printf("보이저 호로 갈 경우 걸리는 시간은 %f광년입니다\n", t );



    return 0;
}