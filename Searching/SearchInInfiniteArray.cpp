#include<bits/stdc++.h>
using namespace std;


int binary_search(int arr[],int k,int s,int e)
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
		return binary_search(arr,k,s,mid-1);
	else
		return binary_search(arr,k,mid+1,e);
}

int search(int arr[],int x)
{
	if(arr[0]==x)return 0;
	int i=1;
	while(arr[i]<x)
		i=i*2;
	if(arr[i]==x)return i;
	
	return binary_search(arr,x,i/2+1,i-1);
}

int main()
{
	int arr[]={1,10,15,20,40,60,80,100,200,500,1000};
	int x=100;
	cout<<search(arr,x);
	
}
