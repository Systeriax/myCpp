#include <iostream>
using namespace std;

int main()
{
    //定义数到几，猴子数，数组和计数
    int M, N, a[105], cnt;
    //输入数到几猴子出局和猴子数
    cin>>N>>M;
    for(int i=1; i<=N; i++)
    {
    	//记录猴子出局的状态初始值为零
    	a[i]=0;
    }
    //定义i
    int i=1;
    while(true)
    {
		//计数初始值为零
		cnt=0;
		//当计数不等于数到几猴子出局
		while(cnt!=M)
    	{
    		//判断是否为零
    		if(a[i]==0)
    		{
    			//如果是计数加1
    			cnt++; //cnt=3
    			//如果是零且计数等于数到几的数
    			if(cnt==M)
    			//跳出判断
    			break;
    		}
    		i++;	
    		//如果i>猴子数，i=1
    		if(i>N)
    		{
    			i=1;
    		}

    	}
    	cnt=0;
    	a[i]=1;   
    	//输出出圈猴子的编号
    	cout<<i<<" ";
 		int n um = 0, j, id=0;
    	for(j=1; j<=N; j++)
    	{
    		if(a[j]==0)
    		{
    			num++;
    			id=j;
    		}
    	}
    	if(num==1)
		{
			cout << id;
			break;
		}
    }
}