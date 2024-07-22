#include<bits/stdc++.h>
using namespace std;

bool Subarray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=i;j<n;j++)
		{
			sum+=a[j];
			if(sum==0)
				return true;
		}
	}
	return false;
}

int main()
{
	int a[]={1,6,8,-8,4};
	int n=5;
	cout<<Subarray(a,n);
}
