#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> pascalTriangle(int n){

    vector<vector<int>>v;
    v.resize(n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0 || i==j){
                v[i].push_back(1);
            }
            else{
                v[i].push_back(v[i-1][j]+v[i-1][j-1]);
            }
        }
    }

    return v;
    
}


void print(vector<vector<int>> v){
    cout << "Display the elements of the vector: \n";
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < i+1; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}




int main(){

    int n;
    cout<<"Enter the size of the triangle: ";
    cin>>n;

    vector<vector<int>>v;

    
    v=pascalTriangle(n);

    print(v);









    return 0;
}