#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={2,3,10,6,4,8,1};
	int n=7;
	int res=arr[1]-arr[0];
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			res=max(res,arr[j]-arr[i]);
		}
	}
	cout<<res;
}
