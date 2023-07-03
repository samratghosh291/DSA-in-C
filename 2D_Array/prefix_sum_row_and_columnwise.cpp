#include<iostream>
#include<vector>

using namespace std;

// given matrix: 

// [[1 2 3 4],
//  [5 6 7 8],
//  [9 10 11 12]]

// convert after row-wise: 

// [[1 3 6 10],
// [5 11 18 26], 
// [9 19 30 42]] 

// after convert prefix sum row and column wise :

// [[1 3 6 10],
// [6 14 24 36],
// [15 33 54 78]]

// r1=1 c1=1

// r2=2 c2=2

// The sum will be: 34 (v(2,2)-v(0,2)-v(2,0)+v(0,0))




// printing the matrics 
void print(vector<vector<int>>&v){


    cout<<"Display the matrics: \n";

     for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

// prefix sum row wise 
void convertPrefixSumRowWise(vector<vector<int>>&v){
    for(int i=0;i<v.size();i++){
        for(int j=1;j<v[i].size();j++){
            v[i][j]=v[i][j-1]+v[i][j];
        }
    }
}


// prefix sum column wise 
void convertPrefixSumCloumnWise(vector<vector<int>>&v){
    for(int j=0;j<v[0].size();j++){

        for(int i=1;i<v.size();i++){
            v[i][j]=v[i][j]+v[i-1][j];
        }

    }

}



//get the row-column wise sum
int getSum(vector<vector<int>>&v,int r1,int c1,int r2,int c2){
     
     
    int top_sum=0;
    int left_sum=0;
    int top_left_sum=0;

    if(r1!=0){
        top_sum=v[r1-1][c2];
    }
    if(c1!=0){
        left_sum=v[r2][c1-1];
    }

    if(r1!=0 and c1!=0){
        top_left_sum=v[r1-1][c1-1];
    }

    return (v[r2][c2]-top_sum-left_sum+top_left_sum);

    
}



int main(){
    int r,c;

    cout<<"Enter the rows and columns of the matrics: ";
    cin>>r>>c;
    

    vector<vector<int>>arr(r,vector<int>(c));

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }


    cout<<"print the matrix:\n";
    print(arr);

    convertPrefixSumRowWise(arr);

    cout<<"print the matrix after row-wise: \n";

    print(arr);

    convertPrefixSumCloumnWise(arr);


    cout<<"Print the matrix after column-wise: \n";


    print(arr);

    



    int l1,r1,l2,r2;

    cout<<"Enter the co-ordinate: ";
    cin>>l1>>r1>>l2>>r2;

    
    cout<<"The sum will be: "<<getSum(arr,l1,r1,l2,r2);



    return 0;

}