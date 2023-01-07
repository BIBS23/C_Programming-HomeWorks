#include<stdio.h>
int main(){
    int array[10],size,temp,i,j;
    printf("Enter the size for array : ");
    scanf("%d",&size);
    printf("Enter the elements : ");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    } 
printf("The sorted array is "); 
    for(i=0;i<size;i++){
      printf("%d",array[i]); 
    }   
    return 0;
}
