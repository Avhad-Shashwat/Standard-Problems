#include<bits/stdc++.h>
using namespace std;

int maxlen(int a[],int n,int sum)
{
	unordered_map<int,int>m;
	int pre_sum=0;
	int res=0;
	for(int i=0;i<n;i++)
	{
		pre_sum+=a[i];
		if(pre_sum==sum)
		{
			res=i+1;
		}
		if(m.find(pre_sum)==m.end())
		{
			m.insert({pre_sum,i});
		}
		if(m.find(pre_sum-sum)!=m.end())
		{
			res=max(res,i-m[pre_sum-sum]);
		}
	}
	return res;
}

int main()
{
	int a[]={8,3,1,5,-6,6,2,2};
	int n=8;
	int sum=4;
	cout<<maxlen(a,n,sum);
}
