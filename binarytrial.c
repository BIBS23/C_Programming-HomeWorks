#include<stdio.h>
int main(){
    int array[10],l,h,mid,flag=0,size,i,key;
    printf("enter the array size");
    scanf("%d",&size);
    printf("Enter the elements");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the element to search : ");
    scanf("%d",&key);
    l=0;
    h=size-1;
    while(l<h){
          mid=(l+h)/2;
        if(array[mid]==key){
            printf("Element found at %d",mid+1);
            flag=1;
            break;
        }
        else if(array[mid]>key){
            h=mid-1;
        }
        else {
            l=mid+1;
        }
    }
    if(flag==0){
       printf("Element not found");  
    }

    return 0;
}