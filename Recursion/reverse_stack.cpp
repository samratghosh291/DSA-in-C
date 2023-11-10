//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

    void insertAtButtom(stack<int>&st,int ele){
        
        
        int topele=st.top();
        st.pop();
        
        if(st.empty()){
            st.push(ele);
        }
        insertAtButtom(st,ele);
        st.push(topele);
        
    }
    void Reverse(stack<int> &st){
        
        int ele=st.top();
        st.pop();
        
        if(st.empty()){
            return;
        }
        
        Reverse(st);
        insertAtButtom(st,ele);
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends