#include <iostream>
//#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

long top=-1;

void push(long a[],long x,long n)
{
	if(top==n-1)
		cout<<"Your list is full";
	else
	{
		top++;
		a[top]=x;
	}
}

void pop()
{
	if(top==-1)
		cout<<"Your list is empty";
	else
		top--;
}

long max(long a[])
{
	long size =sizeof(a)/sizeof(a[0]);
	cout<<"size is"<<size<<endl;
//	if(size == 1)
//		return a[0];
//	else
//		return *max_element(a,a+size);
}

int main()
{
	int choice;
	long n;
	cin>>n;
    long a[n];
    for(int i=0;i<n;i++)
    {
    	cin>>choice;
    	switch(choice)
    	{
    		case 1:{
    			int x;
    			cin>>x;
    			push(a,x,n);
				break;
			}
			case 2: pop();
					break;
		    case 3:{
		    	max(a);
		    	
				break;
			}
		}
	}
	return 0;
}
