#include<bits/stdc++.h>
using namespace std;

int peak(int arr[],int n)
{
	int s=0,e=n-1;
	while(s<=e)
	{
		int mid=(s+e)/2;
		if((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid+1]<=arr[mid]))
			return arr[mid];
		if(mid>0 && arr[mid-1]>=arr[mid])
			e=mid-1;
		else{
			s=mid+1;
		}
	}
	return -1;
}

int main()
{
	int arr[]={5,10,15,5,3};
	int n=5;
	cout<<peak(arr,n);
}
