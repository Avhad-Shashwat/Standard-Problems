#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=4;
	int arr[4]={1,2,2,2};
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int res=1;
	for(int i=1;i<n;i++)
	{
		if(arr[i]!=arr[res-1])
		{
			arr[res]=arr[i];
			res++;
			
	}
	}
	
	for(int i=0;i<res;i++)
	{
		cout<<arr[i]<<" ";
	}
}
