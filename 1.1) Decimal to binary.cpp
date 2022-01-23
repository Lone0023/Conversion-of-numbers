#include<cmath>
using namespace std;

int binary(int n)
{
    int remainder;
    int ans = 0;
    while(n>0){
        remainder = n%2;
        ans = ans*10 + remainder;
        n=n/2;
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
    int a;
    cout<<"Enter your Decimal number: ";
    cin>>a;
    cout<<"The binary value of "<<a<<" is: "<<binary(a);

    return 0;
}
