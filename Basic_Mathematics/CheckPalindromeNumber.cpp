#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(int n)
{
	int num=n;
	int pal=0;
	while(n!=0)
	{
		pal=pal*10+n%10;
		n=n/10;
			
	}
	if(pal==num)
	{
		return true;
	}
	else{
		return false;
	}
}

int main()
{
	int k;
	cout<<"Enter Number: ";
	cin>>k;
	int n=abs(k);
	bool check=checkPalindrome(n);
	if(check==1)
	{
		cout<<"Palindrome";
	}
	else{
		cout<<"Not Palindrome";
	}
}
