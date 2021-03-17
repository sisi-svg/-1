#include<stdio.h>
#include<algorithm>
using namespace std;
void solve(int a[],int n,int &x)
{
	sort(a,a+n);
	int maxnum=0;
	int e=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]==e)
		{
			n++;
			if(n>maxnum)
			{
				maxnum=n;
				x=e;
			}
		}
	    else 
		{
			e=a[i];
			n=1;
		}
	}
	if(maxnum>n/2)
	    printf("出现次数超过所有元素一半的元素为：%d\n",x);
	else
		printf("不存在次数超过所有元素一半的元素\n");
}
int main()
{
	int a[]={2,2,2,4,5,6,2};
	int n=sizeof(a)/sizeof(a[0]);
	int x;
	solve(a,n,x);
	return 0;
}
