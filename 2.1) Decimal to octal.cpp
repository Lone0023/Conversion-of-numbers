#include<iostream>
#include<cmath>
using namespace std;

int octal(int n)
{
    int remainder;
    int ans = 0;
    while(n>0){
        remainder = n%8;
        ans = ans*10 + remainder;
        n=n/8;
    }
    int c = ans;
    int Reverse = 0;
    while(c>0){
        int lastdigit = c%10;
        Reverse = Reverse * 10 + lastdigit;
        c=c/10;
    }

    return Reverse;
}
int main()
{
    int a, b;
    cout<<"Enter your Decimal number: ";
    cin>>a;
    cout<<"The octal value of "<<a<<" is: "<<octal(a);
    return 0;
}


