#include <stdio.h>

int main(void)
{
	int a = 100000; //&a -> a값이 위치한 주소값(0x7ffffffee03c 번지에 a가 100000으로 저장되어 있다.)
	int b = 200000; //&b -> b의 주소가 0x7ffffffee040 번지이다.
    double e = 200000.00;
	int c = a + b;  //&c -> c의 주소가 0x7ffffffee044 번지이다.
	double d = 100000.0;

	printf("Hello world!\n");
	printf("Be happy!\n");
	printf("My\tfriend\n");		//"My"를 출력하고 탭 위치로 이동(\\t) 후에 "friend"를 출력하고 줄을 바꿈(\\n)
	printf("Goot\bd\tchance\n");	// "Goot"를 출력하고 한 칸 왼쪽으로 이동(\\b)해 t를 d로 바꾸고 탭 위치로 이동(\\t) 후에 "chance"를 출력하고 줄을 바꿈(\\n)
	printf("Cow\rW\a\n");		// 맨 앞으로 이동(\\r)해 C를 W로 바꾸고 벨소리(\\a)를 내고 줄을 바꿈(\\n)
	printf("%d\n", 0010);

	printf("%lf\n", 2.66e-4);
	
	return 0;
}