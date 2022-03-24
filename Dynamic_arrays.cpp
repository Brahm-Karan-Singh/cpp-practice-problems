#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <vector>
using namespace std;

int main()
{
	long n,last_answer=0,q,queries[3],seq_no,size=0;
	
	cout<<"Enter no. of sequences"<<endl;
    cin>>n;
    vector<int> a[][n];
	cout<<"Enter no. of queries"<<endl;
	cin>>q;	
	while(q>0)
	{
		for(int i=0;i<3;i++){
			cin>>queries[i];
		}
		if(queries[0]==1)
		{
			if(queries[1]==last_answer)
			 seq_no=0%n;
			else
			 seq_no=1%n;
			 
			vector<int> a[][seq_no]=queries[2];
		
		}
		else
		{
		   if(queries[1]==last_answer)
			 seq_no=0%n;
			else
			 seq_no=1%n;
			 
			size=sizeof(a[][seq_no])/sizeof(a[0][0]);
			 
		   long value_at_index=queries[2]%size;
		   
		   last_answer=vector<int> a[value_at_index][seq_no];
		   
		   cout<<last_answer<<endl; 	
		}
		q--;
	}
}
