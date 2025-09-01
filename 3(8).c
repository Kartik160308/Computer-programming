
#include<stdio.h>
void main()

{
    int n,sum;
    sum=0;

    printf("Enter how many odd numbers to sum:");
    scanf("%d", &n);

    for (int i=1;i<=n;i++){sum +=2*i+1;}

    printf("Sum of first %d\n odd numbers is:%d\n", n,sum);

}

