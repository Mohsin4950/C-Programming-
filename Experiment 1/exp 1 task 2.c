#include<stdio.h>
int main()
{
    int p,c,m,avg;
    printf("enter physics marks");
    scanf("%d",&p);
    printf("enter chemistry marks");
    scanf("%d",&c);
    printf("enter maths marks");
    scanf("%d",&m);
    avg=(p+c+m)/3;
    printf("\n pcm avg=%d",avg);
    avg>=50? printf("\n eligible for admission"):printf("not eligible for admission");
    return 0;

}


