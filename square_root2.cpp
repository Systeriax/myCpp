#include <iostream>
#include <math.h>
using namespace std;
bool check (int n)
{
    int m=sqrt(n);
    if(m*m==n) return 1; 
    else return 0;
}
bool fun (int n)
{
    int a=n%10; 
    int b=n/10%10;
    int c=n/100;
    if(a==b||a==c||b==c) return 1;
    else return 0;
}
int main() 
{
    int n,k=0;
    cin >> n;
    for(int i=100; i<=999; i++)
    {
        if(check(i)==1&&fun(i)==1)
        {
            k++;
            if(k==n)
            {
                cout << i;
                break; 
            }
        }
    }
}