#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int powers(int n,int p)
{
	if(p==0)
		return 1;
	else
	{
		int prevpower=powers(n,p-1);
		return n*prevpower;
	}
}

int main()
{
	int n,p;
	cout<<"Enter number and power:\n";
	cin>>n;
	cin>>p;
	int x=powers(n,p);
	cout<<x;
}
