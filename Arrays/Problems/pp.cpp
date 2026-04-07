#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void solve(vector<int>& arr) {
    int n = arr.size();
    if (n == 0) {
        return;
    }

    vector<int> result(n);
    int i = 0;
    int j = n - 1;
    int k = 0;

    while (i <= j) {
        if (k % 2 == 0) {
            result[k] = arr[i];
            i++;
        } else {
            result[k] = arr[j];
            j--;
        }
        k++;
    }

    arr = result;
}

int main() {
    vector<int> myArr1 = {1, 2, 3, 4, 5, 6, 7};
    cout << "Original array 1: ";
    for (int x : myArr1) {
        cout << x << " ";
    }
    cout << endl;

    solve(myArr1);

    cout << "Modified array 1: ";
    for (int x : myArr1) {
        cout << x << " ";
    }
    return 0;
}