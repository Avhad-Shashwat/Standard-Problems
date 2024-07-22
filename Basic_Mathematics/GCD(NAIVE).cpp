#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter two Numbers: ";
	cin>>a>>b;
	int res=min(a,b);
	while(res>0)
	{
		if(a%res==0 && b%res==0)
		{
			break;
		}
		res--;
	}
	cout<<"GCD/HCF: "<<res;
}
