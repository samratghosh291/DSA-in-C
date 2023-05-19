#include<iostream>
using namespace std;

int main(){
    int row,column;

    cout<<"Enter the row of the matrics: ";
    cin>>row;
    cout<<"Enter the column of the matrics: ";
    cin>>column;
    int arr[row][column];

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }


 cout<<"The transpose matrics is: \n";
  for(int i=0;i<column;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

