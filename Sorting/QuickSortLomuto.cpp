#include<bits/stdc++.h>
using namespace std;

int lomuto(int arr[],int l,int h)
{
	int p=arr[h];
	int i=l-1;
	for(int j=l;j<h;j++)
	{
		if(arr[j]<p){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[h]);
	return i+1;
}

void qsort(int arr[],int l,int h)
{
	if(l<h)
	{
		int p=lomuto(arr,l,h);
		qsort(arr,l,p-1);
		qsort(arr,p+1,h);
	}
}

int main()
{
	int arr[]={4,1,2,5,3};
	int n=5; 
	int l=0,h=4;
	qsort(arr,l,h);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
