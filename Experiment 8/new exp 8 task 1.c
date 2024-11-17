//NAME:Mohsin
//UIN:241A032
//ROLL NO:27
//Aim: WAP to find the length of a string without using library function.
#include<stdio.h>
#include<string.h>
void main(){
char str[100];
int len=0;
printf("\t\t***string length finder***\n\n");
printf("enter your string:");
gets(str);
while(str[len]!='\0'){
    len++;
}
printf("string length:%d characters",len);
return 0;
}
