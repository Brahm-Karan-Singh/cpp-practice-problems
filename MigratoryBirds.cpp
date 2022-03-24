#include <iostream>
using namespace std;
int migratoryBirds(int a[],long n);
int main()
{
	long n,x;
	cout<<"Enter size of an array: \n";
	cin>>n;
	int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<" element: ";
        cin>>a[i];
	}
	x=migratoryBirds(a,n);
	cout<<x;
}
int migratoryBirds(int a[],long n)
{
	int re[5]={0};
	for(int i=0;i<5;i++)
	{
		int count=0;
		for(long j=0;j<n;j++)
		{
			if (a[j]==i+1)
			  count++;
		}
		for(int t=i;t<i+1;t++)
		   re[t]=count;
	}
	int max=0;
	for(int i=1;i<5;i++)
	{
		if(re[max]<re[i])
		  max=i;
	}
	return(max+1);
}
