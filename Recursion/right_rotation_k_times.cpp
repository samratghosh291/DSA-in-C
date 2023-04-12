#include<iostream>
using namespace std;

void reverseArr(int arr[],int st,int end){
    while(st<end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
}




void rightRotate(int arr[], int k, int n){
    k=k%n;
    reverseArr(arr,0,n-1);
    reverseArr(arr,0,k-1);
    reverseArr(arr,k,n-1);
}



void printArr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}


int main(){
    int n,k;
    cout<<"Enter the sizr of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number of rotation: ";
    cin>>k;

    printArr(arr,n);
    cout<<endl;
    rightRotate(arr,k,n);
    printArr(arr,n);
    return 0;
}