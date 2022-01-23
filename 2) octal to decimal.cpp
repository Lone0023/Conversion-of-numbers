#include<iostream>
#include<cmath>
using namespace std;

int deci(int n)
{
    int lastdigit;
    int ans = 0;
    int power = 0;
    while (n>0)
    {
        lastdigit = n%10;
        ans = ans + lastdigit*pow(8,power);
        power++;
        n=n/10;
    }
    return ans;

}
int main()
{
    int a;
    cout<<"Enter your octal number: ";
    cin>>a;
    cout<<"The decimal value of "<<a<<" is: "<<deci(a);

    return 0;
}

