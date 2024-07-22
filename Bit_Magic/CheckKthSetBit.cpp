#include<bits/stdc++.h>
using namespace std;

void kthbit(int n,int k)
{
	if(n&(1<<(k-1))!=0)
		cout<<"Yes";
	else
		cout<<"No";
	
}

int main()
{
	int n,k;
	cout<<"Enter n and k: ";
	cin>>n>>k;
	kthbit(n,k);
}
