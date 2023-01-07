#include<stdio.h>
int main(){
    int array1[10],array2[10],array3[10],i,size1,size2,j=0;
    printf("Enter the size of the array 1 : ");
    scanf("%d",&size1);
    printf("Enter the size of the array 2 : ");
    scanf("%d",&size2);
    printf("Enter elements in array1 : ");
    for(i=0;i<size1;i++){
        scanf("%d",&array1[i]);
    }
    printf("Enter the elements in array2 : ");
    for(i=0;i<size2;i++){
      scanf("%d",&array2[i]);
    }
    /****
    for(i=0;i<size1;i++){
        printf("\t%d",array1[i]);
    }
    printf("Elements in the arrays are : ");
    for(j=0;j<size2;j++){
        printf("\t%d",array2[j]);
    }   
    *************/
   for(i=0;i<size1;i++){
       array3[i]=array1[i];
    }   
    for(i=size1;i<size1+size2;i++){
       array3[i]=array2[j];
       j++;
       
    } 
    for(i=0;i<size1+size2;i++){
        printf("%d\t",array3[i]); 
    } 
    return 0;
}
