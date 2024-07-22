#include<bits/stdc++.h>
using namespace std;

bool checkSort(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
				return false;
		}
	}
	return true;
}

int main()
{
	int arr[]={1,2,3,4};
	cout<<checkSort(arr,4);
}
