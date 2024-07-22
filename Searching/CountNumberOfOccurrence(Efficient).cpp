#include<bits/stdc++.h>
using namespace std;

int first(int arr[], int k, int n)
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


int last(int arr[], int k, int n)
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
            if (mid == n-1 || arr[mid + 1] != arr[mid])
            {
                return mid;
            }
            else
            {
                s = mid + 1;
            }
        }
    }
    return -1; 
}

int main()
{
	int arr[]={1,2,2,2,3};
	int k=2;
	int n=5;
	int f=first(arr,k,n);
	if(f==-1)
		cout<<0;
	else
		cout<<(last(arr,k,n)-f+1);
}
