#include<bits/stdc++.h>
using namespace std;

int sqt(int x)
{
	int s=0,e=x,ans=0;
	while(s<=e)
	{
		int mid=(s+e)/2;
		int msq=mid*mid;
		if(msq==x)
			return mid;
		else if(msq>x)
			e=mid-1;
		else{
		
			s=mid+1;
			ans=mid;
	}
}
return ans;
	
}

int main()
{
	int x;
	cout<<"Enter any Nunber: ";
	cin>>x;
	cout<<"Square Root is: "<<sqt(x);
}
