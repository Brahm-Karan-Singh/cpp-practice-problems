#include <iostream>
using namespace std;

struct node{
	int data;
	node* next;
};
node* head=NULL;

node* createNode()
{
	node* n=new node;
	cout<<"Enter data\n";
	cin>>n->data;
	n->next=NULL;
}

bool isEmpty()
{
	if(head==NULL)
		return true;
	else
		return false;
}

void push()
{
	node* temp=createNode();
	if(head==NULL)
		head=temp;
	else
	{
		temp->next=head;
		head=temp;
	}
}

void pop()
{
	node* traverse=head;
	if(head==NULL)
		cout<<"Your list is empty\n";
	else
	{
		head=head->next;
		free(traverse);
	}
}

void display()
{
	if(head==NULL)
		cout<<"Your list is empty\n";
	else
	{
		node* traverse=head;
		while(traverse!=NULL)
		{
			cout<<traverse->data<<" ";
			traverse=traverse->next;
		}
	}
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
				push();
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





