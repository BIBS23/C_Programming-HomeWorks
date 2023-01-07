#include<stdio.h>
int main(){
    int a[10],i;
    for(i=1;i<=5;i++){
        printf("Enter number %d : ",i);
        scanf("%d",&a[i]);
    }
    printf("The entered values are : ");
    for(i=1;i<=5;i++){
        printf("%d\t",a[i]);
    }
    return 0;    
}