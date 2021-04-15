#include <stdio.h>
#include <string.h>

char* custom_strcat(char* destination,char* source) 
{
    int c = 0;
    int index;

    while(destination[c] != 0) 
    {  
        c++;
    }

    for(index = 0; index < strlen(source); index++) 
    {
        destination[index+c] = source[index];
    }

    destination[index+c] = 0;

    return destination;

}

char *custom_strncat(char *s1, const char *s2, size_t count) {
  char *start = s1;
  while (*s1++)
    ;

  s1--;

  while (count--)
  {
    if (!(*s1++ = *s2++)) 
        return start;
  }
  *s1 = '\0';
  return start;
}

int main() 
{
    char str1[100] = "This is ", str2[] = "programiz.com";
    char mystr1[100] = "내 이름은 ", mystr2[100] = "홍길동 입니다. ";
    char mystr3[100] = "I love ", mystr4[100] = "myself yeah~";

    strcat(str1, str2);
    custom_strcat(mystr1, mystr2);

    puts(str1);
    puts(str2);
    
    printf("\n");
    printf("%s\n", mystr1);
    printf("%s\n", custom_strcat(str2, str1));
    printf("%s\n", custom_strncat(mystr3, mystr4, 6));

   return 0;
}