#include <iostream>
#include <string.h>

int revString(char a[],int n);                   //declaration of a function

using namespace std;

int main()
{
	char a[100];
	
	cout<<"Enter string to be reversed"<<endl;
	cin>>a;                                         //taking user input
	int n=strlen(a);
   int x=revString(a,n);                             //calling of a function
   
   if(x==0)
   cout<<"palindrome";
   
   else                                                //printing palindrome or not
   cout<<"Not palindrome";
}

int revString(char a[],int n)
{
	int i=0,l=n-1,temp,j=0;
	char b[100];
	for(j=0;a[j]!='\0';j++)
	{                                               //copying char array a into char array b
		b[j]=a[j];
	}
	b[j]='\0';
	while(i<l)
	{
		temp=a[i];
		a[i]=a[l];                                  //reversing of string
		a[l]=temp;
		i++;
		l--;
	}
	for(j=0;a[j]!='\0';j++)                           //checking whether reversed array is same or not with original array
	{
		if(a[j]!=b[j])
		return -1;
	}
	return 0;
	
}
