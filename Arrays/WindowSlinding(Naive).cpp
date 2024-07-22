#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1,8,30,-5,20,7};
	int k=3;
	int max_sum=INT_MIN;
	for(int i=0;i<6-k+1;i++)
	{
		int sum=0;
		for(int j=0;j<k;j++)
		{
			sum+=arr[i+j];
			
		}
		max_sum=max(sum,max_sum);
	}
	cout<<max_sum;
	
	
	
}
