//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:

  
void print(vector<vector<int>> v){
    cout << "Display the elements of the vector: \n";
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < i+1; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}


    int minRow(int N, int M, vector<vector<int>> A) {
         print(A);
        // code here
        for(int i=0;i<N;i++){
            
            sort(A[i].begin(),A[i].end());
        }

        print(A);
        
        int count=INT_MIN;
        int tempCount;
        for(int i=0;i<N;i++){
            tempCount=0;
            for(int j=0;j<M;j++){
                if(A[i][j]==0){
                    tempCount++;
                }
                else{
                    break;
                }
            }
            if(tempCount>count){
                count=i;
            }
        }
        return count;
        
    }
};

//{ Driver Code Starts.



int main() {
    // int t;
    // cin >> t;
    // while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> A(N, vector<int>(M));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }
        Solution ob;
        cout << ob.minRow(N, M, A) << "\n";
    // }
}
// } Driver Code Ends