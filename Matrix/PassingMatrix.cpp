#include<bits/stdc++.h>
using namespace std;

void print(int *arr[],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr[i][j]<<" ";
			
		}
	}
}

int main()
{
	//double pointer approach
//	int **arr;
	int m=3,n=2;
//	arr=new int*[m];
//	for(int i=0;i<m;i++)
//	{
//		arr[i]=new int[n];
//		for(int j=0;j<n;j++)
//		{
//			arr[i][j]=i;
//		}
//	}

//  single pointer
	int *arr[m];
	for(int i=0;i<m;i++)
	{
		arr[i]=new int[n];
	}
	for(int i=0;i<m;i++)
	{
		arr[i]=new int[n];
		for(int j=0;j<n;j++)
		{
			arr[i][j]=i;
		}
	}

	print(arr,m,n);
}
