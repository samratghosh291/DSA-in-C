#include<stdio.h>

int binarySearch( int arr[],int n,int item){
    int flag=0,st=0,end=n-1;
    int mid=(st+end)/2;

    while(st<=end){
        if(arr[mid]==item) {
            flag=1;
            break;
        }
        if(arr[mid]>item){
            end=mid-1;
        }
        if(arr[mid]<item){
            st=mid+1;
        }

        mid=(st+end)/2;

    }

    return flag;
}

int main(){
    int n,item,flag;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the sorted array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the item to be searched: ");
    scanf("%d",&item);

    flag = binarySearch(arr,n,item);

    flag==1?printf("Item is present!"):printf("Item is not found!");


    return 0;
}