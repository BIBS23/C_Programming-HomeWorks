#include<stdio.h>
#include<stdlib.h>
int  array(int);
int main(void){
    int i,array[5];
    for(i=0;i<5;i++){
        scanf("%d",&array[i]);
    }
    array();
    return 0;

}
int  array(int array[i]){
    printf("Your array is :");
    for(i=0;i<5;i++){
        printf("%d",array[i]);
    }

}