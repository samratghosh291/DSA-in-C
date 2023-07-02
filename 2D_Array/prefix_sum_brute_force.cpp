#include<iostream>
#include<vector>

using namespace std;


void print(vector<vector<int>>&v){


    cout<<"Display the matrics: \n";

     for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}


int prefix_sum_brute_force(vector<vector<int>>&v,int l1,int r1, int l2, int r2){

    int sum=0;
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum+=v[i][j];
        }
    }

    return sum;
}



int main(){
    int r,c;

    cout<<"Enter the row of the matrics: ";
    cin>>r;
    cout<<"Enter the column of the matrics: ";
    cin>>c;
    vector<vector<int>>arr(r,vector<int>(c));

    // taking input 

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    int l1,r1,l2,r2;

    cout<<"Enter the co-ordinates: ";
    cin>>l1>>r1>>l2>>r2;

    print(arr);

    cout<<"The total sum is: "<<prefix_sum_brute_force(arr,l1,r1,l2,r2)<<endl;
    return 0;
}