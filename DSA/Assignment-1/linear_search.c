#include<stdio.h>
int main(){

    int n,item,flag=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the item to be searched: ");
    scanf("%d",&item);

    for(int i=0;i<n;i++){
        if(arr[i]==item){
            flag=1;
            break;
        }
    }

    if(flag==1){
        printf("Item is found!");
    }
    else{
        printf("Item is not found!");
    }

    return 0;
}