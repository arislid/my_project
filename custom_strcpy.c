#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//str2에 str1 데이터 복사하기!!
void string_copy(char str1[], char str2[])
{
    //char temp[100];
    if(!(str1) || !(str2))
        return -1;  //str1나 str2에 값이 없다면, 종료시킨다.
    for(int i=0; i<strlen(str1)+1; i++)
    {
        str2[i] = str1[i];
    }
}
int main(void)
{
    char a[100] = "apple";
    char b[100] = "banana";
    char temp[100];


    //str1[100] = "apple";
    //str2[100] = "banana";

    printf("size of str1 is %ld\n", strlen(a));
    printf("size of str2 is %ld\n", strlen(b));
    printf("size of temp is %ld\n", strlen(temp));

    string_copy(b, a);

    printf("a: ");
		for(int i=0; i<strlen(a) + 1; i++)
        printf("%c", a[i]);
	printf("\n");

    return 0;
}