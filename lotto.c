#include <stdio.h>

int main(void)
{
    int lotto45 = 45;
    int choice6 = 6;
    long double prob;
    
    
    for(int i=1; i<=5; i++)
    {
        lotto45 *= (45-i);
        choice6 *= (6-i);
    }
    
    prob = (long double)choice6/lotto45;

    printf("로또 1등 당첨확률은 %.9Lf 입니다\n", prob);

    return 0;
}