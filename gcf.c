#include <stdio.h>

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int divide_gcf(int x, int y)
{
	if(x%y !=0 )
	{
		printf("뭔가 잘못되었습니다\n");
		return 0;
	}
	return x/y;
}

int main(void)
{
	int a, b, r, x, y;
	int gcf = 0; //최대공약수(Great Common Factor)
	int lcm = 0; //최소공배수(Least Common Multiple)

	printf("두 수를 입력하세요: ");
	scanf("%d %d:", &a, &b);
	if(a<b)
		swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);

	for(int i=1; i<=b; i++)
	{
		if(!(a%i) && !(b%i))
			gcf = i;
	}
	printf("a(%d)와 b(%d)의 최대공약수는 %d입니다.\n", a, b, gcf);

	lcm = gcf * divide_gcf(a, gcf) * divide_gcf(b, gcf);
	printf("a(%d)와 b(%d)의 최소공배수는 %d입니다\n", a, b, lcm);

//실제 계산 시간이 훨씬 짧다 = 프로그램 속도가 훨씬 빠르다 = 효율이 훨씬 높다.

	x = a;
	y = b;

	while(y!=0)
	{
		r = x%y;
		x = y;
		y = r;
	}
	printf("\n유클리드 호제법 이용했을 때\na와 b의 최대공약수는 %d입니다.\n", x);

	return 0;
}
