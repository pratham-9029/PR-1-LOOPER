//Devlop a program to cout the total number of digits in number.

#include<iostream>
using namespace std;

int main()
{
    int i=0,num;

    cout << "Enter the Number : ";
    cin >> num;

    while(num > 0)
    {
        num /= 10;
        i++;
    }

    cout << i;
    return 0;
}