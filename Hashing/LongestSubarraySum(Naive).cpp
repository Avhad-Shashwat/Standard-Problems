#include<bits/stdc++.h>
using namespace std;

int maxlen(int a[],int n,int sum)
{
	int res=0;
	for(int i=0;i<n;i++)
	{
		int curr_sum=0;
		for(int j=i;j<n;j++)
		{
			curr_sum+=a[j];
			if(curr_sum==sum)
			{
				res=max(res,j-i+1);
			}
		}
	}
	return res;
}

int main()
{
	int a[]={5,8,-4,-4,9,2,-2};
	int n=7;
	cout<<maxlen(a,n,0);
}
