#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1,3,4,2};
	int n=4;
	int temp[n];
	for(int i=0;i<n;i++)
	{
		int min=0;
		for(int j=1;j<n;j++)
		{
			if(arr[j]<arr[min])
				min=j;
		}
		temp[i]=arr[min];
		arr[min]=INT_MAX;
	}
	for(int i=0;i<n;i++)
	{
		arr[i]=temp[i];
	}
	for(int x:arr)
	{
		cout<<x<<" ";
	}
}
