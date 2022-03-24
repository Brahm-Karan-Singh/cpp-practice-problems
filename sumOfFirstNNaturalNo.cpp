#include<bits/stdc++.h>
using namespace std;
int sumOfNumbers(int no){
    int result = (no*(no+1))/2;
    return result;
}

int main(){
   int no;
   cout<<"Enter number upto which you want sum of natural numbers"<<endl;
   cin>>no;

   int x = sumOfNumbers(no);
   cout<<"Your sum upto "<<no<<" natural numbers is "<<x<<endl;
   return 0;
}

