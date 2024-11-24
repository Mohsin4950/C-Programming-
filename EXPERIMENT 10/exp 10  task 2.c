/*NAME:MOHSIN
UIN:241A032
ROLL NO:27
Aim: WAP to print the elements of an array in Reverse order using pointers.*/
#include <stdio.h>
int main() {
    int n,i;
    printf("\t\t***reverse an array***\n\n");
    //input size of the array
    printf(" enter the size of the array:");
    scanf("%d",&n);
    int arr[n];// pointer to an array
     int *ptr=arr;
    // Asking user to input the elements of the array
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++) {
            printf("%d:",i);
        scanf("%d", ptr+i);
    }
    // Printing the elements in reverse order using the pointer
    printf("\n The elements in reverse order are:\n ");
    for (i = n-1; i >=0; i--) {
        printf("%d ", *(ptr+i) );
          // Move the pointer to the previous element
    }
          printf("\n");


    return 0;
}
