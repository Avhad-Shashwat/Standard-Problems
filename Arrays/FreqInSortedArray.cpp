#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1,1,2,3,3,3};
	int n=6;
	int freq=1;
	for(int i=1;i<n;i++)
	{
		if(arr[i]==arr[i-1])
		{
			freq++;
		}
		else{
			cout<<arr[i-1]<<" "<<freq<<endl;
			freq=1;
		}
	}
	cout<<arr[n-1]<<" "<<freq;
}
