#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter two Numbers: ";
	cin>>a>>b;
	int res=max(a,b);
	while(true)
	{
		if(res%a==0 && res%b==0)
		{
			break;
		}
		res++;
	}
	cout<<res;
}
