#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node {
	int data;
	Node *next;
};

Node* start=NULL,*temp,*traverse;

void insertnode()
{
	int n;
cout<<"Enter -1 to End"<<endl;
cout<<"Enter the values to be added in List"<<endl;
cin>>n;
while( n!=-1){
    Node* a = new Node();
    a->data = n;
    a->next = NULL;

    if(start == NULL){
        start = a;
    }
    else{
        traverse = start;
        while(traverse->next!= NULL){
            traverse= traverse->next;
        }
        traverse->next= a;
        }
   cout<<"Enter the value to be added in the list"<<endl;
   cin>>n;

}	
}

void display()
{
	if(start==NULL)
		cout<<"Your list is empty\n";
	else{
		cout<<"Your list is-->\n";
	traverse=start;
	while(traverse!=NULL)
	{
		cout<<traverse->data<<" "<<endl;
		traverse=traverse->next;
	}	
	}

}

void insertbeg()
{
	if(start==NULL)
	{
		Node* a=new Node();
		cout<<"Enter data\n";
		cin>>a->data;
		a->next;
		start=a;
	}
	else
	{
		Node* a=new Node();
		cout<<"Enter data\n";
		cin>>a->data;
		a->next=start;
		start=a;
	}
}

void deletebeg()
{
	if(start==NULL)
		cout<<"The list is empty\n";
	else
	{
		traverse=start;
		start=start->next;
		free(traverse);
	}
}

void deleteend()
{
	if(start->next==NULL)
		start=NULL;
	else{
		traverse=start;
		Node* prev=NULL;
		while(traverse->next!=NULL)
		{
			prev=traverse;
			traverse=traverse->next;
		}
		prev->next=NULL;
		free(traverse);
	}
}

void insertatn()
{
	int x;
	cout<<"Enter the position where you want to insert a node\n";
	cin>>x;
	if(start==NULL && x==0)
	{
		temp=new Node();
		cout<<"Enter data\n";
		cin>>temp->data;
		temp->next=NULL;
		start=temp;
	}
	else
	{
		Node* prev;
		traverse=start;
		for(int i=0;i<x;i++)
		{
			prev=traverse;
			traverse=traverse->next;
		}
		temp=new Node();
		cout<<"Enter data in the node\n";
		cin>>temp->data;
		temp->next=prev->next;
		prev->next=temp;
		
	}
}
void deleteatn()
{
	int x;
	Node* prev;
	cout<<"Enter the position you want to delete\n";
	cin>>x;
	traverse=start;
	for(int i=0;i<x;i++){
		prev=traverse;
		traverse=traverse->next;
	}
	prev->next=traverse->next;
	free(traverse);
		
}
void showmiddle()
{
	Node* fast=start,*slow=start;
	while(fast!=NULL && fast->next!=NULL) //First condition for even no. of elements and second one for odd 
	{
		fast=fast->next->next;   //Moving fast by two nodes
		slow=slow->next;         //Moving slow by one node
	}
	cout<<"The middle element of the list is-> "<<slow->data<<endl;
}

void reverselist()
{
	Node* prev=NULL;
	Node* curr=start;
	Node* nextn;
	while(curr!=NULL)
	{
		nextn=curr->next;
		curr->next=prev;
		prev=curr;
		curr=nextn;
	}
	start=prev;	
}

bool findloop()
{
	Node* slow=start,*fast=start;
	while(fast!=NULL && fast->next!=NULL)
	{
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow)
			return true;
	}
	return false;
}

//To delete any node with only one pointer see codewhoop video 7

int main()
{
	int n;
	do{
	cout<<"Press 1 for inserting node at end \nPress 2 for inserting node at beg\n";
    cout<<"Press 3 for deleting node at end\n Press 4 for deleting node at beg\n Press 5 for displaying the list\n";
    cout<<"Press 6 to insert at nth position\nPress 7 for deleting node at nth position\nPress 8 to display middle element of the linkedlist\n";
	cout<<"Press 9 for finding a loop in the list\n Press 10 to reverse list\nPress 11 to exit";
	cin>>n;
	switch(n){
    case 1:insertnode();
           break;
    case 2:insertbeg();
           break;
    case 3:deleteend();
    	   break;
    case 4:deletebeg();
    		break;
    case 5:display();
    		break;
    case 6:insertatn();
    		break;
    case 7:deleteatn();
    		break;
    case 8:showmiddle();
    		break;
    case 9:{
    		if(findloop())
    			cout<<"Loop found\n";
    		else
    			cout<<"No loop found\n";
			break;
		   }
	case 10:reverselist();
			break;
    
    }
    
}while(n != 11);
}

