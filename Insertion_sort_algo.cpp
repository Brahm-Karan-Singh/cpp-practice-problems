#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter size of your array"<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=1;i<n;i++)
	{
	    int j=i-1,temp;
	    temp=a[i];
		while (j>=0 && temp<a[j])
		{
		    a[j+1]=a[j];
		   	j--;	
		}
		a[j+1]=temp;
			
	}
	for(int item:a)
	 cout<<item<<" ";
}
