#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[10],i,length,flag=0;
    printf("Enter the string :");
    gets(str);
    length = strlen(str);
    for(i=0;i<length;i++){
        if(str[i]!=str[length-i-1]){
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