#include<bits/stdc++.h>
using namespace std;

int longsub(int a[],int n)
{
	int res=0;
	for(int i=0;i<n;i++)
	{
		int c0=0;
		int c1=0;
		for(int j=i;j<n;j++)
		{
			if(a[j]==0)
			{
				c0++;
			}
			else
				c1++;
			if(c0==c1)
				res=max(res,j-i+1);
		}
	}
	return res;
}

int main()
{
	int a[]={1,0,1,1,1,0,0};
	int n=7;
	cout<<longsub(a,n);
}
