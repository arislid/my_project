#include <stdio.h>

int main(void)
{
	int a = 10;		// int형 변수의 선언과 초기화
	int* pi;		// 포인터 선언
	int** ppi;		// 이중 포인터 선언

	pi = &a;		// int형 변수의 주소를 저장한 포인터
	ppi = &pi;		// 포인터의 주소를 저장한 이중 포인터

	printf("--------------------------------------------\n");
	printf("변수    변숫값     &연산     *연산    **연산\n");
	printf("--------------------------------------------\n");
	printf("   a %10d 0x%x\n", a, &a);
	printf("  pi 0x%x 0x%x %10d\n", pi, &pi, *pi);
	printf(" ppi 0x%x 0x%x 0x%x %10u\n", ppi, &ppi, *ppi, **ppi);
	printf("--------------------------------------------\n");

    const int *pa = &a;
    a = 20;
    printf("a = %d, *pa = %d\n", a, *pa);
    //*pa = 30;  //error!
    printf("*pa = %d\n", *pa);

    int arr[3] = {0, 1, 2};
    *(arr+0) = 10;
    *(arr+1) = 20;
    *(arr+2) = 30;
    *(arr+3) = 40;
    arr[4] = 50;
    //arr = &a; //error!
    //arr++;    //error!

    printf("arr[3] = %d, arr[4] = %d\n", arr[3], arr[4]);

    int *const arr1 = &a;
    *(arr1 + 1) = 40;
    *(arr1 + 2) = 50;
    *(arr1 + 3) = 60;
    //arr1 = &pi; //error!
    //arr1++;     //error!

    return 0;
}