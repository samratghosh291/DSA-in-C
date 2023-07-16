#include<iostream>

using namespace std;

class Node {

public:

int val;
Node * next;

Node(int num){
    this->val=num;
    this->next=NULL;
}

};


int main(){
     Node *ptr= new Node(1); 

     cout<< ptr->val <<" "<<ptr->next<<endl;



 

 return 0;
}