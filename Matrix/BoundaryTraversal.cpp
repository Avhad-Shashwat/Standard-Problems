#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	
	for(int i=0;i<4;i++)
	{
		if(i==0)
		{
			for(int j=0;j<4;j++)
			{
				cout<<arr[i][j]<<" ";
			}
		}
		else if(i==3)
		{
			for(int j=3;j>=0;j--)
			{
				cout<<arr[i][j]<<" ";
			}
		}
		else{
			cout<<arr[i][3]<<" ";
		}
	}
	for(int i=2;i>=1;i--)
	{
		cout<<arr[i][0]<<" ";
	}
	
}
