#include<iostream>
using namespace std;

int main()
{
	int n,temp;
	cout<<"Enter size of your array"<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n-1;i++)
	{
		int flag=0;
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				flag=1;
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
		if(flag==0)
		  break;
	}
	for (int item: a)
		cout<<item<<" ";
}
