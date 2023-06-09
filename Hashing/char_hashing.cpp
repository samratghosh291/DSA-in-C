#include <iostream>
#include <climits>
using namespace std;

int main() {
    string str;
    cout<<"Enter string: ";
    cin>>str;


    //storing data
      int hash_arr[26]={0};
    for (int i = 0; i < str.size(); i++) {
        hash_arr[str[i]-'a']++;
    }


   int quries_no;
   cout<<"No. of Quories: ";
   cin>>quries_no;
   while(quries_no--){
    char quries;
    cout<<"Quories: ";
    cin>>quries;
    cout<<quries<<" -> "<<hash_arr[quries-'a']<<endl;
   }

    return 0;
}
