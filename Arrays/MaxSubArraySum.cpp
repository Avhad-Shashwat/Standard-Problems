#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[],int n)
{
	int res=arr[0];
	int maxEnd=arr[0];
	for(int i=1;i<n;i++)
	{
		maxEnd=max(maxEnd+arr[i],arr[i]);
		res=max(res,maxEnd);
	}
	return res;
}

int main()
{
	int arr[]={-3,8,-2,4,-5,6};
	cout<<maxSum(arr,6);
}
