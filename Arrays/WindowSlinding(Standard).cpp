#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1,8,30,-5,20,7};
	int n=6;
	int k=3;
	int curr_sum=0;
	for(int i=0;i<k;i++)
	{
		curr_sum+=arr[i];
		
	}
	int max_sum=curr_sum;
	for(int i=k;i<n;i++)
	{
		curr_sum+=arr[i]-arr[i-k];
		max_sum=max(max_sum,curr_sum);
	}
	cout<<max_sum;
}
