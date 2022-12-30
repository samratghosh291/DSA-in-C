#include<stdio.h>

int n,top=-1,ch,st[100],x,i;
void push(void);
void pop(void);
void display(void);

int main(){
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("\n\t Stack operation using array");
    printf("\n1.PUSH\n2.POP\n3.DISPLAY\nExit!");
    do{
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:{
            push();
            break;
        }
        case 2:{
            pop();
            break;
        }
        case 3:{
            display();
            break;
        }
        case 4:{
            printf("EXIT!\n");
            break;
        }
            
        
        default:{
            printf("Wrong choice!\n");
        }
    
        }
    }
    while(ch!=4);{
        return 0;
    }
    return 0;
}

void push(){
    if(top>=n-1){
        printf("\n Stack is overflow.\n");
    }
    else{
        printf("Enter a value to be pushed: ");
        scanf("%d",&x);
        top++;
        st[top]=x;

    }
}


void pop(){
    if(top<=-1){
        printf("\nStack is underflow.\n");
    }
    else{
        printf("\nThe popped item element is: %d\n",st[top]);
        top--;
    }
}

void display(){
    if(top>=0){
        printf("\nThe elements in stack: ");
        for(int i=top;i>=0;i--){
            printf("\n%d ",st[i]);
        }
        printf("\n");
    }
    else{
        printf("\nThe stack is empty!\n");
    }
}