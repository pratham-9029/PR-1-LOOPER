//Devlop a program to find the sum of first and last digit.

#include<iostream>
using namespace std;

int main()
{
    int i,num,ld,fd;

    cout << "Enter The Number: ";
    cin >> num;

    ld = num % 10;

    for(i=num; num > 0; num/=10)
    {
        fd = num % 10;
    }

    cout << "The sum of First Digit And Last Digit is : " << fd + ld ;

    return 0;
}