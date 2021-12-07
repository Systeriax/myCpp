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
    int v, m, b;
    cin >> v; 
    int k=0;
    for(int i=2; i<=v-2; i++)
    {
        b=i;
        m=i+2;
        if(prime(b)&&prime(m))
        {
            cout << b << " " << m << endl;
            k=1;
        }
    }
    if(k==0)
    {
        cout << "empty" << endl; 
    }
    
}