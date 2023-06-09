#include<iostream>
using namespace std;

int main(){
    int r1,c1,r2,c2,r,c;

    cout<<"Enter the row of the 1st matrics: ";
    cin>>r1;
    cout<<"Enter the column of the 1st matrics: ";
    cin>>c1;
    int arr1[r1][c1];
    cout<<"Enter the row of the 2nd matrics: ";
    cin>>r2;
    cout<<"Enter the column of the 2nd matrics: ";
    cin>>c2;
    int arr2[r2][c2]={0};


    cout<<"Enter the input of matrics-1: ";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>arr1[i][j];
        }
    }

    
    cout<<"Enter the input of matrics-2: ";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>arr2[i][j];
        }
    }

    int arr[r1][c2];

    if(c1!=r2){
        cout<<"Multiplication is not possible!";
    }
    else{
        int arr[r1][c2];
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                
            }
        }
    }


  for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }








    return 0;
}