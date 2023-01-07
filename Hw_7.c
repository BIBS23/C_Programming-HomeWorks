//Write a program in C to separate odd and even integers in separate arrays.
#include<stdio.h>
int main(){
    int myarray[20],evenarray[10],oddarray[10],size,i,j=0,k=0;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    printf("Enter the numbers : ");
    for(i=0;i<size;i++){
        scanf("%d",&myarray[i]);
    }
    for(i=0;i<size;i++){
        if(myarray[i]%2==0){
            evenarray[j]=myarray[i];
            j++;
        }
        
    }
    for(i=0;i<size;i++){
        if(myarray[i]%2!=0){
            oddarray[k]=myarray[i]; 
            k++;
        } 
    }
    printf("\nodd array : ");
    for(i=0;i<k;i++){
        printf("\t%d",oddarray[i]);
    }
    printf("\nEven array : ");
    for(i=0;i<j;i++){
        printf("\t%d",evenarray[i]);
    }


    return 0;
}