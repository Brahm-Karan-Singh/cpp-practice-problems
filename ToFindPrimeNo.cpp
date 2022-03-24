#include <iostream>
using namespace std;

int main()
{
    int start, flag = 0, end;
    cout << "Enter starting number --> " << endl;
    cin >> start;
    cout << "Enter ending number --> " << endl;
    cin >> end;

    if (start <= 1)
        cout << "Please enter a valid number !!!" << endl;
    else
    {
        for (int i = start; i <= end; i++)
        {
            flag = 0;
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    cout << "The number " << i << " is not prime" << endl;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "The number " << i << " is prime" << endl;
            }
        }
    }
}