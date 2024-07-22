#include<bits/stdc++.h>
using namespace std;

int getLargest(int arr[],int n)
{
	int res=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[res])
		{
			res=i;
		}
	}
	return res;
}

int secondLargest(int arr[],int n)
{
	int largest=getLargest(arr,4);
	int res=-1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=arr[largest]){
		if(res==-1)
			res=i;
		else if(arr[i]>arr[res])
		{
			res=i;
		}
	}
	}
	return res;
}

int main()
{
	int arr[]={2,15,6,4};
	cout<<secondLargest(arr,4);
}
