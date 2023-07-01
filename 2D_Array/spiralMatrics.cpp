#include <iostream>
#include <vector>

using namespace std;

void spiralMatrics(vector<vector<int>> &v, int r, int c)
{

    int top = 0;
    int buttom = v.size() - 1;
    int left = 0;
    int right = v[0].size() - 1;

    int direction = 0;

    while (left<=right && top<=buttom)
    {

        // left->right
        if (direction == 0)
        {

            for (int i = left; i <= right; i++)
            {
                cout << v[top][i] << " ";
            }
            top++;
        }

        // top->buttom
        else if (direction == 1)
        {
            for (int i = top; i <= buttom; i++)
            {
                cout<<v[i][right]<<" ";
            }
            right--;
        }

        // right->left
        else if (direction == 2)
        {
            for (int i = right; i >= left; i--)
            {
                cout << v[buttom][i] << " ";
            }
            buttom--;
        }

        else
            {
                for (int i = buttom; i >= top; i--)
                {
                    cout<<v[i][left]<<" ";
                }
                    left++;
            }

            direction=(direction+1)%4;
    }
}

int main()
{
    int r, c;
    cout << "Enter the row and column of this matrics: ";
    cin >> r >> c;

    vector<vector<int>> arr(r, vector<int>(c));
    cout << "Enter the elements of the matrics: ";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    spiralMatrics(arr, r, c);

    return 0;
}