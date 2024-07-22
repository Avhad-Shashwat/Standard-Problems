#include<bits/stdc++.h>
using namespace std;

int bsearch(int arr[],int n,int k)
{
	int s=0,e=n-1;
	while(s<=e)
	{
		int mid=(s+e)/2;
		if(arr[mid]==k)
			return mid;
		else if(arr[mid]>k)
			e=mid-1;
		else
			s=mid+1;
	}
	return -1;
}


int main()
{
	int arr[]={1,2,3,4,5};
	int n=5;
	int k=4;
	cout<<bsearch(arr,n,k);
}
