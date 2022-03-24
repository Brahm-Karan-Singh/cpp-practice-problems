#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char a[15],b[15];
	cout<<"Enter any string"<<endl;
	cin>>a;
	
	// finding length of string 
	cout<<"Length of string:\n";
	cout<<strlen(a)<<endl;
	
	//copying one string into another using strcpy(dest,src)
	strcpy(b,a);
	cout<<b<<endl;
	
	//comparing two strings using strcmp(char array,char array)
	if(strcmp(a,b)==0)
	cout<<"Equal strings"<<endl;
	
	else
	cout<<"Not Equal"<<endl;
	
	cout<<"After changing one word in Brahm\n";
	
	//changing and comparing
	b[4]='z';
		if(strcmp(a,b)==0)
	cout<<"Equal strings"<<endl;
	
	else
	cout<<"Not Equal"<<endl;
	
	//reversing a string
	cout<<"Concatenated string:\n";
	cout<<strrev(a)<<endl;
	
	//concating two strings using strcat
	cout<<"Concatenated string:\n";
	cout<<strcat(strrev(a)," World");	
}
