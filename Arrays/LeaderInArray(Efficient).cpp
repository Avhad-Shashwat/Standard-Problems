#include<bits/stdc++.h>
using namespace std;
void leader(int arr[],int n)
{
	int curr_lead=arr[n-1];
	cout<<curr_lead<<" ";
	for(int i=n-2;i>=0;i--)
	{
		if(curr_lead<arr[i])
		{
			curr_lead=arr[i];
			cout<<curr_lead<<" ";
		}
	}
	
}

int main()
{
	int arr[7]={7,10,4,10,6,5,2};
	int n=7;
	leader(arr,n);
}
