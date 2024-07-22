#include<bits/stdc++.h>
using namespace std;

bool Subarray(int a[],int n)
{
	unordered_set<int>s;
	int pre_sum=0;
	for(int i=0;i<n;i++)
	{
		pre_sum+=a[i];
		if(s.find(pre_sum)!=s.end())
		{
			return true;
		}
		if(pre_sum==0)
		{
			return true;
		}
		s.insert(pre_sum);
	}
	return false;
}

int main()
{
	int a[]={1,6,8,-8,4};
	int n=5;
	cout<<Subarray(a,n);
}
