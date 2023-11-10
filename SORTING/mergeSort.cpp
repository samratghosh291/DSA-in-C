#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v)
{

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

void merge(vector<int> &v, int low, int mid, int high)
{

    vector<int> temp;

    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {

        if (v[left] <= v[right])
        {
            temp.push_back(v[left]);
            left++;
        }

        else
        {

            temp.push_back(v[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(v[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(v[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        v[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &v, int low, int high, int &cnt)
{
    cnt++;
    if (low >= high)
        return;
    int mid = ((high - low) / 2) + low;
    mergeSort(v, low, mid, cnt);
    mergeSort(v, mid + 1, high, cnt);
    merge(v, low, mid, high);
}

int main()
{
    int n, cnt = 0;
    cout << "Enter the size: ";
    cin >> n;
    cout << "\n";
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << "\n";

    print(v);
    cout << "\n";

    mergeSort(v, 0, n - 1, cnt);
    print(v);
    cout << "\n";
    cout << "The no of count: " << cnt;
    return 0;
}