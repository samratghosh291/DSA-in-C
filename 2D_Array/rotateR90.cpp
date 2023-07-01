#include<iostream>
#include<algorithm>
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


void reverseColumn(vector<vector<int>>&v){


    int r=v.size();
    int c=v[0].size();


    for(int j=0;j<c;j++){

        sort(v[j].begin(),v[j].end());
        

    }








}





int main(){

    int r,c;
    cin>>r>>c;

    vector<vector<int>>v;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>v[i][j];
        }
    }

    print(v);

    reverseColumn(v);

    print(v);














    return 0;
}