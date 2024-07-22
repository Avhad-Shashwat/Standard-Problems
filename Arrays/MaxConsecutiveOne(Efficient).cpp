#include<bits/stdc++.h>
using namespace std;

int maxOne(int arr[],int n)
{
	int res=0;
	int curr;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			curr=0;
		}
		else{
			curr++;
			res=max(res,curr);
		}
	}
	return res;
}

int main()
{
	int arr[]={1,1,1,0,1,1};
	cout<<maxOne(arr,6);
}
