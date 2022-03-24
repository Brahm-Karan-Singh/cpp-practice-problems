#include <iostream>
#include <math.h>
using namespace std;

long BinToDec(long binary){
    long storedResult = 0;
    int i=0;
    while(binary != 0){
        int digit = binary % 10;
        cout<<digit<<i<<endl;
        if(digit == 1)
            storedResult += pow(2,i++);
        else    
            i++;

        binary = binary/10;

    }
    return storedResult;
}

int main(){
    long binaryNumber;
    cout<<"Enter the binary number"<<endl;
    cin>>binaryNumber;
    long result = BinToDec(binaryNumber);
    cout<<"The result is: "<<result<<endl;
}