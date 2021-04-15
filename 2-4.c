#include <stdio.h>

int main(void)
{
	printf("%d\n", 10);
	printf("%lf\n", 3.4);
	printf("%.1lf\n", 3.456);
	printf("%.10lf\n", 3.14159265359);
	printf("%.3lf\n", 3.1029387);
	
	printf("%d와 %d의 합은 %d입니다. \n", 10, 50, 10+50);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	return 0;
}
