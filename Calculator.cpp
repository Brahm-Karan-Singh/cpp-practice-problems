#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    char o,x='y';
    float a,b;
    float i[4],t;
    cout<<"Press '+' for addition,'-' for subtraction,'*' for multiplication,'/' for division,'a' for all calculations with total"<<endl;
    while(x=='y')
    {
      cout<<"\nEnter first number: ";
	  cin>>a;
      cout<<"Enter operation to be performed: ";
	  cin>>o;
	  cout<<"Enter second number: ";
	  cin>>b;
	  switch(o)
	  {
	  	case '+':cout<<"Sum is "<<a+b<<endl;
	  	         break;
	    case '-':cout<<"Subtraction is "<<fabs(a-b)<<endl;
	             break;
		case '*':cout<<"Multiplication is "<<a*b<<endl;
	             break;
		case '/':cout<<"Division is "<<a/b<<endl;
	             break; 
		case 'a':
	        	{
	            	i[0]=a+b;
					cout<<"Sum is "<<i[0]<<endl;
					i[1]=a-b;
	            	cout<<"Subtraction is "<<fabs(i[1])<<endl;
	            	i[2]=a*b;
	            	cout<<"Multiplication is "<<i[2]<<endl;
	            	i[3]=a/b;
	            	cout<<"Division is "<<i[3]<<endl;
	            	t=i[0];
	            	for(int j=1;j<4;j++)
	            	{
	            	  t=t+i[j];
					}
	            	
	            	cout<<"Total is "<<t<<endl;
	                break;
		    	}
	     }
	     cout<<"\nDo you want to continue(y/n): ";
	     cin>>x;
    }
		
}

