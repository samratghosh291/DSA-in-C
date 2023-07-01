#include <iostream>
using namespace std;

int main()
{

    int r1, c1, r2, c2;
    cout << "Enter the row and column of matrics-1: ";
    cin >> r1 >> c1;
    int arr[r1][c1];  //original array
    cout << "Enter the element of matrics-1: ";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> arr[i][j];
        }
    }

    int arr1[r1][c1];  //transpose array

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
             arr1[i][j]=arr[j][i];
        }
    }

    cout << "Display the transpose matrics: \n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}