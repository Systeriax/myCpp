#include <iostream>
#include <math.h>
using namespace std;
bool prime(int n) 
{
    for(int i=2; i<=n-1; i++)
    {
        if(n%i==0) return 0; 
    }
    return 1;
}
int fun(int a)
{
    int b=0;
    while(a!=0)
    {
        int c=a%10;
        b=b*10+c;
        a=a/10; 
    }
    return b;
}
int main() 
{
    int n, m;
    cin >> n >> m; 
    for(int i=n; i<=m; i++)
    {
        int j=fun(i);
        if(prime(i)&&prime(j)) cout << i << " ";
    }
}