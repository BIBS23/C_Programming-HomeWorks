#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,size,flag=0;
    int data[20];
    printf("Enter the size of array :");
    scanf("%d",&size);
    printf("Enter the number :");
    for(i=0;i<size;i++){
        scanf("%d",&data[i]);
    }
    for(i=0;i<size;i++){
        if(data[i]!=data[size-i-1]){
            flag=1;
        }
    }
    if(flag==1){
        printf("Not palindrome");
    }
    else{
        printf("Palindrome");
    }
    return EXIT_SUCCESS;
}