#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={4,2,-2};
	int n=3;
	for(int i=0;i<n;i++)
	{
		int l=0,r=0;
		for(int j=0;j<i;j++)
		{
			l+=arr[j];
		}
		for(int k=i+1;k<n;k++)
		{
			r+=arr[k];
		}
		if(r==l)
			cout<<"True "<<arr[i];
	}
	
}
