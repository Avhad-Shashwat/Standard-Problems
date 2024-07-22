#include<bits/stdc++.h>
using namespace std;

struct Point{
	int x,y;
};

bool mycmp(Point p1,Point p2)
{
	return(p1.y<p2.y);
}

int main()
{
	Point arr[]={{3,10},{2,8},{5,4}};
	int n=3;
	sort(arr,arr+n,mycmp);
	for(auto i:arr)
	{
		cout<<i.x<<" "<<i.y<<endl;
	}
	
}
