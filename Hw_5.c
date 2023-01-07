// Write a program in C to read n number of values in an array and display it in reverse order.
#include<stdio.h>
int main(){
    int num[20],size,i,rev;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    printf("Enter the numbers : ");
    for(i=0;i<size;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<size;i++){
        printf("%d",num[size-1-i]);              
    }
    return 0;
}