#include<stdio.h>
#include<stdlib.h>
typedef struct linkedList{      
int data;
struct linkedList*next;
} 
list;
list *head = NULL ;
list *tail = NULL ; 
void insertBeg(){
list *newnode  ;
newnode= (list*)malloc(sizeof(list)) ;
printf("\nEnter the value to insert : ");
scanf("%d",&newnode->data );
if(head == NULL){
newnode->next = NULL;
head= newnode;
}
else{
newnode->next=head;
head = newnode;
}
}
void insertend(){
list *newnode  ;
newnode= (list*)malloc(sizeof(list)) ;
printf("\nEnter the value to insert : ");
scanf("%d",&newnode->data );
list *temp;
if(head == NULL){
newnode->next = NULL;
head= newnode;
}
else{
temp=head;
while(temp->next!=NULL){
temp = temp->next;
}
temp->next = newnode;
newnode->next = NULL;
}
}
void insertposition(){
int pos;
printf("Enter a position to insert :");
scanf("%d",&pos);
list*newnode;
newnode=(list*)malloc(sizeof(list));
printf("\nEnter the value to insert : ");
scanf("%d",&newnode->data );
list *temp;
temp=head;
int i=0;
for(i=0;i<pos-1;i++){
temp=temp->next;
}
newnode->next = temp->next;
temp->next=newnode;
}
void displayList(){
if(head==NULL){
printf("\nthere are no elements in the linkedList ");
}
else{
list *p;
printf("\nThe elements in the linkedist are:\n"); 
for(p=head;p!=NULL;p=p->next){
printf("\t%d",p->data);
}
}
}
void deleteBeg(){
list * temp;
if(head->next==NULL){
temp=head;
head = NULL;
printf("\nDeleted element is  %d ",temp->data);
free(temp);
}
else if(head==NULL){
printf("\nThere is no element in linked list to delete");
}
else{
temp=head;
head=head->next;
printf("\nDeleted element is  %d ",temp->data);
free(temp);
}
}
void deleteEnd(){
list * temp;
list * t;
if(head->next == NULL){
temp=head;
head = NULL;
printf("\nDeleted element is  %d ",temp->data);
free(temp);
}
else if(head==NULL){
printf("\nThere is no element in linked list to delete");
}
else{
temp=head ;
t=temp->next; 
while(t->next!=NULL){
t=t->next;
temp=temp->next;
}
temp->next=NULL;
printf("\nDeleted element is  %d ",t->data);
free(t);
}
}
void deletePosition(){
    list*temp;
    list*t;
    int pos;
    printf("Enter the position to delete:");
    scanf("%d",&pos);
    if(pos==1 && head==NULL){
         temp = head;
        head=NULL;
        printf("\nDeleted element is  %d ",temp->data);
        free(temp);
    }
    else if(head==NULL){
        printf("\nThere is no element in linked list to delete");
    }
    else if(pos==1){
        temp=head;
        head=head->next;
        printf("\nDeleted element is  %d ",temp->data);
        free(temp);
    }
    else{
        temp=head;
        for(int i=1;i<pos-1;i++){
            temp=temp->next;
        }
        t=temp->next;
        temp->next=t->next;
        printf("\nDeleted element is  %d ",t->data);
        free(t);

    }
}

int main(){
printf("++++++++++ LINKED LIST OPERATIONS +++++++++++\n\n");
int choice;

do{

printf("\nEnter your Choice\n");
printf("1.Insert at begining \n2.Insert at end\n3.Insert at particular position\n4.Delete at begining\n5.Delete at end \n6.Delete at particular position \n7.Exit\n ");

scanf("%d",&choice);

switch(choice){
 
 case 1 :
 
  insertBeg();
  displayList();
 
 break;
 
 case 2 :
 
 insertend();
 displayList();
 
  break;
 
 case 3 :
 
 insertposition();
  displayList();

  break;
 
 case 4 :
 
 deleteBeg();
 displayList();
 
  break;
 
 case 5 :
 
 deleteEnd();
 displayList();
 
  break;
 
 case 6 :
 
 deletePosition();
 displayList();
 
  break;

case 7 :

 printf("THANK YOU---------------");
 break;
 
default :

 printf("Enter a valid choice\n");

} 

}while(choice!=7);

return 0 ;

}