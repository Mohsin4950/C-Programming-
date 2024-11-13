 //WAP to find the largest element in an array.
#include<stdio.h>
int main(){
int i,n,a[100],large;
printf("enter the elements:");
scanf("%d",&n);
for(i=0;i<=n-1;i++){
    printf("enter the value:");
    scanf("%d",&a[i]);
}
large=a[0];
for(i=0;i<=n-1;i++){

    if(large<a[i])
    {
        large=a[i];
}
}
    printf("the largest number is %d",large);
    return 0;
}

