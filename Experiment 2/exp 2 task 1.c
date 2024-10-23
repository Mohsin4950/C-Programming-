#include<stdio.h>
int main()
{
    int num;
    printf("\t\t\t***even and odd finder***\n\n\n");
    printf("enter number = ");
    scanf("\n %d",&num);
    if(num%2==0){
        printf("\n the number is even %d",num);

    }
    else{
        printf("\n the number is odd %d",num);
    }
    return 0;
}
