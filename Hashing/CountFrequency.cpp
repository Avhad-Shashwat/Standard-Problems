#include <iostream>
#include <unordered_map>
using namespace std;

void countFrq(int arr[], int n) {
    unordered_map<int, int> h;
    for (int i = 0; i < n; ++i) {
        h[arr[i]]++;
    }
    for (auto e : h) {
        cout << e.first << " " << e.second << endl;
    }
}

int main() {
    int arr[] = {10, 20, 10, 20, 30};
    int n = 5;
    countFrq(arr, n);
    return 0;
}

