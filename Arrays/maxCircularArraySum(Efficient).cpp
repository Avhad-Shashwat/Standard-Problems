#include<bits/stdc++.h>
using namespace std;

int kadane(int arr[],int n)
{
	int res=arr[0],maxend=arr[0];
	for(int i=1;i<n;i++)
	{
		maxend=max(arr[i],maxend+arr[i]);
		res=max(res,maxend);
	}
	return res;
}

int maxSum(int arr[],int n)
{
	int maxnorm=kadane(arr,n);
	if(maxnorm<0)
		return maxnorm;
	int arr_sum=0;
	for(int i=0;i<n;i++)
	{
		arr_sum+=arr[i];
		arr[i]=-arr[i];
	}
	int maxcir=arr_sum+kadane(arr,n);
	return max(maxnorm,maxcir);
}

int main()
{
	int arr[]={8,-4,3,-5,4};
	cout<<maxSum(arr,5);
}
