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
int main() 
{
    int n, m;
    double sum=0;
    cin >> m >> n; 
    for(int i=m; i<=n; i++)
    {
        if(prime(i))
        {
            sum+=sqrt(i); 
        }
    }
    cout << sum << " ";
}