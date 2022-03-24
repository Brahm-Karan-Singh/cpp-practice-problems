#include <iostream>
using namespace std;
int front=-1,rear=-1;
#define n 5
int queue[n];

void enqueue(int item)
{
	if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
		queue[rear]=item;
	}
	 
	else if(rear>=n-1)
	 cout<<"Your list is full\n";
	 
	else
	{
		rear++;
		queue[rear]=item;
	}
}

void dequeue()
{
	if (front==-1 && rear==-1)
	  cout<<"Your list is empty\n";
	  
	else if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	 
	else
	{
		front++;
	}
}

void peek()
{
    if (front==-1 && rear==-1)
	  cout<<"Your list is empty\n";
	  
	else
	  cout<<queue[front]<<endl;	
}

void display()
{
    if (front==-1 && rear==-1)
	  cout<<"Your list is empty\n";
	  
	else
	{
		for(int i=front;i<=rear;i++)
		 cout<<queue[i]<<" ";	
	}	
}
int main()
{
	int choice;
	do
	{
		cout<<"Enter 1 for enqueue, 2 for dequeue, 3 for peek, 4 for display\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					int item;
					cout<<"Enter no. to be inserted\n";
					cin>>item;
					enqueue(item);
				}break;
				
		    case 2: dequeue();
		       		break;
		       		
		    case 3: peek();
		    		break;
		    		
		    case 4: display();
		    		break;
		    		
		    default:cout<<"Please check your input\n";
		    		break;
		}
	}while(choice!=0);
}
