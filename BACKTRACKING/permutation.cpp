#include<bits/stdc++.h>
using namespace std;

void print(vector<vector<int>>ans){

    int r=ans.size();
    int c=ans[0].size();

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
}


void calculatePermutation(vector<vector<int>>&ans,vector<int>&nums, vector<int>&ds,int freq[]){

    if(nums.size()==ds.size()){
        ans.push_back(ds);
        return;
    }

    for(int i=0;i<nums.size();i++){
        if(!freq[i]){
            freq[i]=1;
            ds.push_back(nums[i]);
            calculatePermutation(ans,nums,ds,freq);
            freq[i]=0;
            ds.pop_back();
        }
    }




}


int main(){

    vector<int>nums={1,2,3};
    vector<vector<int>>ans;
    vector<int>ds;
    int freq[nums.size()]={0};

    // for(int i=0;i<nums.size();i++){
    //     calculatePermutation(ans,nums,ds,freq);
    // }

    calculatePermutation(ans,nums,ds,freq);

    print(ans);
    return 0;
}