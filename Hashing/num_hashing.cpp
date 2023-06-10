#include <iostream>
#include <climits>
using namespace std;

// here globally w can declear maximum 10e7 size of array

int main() {
    int size;
    cout << "Size of the Array: ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int hash_arr[100] = {0};  // here inside main we can declear upto 10e5 size of array

    //pre-computing data
    for (int i = 0; i < size; i++) {
        hash_arr[arr[i]] += 1;
    }
   
//    fetchig data 
   int quries_no,quries;
   cout<<"No. of Quories: ";
   cin>>quries_no;
   while(quries_no--){
    cout<<"Quories: ";
    cin>>quries;
    cout<<quries<<" -> "<<hash_arr[quries]<<endl;
   }

    return 0;
}
