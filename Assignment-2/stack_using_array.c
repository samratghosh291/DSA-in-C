#include<stdio.h>

int n,top=-1,ch,st[100],x,i;
void push(void);
void pop(void);
void dispaly(void);


//

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
            printf("EXIT!");
            break;
        }
            
        
        default:{
            printf("Enter the valid choice: ");
        }
    
        }
    }
    while(ch!=4);{
        return 0;
    }
    return 0;
}