#include<iostream>
#include<array>
using namespace std;


void reverseArr(int arr[],int i, int n){

    if(i>=(5/2)){
        return;
    }

    swap(arr[i],arr[n-i-1]);
    reverseArr(arr,i+1,n);
}



//print the array
void print(int arr[]){
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){

    int arr[5]={1,4,3,5,2};

    cout<<"Before Reverse: \n";
    print(arr);

    //reversing 
    reverseArr(arr,0,5);
    cout<<"\n";

    cout<<"After Reverse: \n";
    print(arr);







    return 0;
}