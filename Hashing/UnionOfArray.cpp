#include<bits/stdc++.h>
using namespace std;

int Union(int a[],int b[],int m,int n)
{
	unordered_set<int>s;
	for(int i=0;i<m;i++)
	{
		s.insert(a[i]);
	}
	for(int j=0;j<n;j++)
	{
		s.insert(b[j]);
	}
	return s.size();
}

int main()
{
	int a[]={15,20,5,15};
	int b[]={15,15,15,20,10};
	int m=4;
	int n=5;
	cout<<Union(a,b,m,n);
}
