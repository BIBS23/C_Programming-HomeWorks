#include<stdio.h>
int main (){
    int a[20],i,search,n,flag=0;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the number in array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number to search : ");
    scanf("%d",&search);
   for(i=0;i<=n;i++){
        if(a[i]==search){
         printf("Element is found ");
         flag=1;
        }
    }    
    if(flag==0){
        printf("Element not found");

    }   
 return 0;

}