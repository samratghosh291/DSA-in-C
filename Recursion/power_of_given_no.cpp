#include<iostream>
using namespace std;

bool checkPower(int n,int e){
    if(n==1){
        return true;
    }
    else if (n<=0 or n%e!=0){
        return false;
    }
    else{
        return checkPower(n/e,e);
    }
}


int main(){
    int n,e;

    cout<<"Enter the number to be checked: ";
    cin>>n;
    cout<<"Enter the exponent: ";
    cin>>e;
   if(checkPower(n,e)){
    cout<<n<<" is the power of "<<e<<endl;
   }
   else{
    cout<<n<<" is not the power of "<<e<<endl;

   }
    
    return 0;
}