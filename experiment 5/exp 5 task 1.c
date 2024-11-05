//Aim: WAP to find the factorial of a
//number using iterative function.
#include<stdio.h>
int factorialIterative(int num);
int factorialIterative(int num){
int i, prod=1;
for( i=1;i<=num;i++){

prod*=i;
}
return prod;
}
int main(){
int num;
printf("enter the number:");
scanf("%d",&num);
printf("factorial of %d is %d",num,factorialIterative(num));
return 0;
}
