#include <iostream>
using namespace std;

int main()
{
    int N, a[105];
    int minn=1000;
    //输入
    cin >> N;
    //输入数组
    for(int i=1; i<=N; i++)
    {
    	cin >> a[i];
    }
    //找出数组中的最小值
    for(int i=1; i<=N; i++)
    {
    	if(minn>a[i])
    	{
    		minn=a[i];
    	}
    }
    
    int maxN=0;
    for(int i=1; i<= minn; i++)
    {
	    int flag=0;
		//判断i是否是公约数，是则flag=1
    	for(int j=1; j<=N; j++)
    	{
    		if(a[j]%i==0)
    		{
    			flag++;
    		}
    	}
    	//如果是公约数，则记录最大的数
    	if(flag==N)
		{
			if(i>maxN)
			{
				maxN=i;
			}
		}
    }
	cout << maxN;
	
}
