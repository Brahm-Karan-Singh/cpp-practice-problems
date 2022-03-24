// Armstrong numbers are those numbers whose cube root of digits when sum is equal to that no. Ex-
// 153 = (1)^3 + (5)^3 + (3)^3
//     =  1 + 125 + 27
// 153 = 153

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int  number;
    double  savedNo, lastDigit, sum = 0;
    cout << "Enter any number -->" << endl;
    cin >> number;
    savedNo = number;
    while (number > 0)
    {
        lastDigit = number % 10;
        cout<<"last digit is "<<lastDigit<<endl;
        sum += pow(lastDigit,3);
        cout<<"sum = "<<sum<<"+"<<pow(lastDigit,3)<<endl;
        cout<<"The value of power is "<<pow(lastDigit,3)<<endl;
        cout <<"The value of sum is " << sum <<endl;
        number = number / 10;
        cout<<"number is "<<number<<endl;
    }
    if (savedNo == sum)
        cout << "The given number is armstrong" << endl;
    else
        cout << "The given number is not armstrong" << endl;
}