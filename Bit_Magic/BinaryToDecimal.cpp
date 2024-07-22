#include<bits/stdc++.h>
using namespace std;

int bitcon(int n)
{
	int ans=0;
	int digit;
	int i=0;
	while(n!=0)
	{
		digit=n%10;
		if(digit==1)
		{
			ans=ans+pow(2,i);
		}
		n=n/10;
		i++;
	}
	return ans;
}

int main()
{
	int n;
	cout<<"Enter Binary: ";
	cin>>n;
	cout<<bitcon(n);
}
