#include<stdio.h>
int main (){
    int a[20],i,search,n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the number in array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<i;j++){
        if(a[i]>a[j]){
            else if(a[i]<a[j]){
                a[j]=a[i];
            }
            printf("The sorted array is : %d");

        }
    }
 return 0;

}