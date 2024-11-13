#include<stdio.h>
void counter(){
static int count=0;
count++;
printf("counter function is called: %d\n",count);

}
int main(){
printf("\t\t\t***storage classes***\n\n");
int i;
for(i=1;i<=27;i++){
    counter();
}
return 0;
}
