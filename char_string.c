#include <stdio.h>

int main(void)
{
    char a = 'abcdefg';
    char b[10] = "abcdefg";
    char c[10] = "ABCDEFGHIJKLMNOP";

    char first_name[15] = "ANTHONY";
    char first_name1[15] = {'A','N','T','H','O','N','Y','\0'}; // NULL character '\0' is required at end in this declaration
    char string1 [6] = "hello";  /* string size = 'h'+'e'+'l'+'l'+'o'+"NULL" = 6 */
    char string2 [ ] = "world";  /* string size = 'w'+'o'+'r'+'l'+'d'+"NULL" = 6 */
    char string3[6] = {'h', 'e', 'l', 'l', 'o', '\0'} ; /*Declaration as set of characters ,Size 6*/
    char *str = "Hello~";

    printf("char a[10] = %s\n", a);
    printf("char b[10] = %s\n", b);
    printf("char c[10] = %s\n", c);
    printf("\n");

    printf("char first_name[15] = %s\n", first_name);
    printf("first_name1[15] = %s\n", first_name1);
    printf("string1[6] = %s\n", string1);
    printf("string2[] = %s\n", string2);
    printf("string3[6] = %s\n", string3);
    printf("*str = %s\n", str);

    return 0;
}