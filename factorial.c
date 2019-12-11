//14. Find factorial using function

#include<stdio.h>

int fact(int n);

int main()
{
    int no,factorial=0;
    printf("\nEnter number to calculate factorial : ");
    scanf("%d",&no);
    factorial = fact(no);
    printf("\n\nFactorial of %d is %d",no,factorial);
    getche();
    return 0;
}

int fact(int n)
{
    int i,result=n;
    for(i=n-1;i>0;i--)
    {
        result=result*i;
    }
    return result;
}

/*
    Output:

    Enter number to calculate factorial : 5

    Factorial of 5 is 120
*/
