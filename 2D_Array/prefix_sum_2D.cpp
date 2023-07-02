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


void convertPrefixSum(vector<vector<int>>&v){
    for(int i=0;i<v.size();i++){
        for(int j=1;j<v[i].size();j++){
            v[i][j]=v[i][j-1]+v[i][j];
        }
    }
}


int getSum(vector<vector<int>>&v,int r1,int c1,int r2,int c2){

    int sum=0;
    for(int i=r1;i<=r2;i++){
        if(c1!=0){
        sum+=v[i][c2]-v[i][c1-1];
        }
        sum+=v[i][c2];
    }
    return sum;
}



int main(){
    int r,c;

    cout<<"Enter the rows and columns of the matrics: ";
    cin>>r>>c;
    

    vector<vector<int>>arr(r,vector<int>(c));

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    print(arr);

    convertPrefixSum(arr);

    
    print(arr);


    int l1,r1,l2,r2;

    cout<<"Enter the co-ordinate: ";
    cin>>l1>>r1>>l2>>r2;

    
     cout<<"The sum will be: "<<getSum(arr,l1,r1,l2,r2);


    
    return 0;
}