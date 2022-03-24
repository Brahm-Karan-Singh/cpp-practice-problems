#include<bits/stdc++.h>
using namespace std;

bool checkPythagoreanTriplet(int a,int b,int c){
    int x,y,z;
    x = max(a,max(b,c));
    if(x == a){
        y = b;
        z = c;
    }
    else if(x == b){
        y = a;
        z = c;
    }
    else{
        y = a;
        z = b;
    }
    int ab =x*x == (y*y) + (z*z)? true:false;
}

int main(){
   int a,b,c;
   cout<<"Enter three numbers\n";
   cin>>a>>b>>c;

   if(checkPythagoreanTriplet(a,b,c))
   {
       cout<<"the numbers are pythagorean triplet";
   }else{
       cout<<"the numbers are not pythagorean triplet";

   }
   
   return 0;
}