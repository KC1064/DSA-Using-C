//WAP to print the prime number within 3 to 100.
#include<stdio.h>
int main()
{
    int i,fact,j;
    printf("Prime Numbers are: \n");
    for(i=3; i<=100; i++)
    {
        fact=0;
        for(j=1; j<=i; j++)
        {
            if(i%j==0)
                fact++;
        }
        if(fact==2)
            printf("%d " ,i);
    }
    return 0;
}