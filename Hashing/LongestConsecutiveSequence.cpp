#include<bits/stdc++.h>
using namespace std;

int longseq(int a[],int n)
{
	sort(a,a+n);
	int res=1,curr=1;
	for(int i=1;i<n;i++)
	{
		if(a[i]==a[i-1]+1)
		{
			curr++;
		}
		else{
			res=max(res,curr);
			curr=1;
		}
	}
	res=max(res,curr);
	return res;
}

int main()
{
	int a[]={1,9,3,4,2,10,13};
	int n=7;
	cout<<longseq(a,n);
}
