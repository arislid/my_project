#include <stdio.h>

int main(void)
{
	float d = 40e+12;
	float c = 3.0e+5;
	float lightyear = c*3600*24*365;
	float t = d/lightyear;

	printf("지구에서 가장 가까운 별인 프록시마까지 가는데 걸리는 시간은 %f광년입니다\n", t);

	return 0;
}
