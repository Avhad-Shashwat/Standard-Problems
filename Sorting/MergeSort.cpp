#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr1[]={1,2,5,9};
	int n1=4;
	int arr2[]={3,4,6,7,8};
	int n2=5;
	int i=0,j=0;
	while(i<n1 && j<n2)
	{
		if(arr1[i]<=arr2[j])
		{
			cout<<arr1[i]<<" ";
			i++;
		}
		else{
			cout<<arr2[j]<<" ";
			j++;
		}
	}
	while(i<n1)
	{
		cout<<arr1[i]<<" ";
		i++;
	}
	while(j<n2)
	{
		cout<<arr2[j]<<" ";
		j++;
	}
	
}
