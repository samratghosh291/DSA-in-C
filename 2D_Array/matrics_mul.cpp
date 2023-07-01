#include<iostream>
using namespace std;




int main(){

    int r1,c1,r2,c2;
    cout<<"Enter the row and column of the first matrics: ";
    cin>>r1>>c1;

    int arr1[r1][c1];
    cout<<"Enter the element of mat-1: ";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>arr1[i][j];
        }
    }

    cout<<"Enter the row and column of the second matrics: ";
    cin>>r2>>c2;
    
    int arr2[r2][c2];
    cout<<"Enter the element of mat-2: ";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>arr2[i][j];
        }
    }

    int res[r1][c2];
    if(c1!=r2){
        cout<<"Matrics multiplication ids not possible. ";
    }
    else{
        if(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                for(int k=0;k<c1;k++){
                    res[i][j]=arr1[i][k]*arr2[k][i];
                }
            }
        }
    }










    return 0;
}