
#include <bits/stdc++.h>
using namespace std;

void towerOfHonoi(int n,char src, char dest, char helper){

    if(n==0){
        return;
    }

    towerOfHonoi(n-1,src,helper,dest);
    cout<<"Move "<<src<<" to "<<dest<<endl;
    towerOfHonoi(n-1,helper,dest,src);
 return;

}

int main()
{

    towerOfHonoi(3,'A','C','B');
    
    return 0;
}