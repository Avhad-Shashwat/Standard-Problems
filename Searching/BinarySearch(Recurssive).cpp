#include<bits/stdc++.h>
using namespace std;

int bsearch(int arr[],int k,int s,int e)
{
	if(s>e)
	{
		return -1;
	}
	int mid=(s+e)/2;
	if(arr[mid]==k)
	{
		return mid;
	}
	else if(arr[mid]>k)
		return bsearch(arr,k,s,mid-1);
	else
		return bsearch(arr,k,mid+1,e);
}


int main()
{
	int arr[]={1,2,3,4,5};
	int n=5;
	int k=4;
	cout<<bsearch(arr,k,0,4);
}
