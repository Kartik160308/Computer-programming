#include <stdio.h>

float main() {
float a,convert;

printf("Enter grams:");
scanf("%f" , &a);
convert=(a/1000);
printf("your grams in kg: %f\n",convert);
return 0;
}
