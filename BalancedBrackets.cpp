#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int top=-1;
// Complete the isBalanced function below.
bool isEmpty()
{
    if(top==-1)
        return true;
    else
        return false;
}

string isBalanced(string s) {

   int n=s.length();
   int st[n];
   if(n%2!=0)
        return "NO";
    else
    { 
        cout<<"in else"<<endl;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='{' || s[i]=='[' || s[i]=='(')
            {
            	cout<<"In inner if\n";
                top++;
                st[top]=s[i];
            }
            else if( !isEmpty() &&
					(st[top]=='(' && s[i]==')') ||
                    (st[top]=='{' && s[i]=='}') ||
                    (st[top]=='[' && s[i]==']')   )
            {
            	cout<<"In else if\n";
               top--;
            }
            else{
            	cout<<"In inner else\n";
            	return "NO";
			}
                
        }
        if(isEmpty()){
        	cout<<top<<endl;
        	cout<<"in decision if\n";
        	return "YES";
		}
		else{
			cout<<top<<endl;
			cout<<"IN decision else\n";
			return "NO";
		}
			
            
    }
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    	string s;
    	cin>>s;
    	string r= isBalanced(s);
    	cout<<r<<endl;
    	top=-1;
	}

    return 0;
}

