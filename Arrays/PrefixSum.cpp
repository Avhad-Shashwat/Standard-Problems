#include<bits/stdc++.h>
using namespace std;

int getsum(int prefix_sum[],int l,int r)
{
	if(l!=0)
	{
		return prefix_sum[r]-prefix_sum[l-1];
	}
	else
	{
		return prefix_sum[r];
	}
}

int main()
{
	int arr[]={2,8,3,9,6,5,4};
	int n=7;
	int prefix_sum[n];
	prefix_sum[0]=arr[0];
	for(int i=1;i<n;i++)
	{
		prefix_sum[i]=prefix_sum[i-1]+arr[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<prefix_sum[i]<<" ";
	}
	cout<<endl<<getsum(prefix_sum,1,3);
}
