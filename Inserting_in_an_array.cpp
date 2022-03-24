#include<iostream>
using namespace std;
int main()
{
 int n,element,index;
 cout<<"Enter the size of an array\n";
 cin>>n;
 int a[n];
 cout<<"Enter elements of an array\n";
 for(int i=0;i<n;i++)
  cin>>a[i];
 cout<<"Enter index at which you want your element to be inserted\n";
 cin>>index;
 cout<<"Enter element\n";
 cin>>element;
 if(index>=n)
  cout<<"You are trying to add an array out of its index\n";
  else
  {
  	n++;
  	for(int i=n-1;i>index;i--)
  	{
  	  a[i]=a[i-1]; 	
	}
	a[index]=element;
	cout<<"\nResulted array is:\n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"Size of resulted array is:\n";
	cout<<n;	
  }
 

}
