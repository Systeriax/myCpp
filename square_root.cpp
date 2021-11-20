#include <iostream>
using namespace std;

int main()
{
    int n, a[1005], j, cnt = 1, m;
    cin >> m;
    for (int i = 100; i <= 999; i++)
    {
        n = i;
        int b = n % 10;
        int c = n / 100;
        int d = n / 10 % 10;
        j = 1;
        while (n > 0)
        {
            n -= j;
            j += 2;
        }
        if (n == 0 && (b == c || c == d || b == d))
        {
            a[cnt] = i;
            cnt++;
        }
    }
    cout << a[m] << " ";
}
