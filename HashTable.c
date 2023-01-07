#include<stdio.h>
void merge(int arr[20],int l,int mid,int u){

    int i = l;
    int j=mid+1;
    int k =l;
    int b[20];
    while(i<=mid && j<=u){
        if(arr[i]<arr[j]){
            b[k] = arr[i];
            k++;i++;
        }
        else{
            b[k] = arr[j];
            k=k+1;
            j=j+1;
        }
    }
    while(j<=u){
        b[k]=arr[j];
        k++;j++;
    }
    while(i<=mid){
        b[k] = arr[i];
        k++;
        i=i+1;
    }
    for(k=l;k<=u;k++){
        arr[k]=b[k];
    }
}
void mSort(int arr[20],int l ,int u){
    if(l<u){
        int mid = (l + u)/2;
        mSort(arr,l,mid);
        mSort(arr,mid+1,u);
        merge(arr,l,mid,u);
    }
}
int main(){
int array[20],i,size; 
printf("Enter the size of the array :");
scanf("%d",&size);
printf("Enter %d elements : \n",size);
for(i=0;i<size;i++){
scanf("%d",&array[i]);
}
printf("The array before mergeSort :\n");
for(i=0;i<size;i++){
    printf("\t%d",array[i]);
}
mSort(array,0,size-1);
printf("\nThe array after mergeSort :\n");
for(i=0;i<size;i++){
    printf("\t%d",array[i]);
}
return 0;
}
