#include<bits/stdc++.h>
using namespace std;
void StrRev(string &rev)
{
	string s=rev;
	reverse(s.begin(),s.end());
	if(rev==s)
	{
		cout<<"True";
	}
	else
		cout<<"False"; 
}

int main()
{
	string rev;
	cin>>rev;
	StrRev(rev);
}
