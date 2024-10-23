#include<stdio.h>
int main(){
int i,start_num,end_num,sum=0;i;
printf("\t\t\t***sum of odd number***\n\n\n");
printf("enter the start  number=");
scanf("%d",&start_num);
printf("enter the end number=");
scanf("%d",&end_num);
if(start_num>end_num){
    printf("error: the start number should be lower than the end number");
}
else{
    for(i=start_num;i<=end_num;i++)
    {

        if(i%2!=0){
            sum=sum+i;
        }

    }
}
printf("sum of all the odd numbers is:%d",sum);
return 0;
}
