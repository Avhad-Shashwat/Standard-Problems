#include<bits/stdc++.h>
using namespace std;

int maxEvenOdd(int arr[], int n)
{
    int res = 1;
        int curr = 1;
        for(int j =1; j < n; j++)
        {
            if (((arr[j] % 2 == 0) && (arr[j - 1] % 2 != 0)) || 
                ((arr[j - 1] % 2 == 0) && (arr[j] % 2 != 0)))
            {
                curr++;
                res = max(res, curr);
            }
            else
            {
                break;
            }
        }
        return res;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << maxEvenOdd(arr, 5);
    return 0;
}

