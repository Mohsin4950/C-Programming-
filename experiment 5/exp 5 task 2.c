//Aim: WAP to find the factorial of a
//number using recursive function.
#include<stdio.h>
int factorialRecursive(int num);
int factorialRecursive(int num){
if(num<=1){
    return 1;
}
return num*factorialRecursive(num-1);
}

int main(){
int num;
printf("\t\t\t***factorial recursive function***\n\n");
printf("enter number:");
scanf("%d",&num);
printf("factorial of %d is %d",num,factorialRecursive(num));
return 0;
}
