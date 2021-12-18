#include<stdio.h>
int main()
 {
 	int a,b;
 	printf("Enter 2 numbers a and b: ");
 	scanf("%d", &a);
 	scanf("%d", &b);
 	a=a+b;
 	b=a-b;
 	a=a-b;
 	printf("values of a and b after swapping are:%d\t%d",a,b);
 }
