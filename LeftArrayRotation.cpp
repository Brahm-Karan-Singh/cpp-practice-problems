#include <iostream>
using namespace std;

int main()
{
	int n,d,temp,j;
	cin>>n;
	cin>>d;
	int a[n];
	for(int c=0;c<n;c++)
	   cin>>a[c];
	
	for (int i=0;i<d;i++)
	{
		temp=a[0];
		for(j=0;j<n-1;j++)
		{
		    a[j]=a[j+1];	
		}
		a[j]=temp;
	}
	for(int c=0;c<n;c++)
	   cout<<a[c]<<" ";
	
	
}
