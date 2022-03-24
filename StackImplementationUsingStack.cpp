#include <iostream>
using namespace std;
int top=-1;
#define n 5
int stack[n];

void push(int item)
{
	if(top>=n-1)
	 cout<<"You are trying to overflow the stack\n";
	else
	{
		top++;
		stack[top]=item;
	}	
}
void pop()
{
	if(top<=-1)
	 cout<<"You cannot delete item from stack as it is empty\n";
	 else
	 {
	 	top--;
	 }
}
void peek()
{
	if(top<=-1)
	  cout<<"Your list is empty\n";
	else
	  cout<<"Element on top is"<<stack[top]<<endl;
}
void display()
{
     if(top<=-1)
	  cout<<"Your list is empty\n";
	 else
	 {
	 	for(int i=0;i<=top;i++)
	 	  cout<<stack[i]<<" ";
	 }	
}

int main()
{
  int choice,item;
  do{
  cout<<"Enter 1 for push, 2 for pop, 3 for peek, 4 for display and 0 to exit\n";
  cin>>choice;
  switch(choice)
  {
  	 case 1:
  	 	{
  	 		cout<<"Enter element to be inserted\n";
  	 		cin>>item;
  	 		push(item);
		}
		break;
		
	 case 2: pop();
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
