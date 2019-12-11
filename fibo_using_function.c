//22. fibo series using function

#include<stdio.h>

void fibo(int limit);

int main()
{
    int n;
    printf("\nEnter Limit to print series (for eg. 10) : ");
    scanf("%d",&n);
    fibo(n);
    getche();
    return 0;
}

void fibo(int limit)
{
    int no1=0,no2=1,no3;
    int i;

    printf("%d\t%d",no1,no2);

    for(i=0;i<limit-2;i++)
    {
        no3=no2+no1;
        printf("\t%d",no3);
        no1=no2;
        no2=no3;
    }
}

/*
    output:
    Enter Limit to print series (for eg. 10) : 15
    0       1       1       2       3       5       8       13      21      34
    55      89      144     233     377
*/
