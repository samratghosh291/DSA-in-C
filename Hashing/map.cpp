#include<iostream>
#include<map>
#include<climits>
using namespace std;


int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    // declear map 
    map<int,int>mpp; //map store data in soring order of their key value

    //pre-computing
    for(int i=0;i<size;i++){
        mpp[arr[i]]++;
    }
    

    //display data
    for(auto it:mpp){
        cout<<it.first<<" -> "<<it.second<<endl;
    }

    //fetching data
    int q;
    cout<<"NO. of quries: ";
    cin>>q;
    while(q--){
        int quries;
        cout<<"Quries: ";
        cin>>quries;
        cout<<mpp[quries]<<endl;

    }

    return 0;

}