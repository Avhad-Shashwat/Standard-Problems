#include<bits/stdc++.h>
using namespace std;

bool areAnagram(string &s1,string &s2)
{
	if(s1.length()!=s2.length())
		return false;
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	return(s1==s2);
}

int main()
{
	string s1="silent";
	string s2="listen";
	cout<<areAnagram(s1,s2);
}
