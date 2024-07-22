#include<bits/stdc++.h>
using namespace std;

int maxcommon(int a[],int b[],int n)
{
	int res=0;
	for(int i=0;i<n;i++)
	{
		int sum1=0,sum2=0;
		for(int j=i;j<n;j++)
		{
			sum1+=a[j];
			sum2+=b[j];
			if(sum1==sum2)
				res=max(res,j-i+1);
		}
	}
	return res;
}

int main()
{
	int a[]={0,1,0,0,0,0};
	int b[]={1,0,1,0,0,1};
	int n=6;
	cout<<maxcommon(a,b,n);
}
