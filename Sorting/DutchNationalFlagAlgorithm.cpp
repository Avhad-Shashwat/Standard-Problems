#include<bits/stdc++.h>
using namespace std;

void Dutch(int arr[],int n)
{
	int l=0,mid=0,h=n-1;
	while(mid<=h)
	{
		if(arr[mid]==0)
		{
			swap(arr[l],arr[mid]);
			l++;
			mid++;
		}
		else if(arr[mid]==1)
		{
			mid++;
		}
		else{
			swap(arr[mid],arr[h]);
			h--;
		}
	}
}

int main()
{
	int arr[]={0,1,2,1,1,2};
	int n=6;
	Dutch(arr,n);
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
