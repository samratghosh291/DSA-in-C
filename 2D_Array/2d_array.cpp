#include<iostream>
using namespace std;


int main(){
    int r,c;

    cout<<"Enter the row of the matrics: ";
    cin>>r;
    cout<<"Enter the column of the matrics: ";
    cin>>c;
    int arr[r][c];

    // taking input 

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }

    }
 
  for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }





    return 0;
}

