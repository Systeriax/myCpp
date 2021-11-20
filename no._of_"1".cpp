#include <iostream>
using namespace std;

int main()
{
    int n, n1, a[100005], m, b, cnt = 0, p, l;
    cin >> n;
    n1 = n;
    int i = 0;
    while (true)
    {
        //求余数
        m = n % 2;
        //求商
        b = n / 2;
        //把商换成下次的被除数
        n = b;
        //数组的循环计数1
        i = i + 1;
        //记录余数
        a[i] = m;
        if (b < 1)
        {
            break;
        }
    }
    for (int j = 1; j <= i; j++)
    {
        if (a[j] == 1)
        {
            cnt++;
        }
    }
    cout << cnt;
}