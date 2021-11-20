#include <iostream>
using namespace std;

int main()
{
    int l, n, p, m = 0, k = 1, q = 1, a0, a1, a[1005];
    cin >> a0 >> a1;
    int cnt = 0;
    for (int j = a0; j <= a1; j++)
    {
        l = n = j;
        k = 1;
        q = 1;
        while (n != 0)
        {
            p = n % 10;
            m = m * 10 + p;
            n = n / 10;
        }

        for (int i = 2; i <= l - 1; i++)
        {
            if (l % i == 0)
            {
                k = 0;
                // cout << "l:  " << l << " " << endl;
                break;
            }
        }
        for (int i = 2; i <= m - 1; i++)
        {
            if (m % i == 0)
            {
                q = 0;
                // cout << "m:  " << m << " " << endl;
                break;
            }
        }
        if (k == 1 && q == 1)
        {
            cnt++;
            a[cnt] = l;
        }
    }

    for (int i = 1; i <= cnt; i++)
    {
        cout << a[i] << "  ";
    }
}