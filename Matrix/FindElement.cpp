#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int x = 14;
    int i = 0, j = 3;
    bool found = false;

    while (i < 4 && j >= 0) {
        if (arr[i][j] == x) {
            cout << "Found at " << i << "," << j;
            found = true;
            break;
        } else if (arr[i][j] > x) {
            j--;
        } else {
            i++;
        }
    }

    if (!found) {
        cout << "Element not found";
    }

    return 0;
}

