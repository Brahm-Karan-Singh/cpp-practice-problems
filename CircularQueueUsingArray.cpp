#include <iostream>
using namespace std;
int front=-1,rear=-1;
#define n 5
int queue[n];

void enqueue(int item)
{
	if(front==-1 and rear==-1)
	{
		front=0;
		rear=0;
		queue[rear]=item;
	}
	
	else if((rear+1)%n==front)
	 cout<<"Your list is full\n";
	 
	else
	{
		rear=(rear+1)%n;
		queue[rear]=item;
	}
}

void dequeue()
{
	if(front==-1 && rear==-1)
	 cout<<"Your list is empty\n";
	 
	else if(rear==front)
    {
    	front=-1;
    	rear=-1;
	}
	else
	{
		front=(front+1)%n;
	}
}

void peek()
{
	if(front==-1 && rear==-1)
	 cout<<"Your list is empty\n";
	 
	else
	{
		cout<<queue[front]<<endl;	
	}	
}

void display()
{
	if(front==-1 && rear==-1)
	 cout<<"Your list is empty\n";
	 	
	else{

	int i=front;
	while(i!=rear)
	{
		cout<<queue[i]<<" ";
		i=(i+1)%n;
	}
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
