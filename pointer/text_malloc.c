#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *stringa1 = NULL;
    int n;
    int i;

    printf("How many characters in the string? ");
    scanf("%d", &n);

    stringa1 = (char*) calloc(n, sizeof(char));

    printf("Insert the string: ");
    scanf("%s", stringa1);

    for(i=0; i<n; i++)
        printf("%s", &stringa1[i]);
    printf("\n");
    free(stringa1);

    char *str = "apple";

    for(i=0; i<strlen(str); i++)
        printf("%s", str+i);

    return 0;
}