#include<bits/stdc++.h>
using namespace std;

int count(int arr[],int n)
{
	int s=0,e=n-1;
	while(s<=e){
	int mid=(s+e)/2;
	
	if(arr[mid]==0)
	{
		s=mid+1;
	}
	else{
		if(mid==0 || arr[mid-1]!=arr[mid])
			return (n-mid);
		else{
			e=mid-1;
		}
	}
}
}

int main()
{
	int arr[]={0,0,1,1,1};
	int n=5;
	cout<<count(arr,n);
}
