//Devlop a program that print all alphabet a to z bt skipping 3 alphabets using do-while loop.

#include<iostream>
using namespace std;

int main()
{
    char alpha='a';

    do{
        cout << alpha << " ";
        alpha += 4;
    }
    while(alpha <= 'z');

    return 0;
}