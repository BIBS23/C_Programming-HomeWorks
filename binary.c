#include<stdio.h>
int main(){
    int l,u,i,array[10],n,mid,key;
    printf("Enter the size of the Array : ");
    scanf("%d",&n);
    printf("Enter the elements in the array : ");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the element to search : ");
    scanf("%d",&key);
    l = 0;
    u = n - 1;
    mid = (l + u)/2;
    while(l<u){
        if(array[mid]<key){
            printf("Element is %d found at %d ",key,mid+1);
        }  
        break; 
    }
   while(l<u){ 
        if(array[mid]==key){
            printf("Element %d is found at %d",key,mid);
        }            
      break; 
    }
    while(l<u){
        if(array[mid]>key){
            printf("Element  %d found at %d",key,mid-1);
        } 
        break;     
    }
  return 0;

}