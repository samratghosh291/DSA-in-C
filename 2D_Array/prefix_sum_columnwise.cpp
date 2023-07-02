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


// void convertPrefixSum(vector<vector<int>>&v){
//     for(int i=0;i<v.size();i++){
//         for(int j=1;j<v[i].size();j++){
//             v[i][j]=v[i][j-1]+v[i][j];
//         }
//     }
// }



void convertPrefixSumCloumnWise(vector<vector<int>>&v){
    for(int j=0;j<v[0].size();j++){

        for(int i=1;i<v.size();i++){
            v[j][i]=v[j][i]+v[j][i-1];
        }

    }

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

    convertPrefixSumCloumnWise(arr);

    
    print(arr);


    return 0;
}