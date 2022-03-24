//Circular Linked list

#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* next;
};
node* head=NULL,* traverse,* temp;

node* create_node(){
	node* n=new node;
	cout<<"Enter data\n";
	cin>>n->data;
	n->next=NULL;
	return n;
}

void insert_at_end()
{
	temp=create_node();
	if(head==NULL){
		head=temp;
		head->next=head;
	}
		
	else
	{
		traverse=head;
		while(traverse->next!=head)
		{
			traverse=traverse->next;
		}
		traverse->next=temp;
		temp->next=head;
	}
}
void insert_at_begin()
{
	temp=create_node();
	if(head==NULL)
		head=temp;
	else
	{
		traverse=head;
		while(traverse->next!=head)
			traverse=traverse->next;
		traverse->next=temp;
		temp->next=head;
		head=temp;
	}		
}

void insert_at_n(int n)
{
	temp=create_node();
	if(n==1)
	{
		traverse=head;
		temp->next=traverse->next;
		traverse->next=temp;
	}
	if(n==0)
		insert_at_begin();
	else
	{
		traverse=head;
		for(int i=0;i<n-1;i++)
			traverse=traverse->next;
		temp->next=traverse->next;
		traverse->next=temp;		
	}
}
void delete_at_end()
{
	if(head==NULL)
		cout<<"Your list is empty\n";
	else{
		traverse=head;
	    node *prev=NULL;
		while(traverse->next!=head)	
		{
			prev=traverse;
			traverse=traverse->next;
		}
		prev->next=head;
		free(traverse);
	}
	
}

void delete_at_begin()
{
	if(head==NULL)
		cout<<"Your list is empty\n";
	else if(head->next==head)
	{
		traverse=head;
		head=NULL;
		free(traverse);	
	}
	else
	{
		traverse=head;
		while(traverse->next!=head)
			traverse=traverse->next;
		traverse->next=head->next;
		traverse=head;
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
		traverse=head;
		while(traverse->next!=head){
			cout<<traverse->data<<" ";
		    traverse=traverse->next;
		}
		cout<<traverse->data;
			
	}
}

void delete_at_n(int n)
{
	node* traverse=head,*prev;
	for(int i=0;i<n;i++)
	{
		prev=traverse;
		traverse=traverse->next;
	}
	prev->next=traverse->next;
	free(traverse);
}

void reverse()
{
	if(head==NULL)
		cout<<"Your list is empty\n";
	else
	{
		node* prev=NULL,* curr=head,* next;
		while(curr->next!=head)
		{
			next=curr->next;
			curr->next=prev;
			prev=curr;
			curr=next;
		}
		curr->next=prev;
		head->next=curr;
		head=curr;
	}
}

int main()
{
	int x;
	do{
	cout<<"Enter 1 to insert at end\n Enter 2 to insert at begining\n Enter 3 to insert at some position\nEnter 4 to delete at end\n";
	cout<<"Enter 5 to delete at begining\n Enter 6 to delete at some position\n Enter 7 to reverse the list\nEnter 8 to display your list\n";	
	cin>>x;
	switch(x)
	{
		case 1:insert_at_end();
				break;
		case 2:insert_at_begin();
				break;
		case 3:{
			int b;
			cout<<"Enter the position\n";
			cin>>b;
			insert_at_n(b);
			break;
		}
		case 4:delete_at_end();
				break;
		case 5:delete_at_begin();
				break;
		case 6:{
			int b;
			cout<<"Enter the position\n";
			cin>>b;
			delete_at_n(b);
			break;
		}
		case 7:reverse();
				break;
		case 8:display();
				break;
	}
	}while(x!=9);

}
