#include<bits/stdc++.h>
using namespace std;

void transpose(int arr[4][4])
{
	int n=4;
	int temp[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			temp[i][j]=arr[j][i];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<temp[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	transpose(arr);
}
