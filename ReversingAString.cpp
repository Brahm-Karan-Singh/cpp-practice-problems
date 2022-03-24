#include <iostream>
#include <string.h>

void revString(char a[],int n);        //declaration of a function

using namespace std;

int main()
{
	char a[100];
	cout<<"Enter string to be reversed"<<endl;
	cin>>a;                             //taking user input
	int n=strlen(a);                    //finding length of an array
    revString(a,n);                     //calling function
}

void revString(char a[],int n)
{
	int i=0,l=n-1,temp;
	while(i<l)
	{
		temp=a[i];
		a[i]=a[l];                         //reversing a string
		a[l]=temp;
		i++;
		l--;
	}
	cout<<a<<endl;                         //printing reversed string
}
