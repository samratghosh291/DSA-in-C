#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r, c, val;
    cout << "Enter the row and column: ";
    cin >> r >> c;

    vector<vector<int>> v;
    // v.resize(r);    //fixed the row size

    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> val;
            v[i].push_back(val);
        }
    }

    cout << "Display the elements of the vector: \n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
