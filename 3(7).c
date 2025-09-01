
#include<stdio.h>
void main()

{
    int n,sum;
    sum=0;

    printf("Enter a positive integer:");
    scanf("%d", &n);

    for (int i=1;i<=n;i++){sum +=i;}

    printf("Sum of first %d\n natural numbers is:%d\n", n,sum);

}

