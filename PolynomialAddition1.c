#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int coeff;
    int expo;
    struct node*next;
}list;

list*insert(list* head,int co,int ex){
    list*temp;
    list*new =malloc(sizeof(list));
    new->coeff = co;
    new->expo = ex;
    new->next = NULL;
    if(head == NULL || ex > head->expo){
        new->next = head;
        head = new;
    }
    else{
        temp=head;
        while(temp->next!=NULL  &&  temp->next->expo >= ex){
            temp=temp->next;
        }
        new->next=temp->next;
        temp->next = new;  
    }
    return head;
}
list* create(list*head){
    int n,i;
    int coeff;
    int expo;
    printf("Enter the number of terms :  \n");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("Enter the exponent for the term %d ",i+1);
        scanf("%d",&expo);
        printf("Enter the coefficient for the term %d :",i+1);
        scanf("%d",&coeff);
        head = insert(head,coeff,expo);
    }
    return head;
}
void print(list*head){
    if(head == NULL){
        printf("No Polynomial");
    }
    else{
        list*temp= head;
        while(temp!=NULL){
            printf( "(%d x ^ %d)",temp->coeff,temp->expo);
            temp=temp->next;
            if(temp!=NULL){
                printf(" + ");
            }else{
                printf("\n");
            }
        }
    }
}
void polyADD(list*head1,list*head2){
    list*ptr1 = head1;
    list*ptr2 = head2;
    list*head3 = NULL;
    while (ptr1!=NULL  &&  ptr2!=NULL){
        if(ptr1->expo==ptr2->expo){
            head3 = insert(head3,ptr1->coeff + ptr2->coeff,ptr1->expo);
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        else if (ptr1->expo > ptr2->expo){
            head3 = insert(head3,ptr1->coeff,ptr1->expo);
            ptr1=ptr1->next;
        }
        else if (ptr1->expo < ptr2->expo){
            head3 = insert(head3,ptr2->coeff,ptr2->expo);
            ptr2=ptr2->next;
        }
    
    }
    while(ptr1!=NULL){
        head3= insert(head3,ptr1->coeff,ptr1->expo);
        ptr1 = ptr1->next;
    }
    while(ptr2!=NULL){
        head3= insert(head3,ptr2->coeff,ptr2->expo);
        ptr2 = ptr2->next;
    }

    printf("Added polynomial is :  \n");
    print(head3);
}
int main (){
    list* head1 = NULL;
    list* head2 = NULL;
    printf("Enter the first polynomial \n");
    head1 = create(head1);
    printf("Enter the second polynomial \n");
    head2 = create(head2);
    printf("The first polynomial is :\n");
    print(head1);
    printf("The second polynomial is  \n");
    print(head2);
    polyADD(head1,head2);
    return 0;
}