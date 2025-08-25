#include<stdio.h>
#include<conio.h>
int main()

{
    int a,b,c;
    printf("Enter Numbers:");
    scanf("%d %d" ,&a,&b);
    c=a;
    a=b;
    b=c;

    printf("After Swapping:");
    printf("%d %d" ,a,b);


}
