//18. Swap values using call by reference

#include<stdio.h>

void swap(int *no1,int *no2);

int main()
{
    int n1,n2;
    printf("\nEnter number n1 : ");
    scanf("%d",&n1);
    printf("\nEnter number n2 : ");
    scanf("%d",&n2);
    printf("\nValues before swapping : %d\t%d",n1,n2);
    swap(&n1,&n2);
    printf("\n\nValues after swapping  : %d\t%d",n1,n2);
    getche();
    return 0;
}

void swap(int *no1,int *no2)
{
    int temp;
    temp=*no1;
    *no1=*no2;
    *no2=temp;
}

/*
    Output:
    Enter number n1 : 200

    Enter number n2 : 300

    Values before swapping : 200    300

    Values after swapping  : 300    200
*/

