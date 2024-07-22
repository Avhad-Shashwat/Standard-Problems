#include <bits/stdc++.h>
using namespace std;

int bsearch(int arr[], int k, int n)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else if (arr[mid] < k)
        {
            s = mid + 1;
        }
        else
        {
            if (mid == 0 || arr[mid - 1] != arr[mid])
            {
                return mid;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    return -1; 
}

int main()
{
    int arr[] = {1, 1, 1, 2, 2};
    int k = 1;
    cout << bsearch(arr, k, 5);
}

