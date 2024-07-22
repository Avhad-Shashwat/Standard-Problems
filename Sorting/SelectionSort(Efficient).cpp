#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1,3,4,2};
	int n=4;
	for(int i=0;i<n;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		swap(arr[min],arr[i]);
	}
	for(int x:arr)
		cout<<x<<" ";
}
