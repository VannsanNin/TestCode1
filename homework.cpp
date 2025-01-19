#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3,num4,num5;
    int sum;
    cout<< "Input Number 1  :";cin>>num1;
    cout<< "Input Number 2  :";cin>>num2;
    cout<< "Input Number 3  :";cin>>num3;
    cout<< "Input Number 4  :";cin>>num4;
    cout<< "Input Number 5  :";cin>>num5;
    sum = (num1+num2+num3+num4+num5)/5;
    cout << "Average is :"<< sum;
}