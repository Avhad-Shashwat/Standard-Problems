#include<bits/stdc++.h>
using namespace std;

int Union(int a[],int b[],int m,int n)
{
	int c[m+n];
	for(int i=0;i<m;i++)
	{
		c[i]=a[i];
	}
	for(int i=0;i<n;i++)
	{
		c[m+i]=b[i];
	}
	sort(c,c+m+n);
	for(int i=0;i<m+n;i++)
	{
		if(i==0 || c[i]!=c[i-1])
		{
			cout<<c[i]<<" ";
		}
	}
	
}

int main()
{
	int arr1[]={1,20,20,40,60};
	int arr2[]={2,20,20,40};
	int n1=5;
	int n2=4;
	Union(arr1,arr2,n1,n2);
}
