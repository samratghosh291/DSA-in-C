#include<iostream>
#include<algorithm>
#include<array>
#include<vector>
using namespace std;




int main(){

    int r,c;
    cout<<"Enter the row and column of the matrics: ";
    cin>>r>>c;

    int arr[r][c];


    cout<<"Enter the elements of the matrics: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }


cout<<"Display the matrics: \n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }


    //sorting
    for(int i=0;i<r;i++){

    sort(arr[i],arr[i]+c);

    }

cout<<"Display the matrics after sorting: \n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }





    return 0;
}