//print values of variable using pointer

#include<stdio.h>

int main()
{
    int a = 53;
    char c = 'N';
    float f = 5.23;

    int *ptr1;
    char *ptr2;
    float *ptr3;

    ptr1 = &a;
    ptr2 = &c;
    ptr3 = &f;

    printf("\n.....Integer Pointer.....");
    printf("\nVariable    a = %d",a);
    printf("\nAddress of  a = %u",ptr1);
    printf("\nValue at ptr1 = %d",*ptr1);

    printf("\n\n.....Character Pointer.....");
    printf("\nVariable    c = %c",c);
    printf("\nAddress of  c = %u",ptr2);
    printf("\nValue at ptr2 = %c",*ptr2);

    printf("\n\n.....Float Pointer.....");
    printf("\nVariable    f = %f",f);
    printf("\nAddress of  f = %u",ptr3);
    printf("\nValue at ptr3 = %f",*ptr3);

    getche();
    return 0;
}

/*
    Output:
    .....Integer Pointer.....
    Variable    a = 53
    Address of  a = 6356736
    Value at ptr1 = 53

    .....Character Pointer.....
    Variable    c = N
    Address of  c = 6356735
    Value at ptr2 = N

    .....Float Pointer.....
    Variable    f = 5.230000
    Address of  f = 6356728
    Value at ptr3 = 5.230000
*/
