#include<bits/stdc++.h>
using namespace std;

int lomuto(int arr[],int n,int l,int h)
{
	int p=arr[h];
	int i=l-1;
	for(int j=l;j<=h-1;j++)
	{
		if(arr[j]<p)
		{
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[h]);
	return i+1;
}

int main()
{
	int arr[]={10,80,30,90,40,50,70};
	int n=7;
	int l=0;
	int h=6;
	cout<<lomuto(arr,n,l,h);
}
