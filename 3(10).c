

#include<stdio.h>
void main()

{
    int n;unsigned long long factorial=1;

    printf("Enter a number:");
    scanf("%d", &n);

    if(n<0){printf("Factorials are not defined for negative number.\n");}
    else {for(int i=1; i<=n; i++)
        factorial*=i;
    }  printf("Factorial of %d is: %11u\n", n,factorial);

}


