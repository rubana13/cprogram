#include<stdio.h>
void main()
{
long num,temp,digit,sum=0;
printf("enter the number");
scanf("%ld",&num);
temp=num;
while(num>0)
{
digit=num%10;
sum=sum+digit;
num=num/10;
printf("Given number = %ld\n", temp);
printf("Sum of the digits %ld = %ld\n", temp, sum);
}
}

