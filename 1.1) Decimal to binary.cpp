#include<iostream>
#include<cmath>
using namespace std;

int ReversedBinary(int n)
{
    int remainder;
    int ans = 0;
    while(n>0){
        remainder = n%2;
        ans = ans*10 + remainder;
        n=n/2;
    }

    return ans;
}
int main()
{
    int a, b;
    cout<<"Enter your Decimal number: ";
    cin>>a;
    b=ReversedBinary(a);
    int Reverse = 0;
    while(b>0){
        int lastdigit = b%10;
        Reverse = Reverse * 10 + lastdigit;
        b=b/10;
    }

    cout<<"The binary value of "<<a<<" is: "<<Reverse;

    return 0;
}

