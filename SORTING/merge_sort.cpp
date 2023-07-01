#include<iostream>
#include<array>
#include<vector>
using namespace std;

 void mergeSort(vector<int>&arr, int si,int ei){
    
    if(si<ei){
        int mid = si+ (ei-si)/2;
        mergeSort(arr,si,mid);
        mergeSort(arr,mid+1,ei);
        merge(arr,si,ei);
    }
}


void merge(vector<int>&arr, int si,int mid,int ei){

    int n1=












}



int main(){

    vector<int> arr(6);
    int n= arr.size();


    




    return 0;
}
