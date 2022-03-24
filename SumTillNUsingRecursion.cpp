#include <iostream>
using namespace std;
int ans=0;
int sum(int n)
{
	if(n==0)
		return 0;
	else{
		ans=sum(n-1);
		return n+ans;
	}
}
int main()
{
	int n,x;
	cout<<"Input the number upto which you want to find the sum\n";
	cin>>n;
	x=sum(n);
	cout<<"Sum is "<<x;
	return 0;
}
