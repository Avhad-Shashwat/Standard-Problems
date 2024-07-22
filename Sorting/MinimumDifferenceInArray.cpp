#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={8,15};
	int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n);
	int res=INT_MAX;
	for(int i=1;i<n;i++)
	{
		res=min(res,arr[i]-arr[i-1]);
	}
	
	cout<<res;
}
