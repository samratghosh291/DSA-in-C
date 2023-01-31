

// WAP to creat a Linked List, Insert a node at the first position, Insert a node at any position and display it. 

#include<stdio.h>
#include<stdlib.h>
int v,n,i,pos,choice;
struct node{
    int info;
    struct node * nextptr;
    
};

typedef struct node list;
list *head=NULL;
list *newnode,*temp,*stdnode,*y;
void creatList(int);
void display(void);
void inserFirst(void);
void insertAnyPosition(int);
int main(){

    printf("Enter the number of node: ");
    scanf("%d",&n);
    creatList(n);
    temp=head;
    printf("Operations on singly linked list:\n");
    printf("--------------------------------");
    printf("\n1.Insertion at front.\n2.Insertion at any position.\n3.Display.\n4.EXIT!\n");
    do{
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        {
            printf("\nNow we are going to insert a node at first: \n");
            insertFirst();
            temp=head;
            break;
        }
        case 2:
        {
            printf("\nEnter the position to be inserted: ");
            scanf("%d",&pos);
            insertAnyPosition(pos);
            temp=head;
            break;
        }
        case 3:
        {
            printf("\nNow you ae going to print the whole Linked List:");
            display();
            temp=head;
            break;
        }
        case 4:
        {
            printf("\nEXIT!");
            break;
        }
                  
        default:
        {
            printf("\nEnter the void operations:(1/2/3/4)");
        }
            
        }
    }
    while(choice!=4);
    return 0;
}


void creatList(int n){
    head=(list*)malloc(sizeof(list));
    printf("Enter the value of the 1st node: ");
    scanf("%d",&v);
    head->info=v;
    head->nextptr=NULL;
    temp=head;
    for(int i=2;i<=n;i++){
        printf("\nEnter the value of the node: ");
        scanf("%d",&v);
        newnode=(list*)malloc(sizeof(list));
        newnode->info=v;
        newnode->nextptr=NULL;
        temp->nextptr=newnode;
        temp=temp->nextptr;
    }

}

void insertFirst(){
    if(head==NULL){
        printf("\nInsertion is not possible!");
    }
    else{
        printf("\nEnter the vaue of a node which is to be inserted at first: ");
        scanf("%d",&v);
        stdnode=(list*)malloc(sizeof(list));
        stdnode->info=v;
        stdnode->nextptr=head;
        head=stdnode;
    }
}

void insertAnyPosition(int pos){
    if(head==NULL){
        printf("\nInsertion is not possible!");
    }
    else{
        if(pos<1){
            printf("\nInsertion is not possible!");
        }
        else if(pos==1){
            insertFirst();
        }
        else{
            printf("\nEnter the value of the node which is to be inserted: ");
            scanf("%d",&v);
            stdnode=(list*)malloc(sizeof(list));
            stdnode->info=v;
            stdnode->nextptr=NULL;
            for(int i=1;i<pos;i++){
                y=temp;
                temp=temp->nextptr;
            }
            y->nextptr=stdnode;
            stdnode->nextptr=temp;

        }
        
    }
}


void display(){
    if(head==NULL){
        printf("\nInsertion is not possible!");
    }
    else{
        printf("\nThe Linked List is: ");
        while(temp=NULL){
            printf("%d",temp->info);
            temp=temp->nextptr;

        }
    }
}

