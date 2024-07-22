#include<bits/stdc++.h>
using namespace std;

int countDis(int arr[],int n)
{
	unordered_set<int>s;
	for(int i=0;i<n;i++)
	{
		s.insert(arr[i]);
	}
	return s.size();
}

int main()
{
	int arr[]={10,20,10,20,30};
	int n=5;
	cout<<countDis(arr,n);
}
