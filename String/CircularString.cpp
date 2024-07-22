#include<bits/stdc++.h>
using namespace std;

bool rotation(string &s1,string &s2)
{
	if(s1.size()!=s2.size())return false;
	
	return((s1+s1).find(s2)!=string::npos);
}


int main()
{
	string s1="abcd";
	string s2="cdab";
	cout<<rotation(s1,s2);
}
