#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1,2,3,4};
	int low=0;
	int high=3;
	while(low<high)
	{
		swap(arr[low],arr[high]);
		low++;
		high--;
	}
	for(int i=0;i<=3;i++)
	{
		cout<<arr[i]<<" ";
	}
}
