#include<stdio.h>
#include<stdlib.h>
int main(void){
    int limit,space,i,j;
    printf("Enter the limit :");
    scanf("%d",&limit);
    for(space=limit;space<limit;space++){
        for(space=limit;space<limit;space++){
            printf(" ");
        }
    }// space is for full triangle
    for(i=1;i<=limit;i++){
        for(j=1;j<=i;j++){
            printf(" * ");
        }
        printf("\n");
    }
    return EXIT_SUCCESS;

}
