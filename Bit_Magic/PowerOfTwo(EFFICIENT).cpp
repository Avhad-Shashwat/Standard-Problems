#include<bits/stdc++.h>
using namespace std;

bool isPow2(int n)
{
	if(n==0)
		return false;
	return((n&(n-1))==0);
}

int main()
{
	int n;
	cout<<"Enter Number: ";
	cin>>n;
	cout<<isPow2(n);
}
