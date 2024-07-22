#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={2,-2,4,3,-3};
	int n=5;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	int l=0;
	for(int i=0;i<n;i++)
	{
		if(l==sum-arr[i])
		{
			cout<<"True "<<arr[i];
		}
		l+=arr[i];
		sum-=arr[i];
	}
	
}
