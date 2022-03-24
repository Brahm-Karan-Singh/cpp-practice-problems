#include <iostream>
#include <math.h>
using namespace std;

long decToBin(long decimalNumber){
    long storedResult = 0;
    int i=0;
    while(decimalNumber != 0){
        int bit = decimalNumber & 1;
        cout<<i << bit<<endl;
        storedResult = bit* pow(10,i) + storedResult;
        decimalNumber = decimalNumber>>1;
        i++;
    }
    return storedResult;
}

int main(){
    long decimalNumber;
    cout<<"Enter the decimal number"<<endl;
    cin>>decimalNumber;
    long result = decToBin(decimalNumber);
    cout<<"The result is: "<<result<<endl;
}