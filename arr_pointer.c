#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int i;
    int arr[7] = {10, 17, 21, 49, 12, 6, 4};
    char *str = "포인터 상수냐 상수 포인터냐 그것이 문제로다.";
    char **sstr;
    char *temp = NULL;
    int *pa = arr;
    const int *cptr = arr;
    int *const ccptr = arr;
    

    cptr = pa;
    //*cptr = 50;

    //ccptr = pa;
    *ccptr = 0;

    //arr = str;
    *arr = str[0];

    for( i=0; i<7; i++)
    {
        printf("pa[%d] = %3d ", i, pa[i]);
    }
    printf("\n");

    printf("%s\n", str);
    //allocate string
    str = (char *)malloc(5*sizeof(char));
    
    // reading string
    scanf("%s",str);
      
    // print string
    printf("%s",str);
    
  
    return 0;
}