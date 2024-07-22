#include<bits/stdc++.h>
using namespace std;

bool Subarray(int a[],int n,int sum)
{
	unordered_set<int>s;
	int pre_sum=0;
	for(int i=0;i<n;i++)
	{
		pre_sum+=a[i];
		if(s.find(pre_sum-sum)!=s.end())
		{
			return true;
		}
		if(pre_sum==sum)
		{
			return true;
		}
		s.insert(pre_sum);
	}
	return false;
}

int main()
{
	int a[]={1,2,4,7};
	int n=4;
	int sum=7;
	cout<<Subarray(a,n,sum);
}
