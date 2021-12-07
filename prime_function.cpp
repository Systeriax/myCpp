#include <iostream>
using namespace std;
bool prime(int n)
{
    for(int i=2; i<=n-1; i++)
    {
        if(n%i==0) return 0;
    }
    return 1; 
}
int main() 
{
    int n, a, b;
    cin >> n; 
    for(int i=2; i<=n/2; i++)
    {
        a=i;
        b=n-i;
        if(prime(a)&&prime(b))
        {
            cout << n << "=" << a << "+" << b << endl;
        }
    }
}