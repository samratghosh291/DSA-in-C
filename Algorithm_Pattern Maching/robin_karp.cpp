#include<bits/stdc++.h>
using namespace std;

int main(){
    string str, pat;
    cout<<"Enter Main String: ";
    cin>>str;
    cout<<"Enter the pattern String: ";
    cin>>pat;
    int n=str.length();
    int m=pat.length();
    int p=0;
    int t=0;
    int h=1;
    int d=256;
    int q=101;

    // Preprocessing for the pattern string 
    for(int i=0;i<m-1;i++){
        h=(h*d)%q;
    }

    // Calculating hash value of pattern and first window of text
    for(int i=0;i<m;i++){
        p=(d*p+pat[i])%q;
        t=(d*t+str[i])%q;
    }

    // Sliding the pattern over text one by one
    for(int i=0;i<=n-m;i++){
        if(p==t){
            int j;
            for(j=0;j<m;j++){
                if(str[i+j]!=pat[j]){
                    break;
                }
            }
            if(j==m){
                cout<<"Pattern found at index: "<<i<<endl;
                exit(0);
            }
        }
        if(i<n-m){
            t=(d*(t-str[i]*h)+str[i+m])%q;
            if(t<0){
                t=t+q;
            }
        }
    }
    cout<<"Pattern not found"<<endl;
    return 0;
}