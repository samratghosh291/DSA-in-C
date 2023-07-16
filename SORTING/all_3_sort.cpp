#include<iostream>
#include<vector>
using namespace std;



bool checkSort(vector<int>&v){

    int n=v.size();
    bool flag=false;
    for(int i=1;i<n;i++){
        if(v[i]==v[i-1]){
            flag=true;
        }
        else{
            flag=false;
            break;
        }
    }
    return flag;
}


void bubble_sort(vector<int>&v){

    int n=v.size();

    for(int i=(n-1);i>=1;i--){

        if(checkSort(v)){
            break;
        }

        else{

            for(int j=0;j<=i;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }

        }

        
    }
}




void print(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main(){

    vector<int> v={23,45,12,33,72};

    bubble_sort(v);
    print(v);



}