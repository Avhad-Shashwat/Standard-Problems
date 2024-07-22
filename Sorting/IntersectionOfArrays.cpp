#include<bits/stdc++.h>
using namespace std;

int intersect(int arr1[],int arr2[],int n1,int n2)
{
	for(int i=0;i<n1;i++)
	{
		if(i>0 && arr1[i]==arr1[i-1])
			continue;
		for(int j=0;j<n2;j++)
		{
			if(arr1[i]==arr2[j])
			{
				cout<<arr1[i]<<" ";
				break;
			}
		}
	}
}

int main()
{
	int arr1[]={1,20,20,40,60};
	int arr2[]={2,20,20,40};
	int n1=5;
	int n2=4;
	intersect(arr1,arr2,n1,n2);
}
