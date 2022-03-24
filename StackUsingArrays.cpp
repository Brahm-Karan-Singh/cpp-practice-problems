#include <bits/stdc++.h>
using namespace std;

#define n 5
int top=-1;
int a[n];

bool isEmpty()
{
	if(top==-1)
		return true;
	else
		return false;
}

void push(int x)
{
	if(top==n-1)
		cout<<"Your list is full\n";
	else
    {
    	top++;
		a[top]=x;	
	}	
}

void pop()
{
	if(top==-1)
		cout<<"Your list is empty\n";
	else
		top--;
}

void display()
{
	for(int i=0;i<=top;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

int main()
{
	int a;
	do{
		cout<<"Enter 1 to check if the list is empty or not\n Enter 2 to push an element into the list\n";
		cout<<"Enter 3 to pop an element from the list\n Enter 4 to display the list\n";
		cin>>a;
		switch(a)
		{
			case 1:{
				if(isEmpty())
					cout<<"List is empty\n";
				else
					cout<<"List is not empty\n";
				break;
			}
			case 2:{
				int x;
				cout<<"Enter the value\n";
				cin>>x;
				push(x);
				break;
			}
			case 3:{
				pop();
				break;
			}
			case 4:{
				display();
				break;
			}
		}
		
	}while(a!=5);
	return 0;
}
