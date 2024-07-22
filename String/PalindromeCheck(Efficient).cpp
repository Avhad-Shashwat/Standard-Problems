#include<bits/stdc++.h>
using namespace std;
bool StrRev(string &rev)
{
	int s=0,e=rev.length()-1;
	while(s<e)
	{
		if(rev[s]!=rev[e])
			return false;
		s++;
		e--;
	}
	return true;
}

int main()
{
	string rev;
	cin>>rev;
	cout<<StrRev(rev);
}
