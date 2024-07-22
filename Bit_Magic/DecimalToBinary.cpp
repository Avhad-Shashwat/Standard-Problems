#include<bits/stdc++.h>
using namespace std;

int bitcon(int n)
{
	int ans=0;
	int bit;
	int i=0;
	while(n!=0)
	{
		bit=n&1;
		ans=bit*pow(10,i)+ans;
		n=n>>1;
		i++;
	}
	return ans;
}

int main()
{
	int n;
	cout<<"Enter Number: ";
	cin>>n;
	cout<<bitcon(n);
}
