/*
Utopian tree
Sample Input:
3
0
1
4
Sample Output:
1
2
7
*/
#include<stdio.h>
int main()
{
	int t,n[60],i,j,h=1;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
		scanf("%d",&n[j]);
    }
    for(j=0;j<t;j++)
    {
		for(i=0;i<=n[j];i++)
		{
			if(i==0)
			h=1;
			else if(i%2==0)
			h=h+1;
			else
			h=h*2;
		}
		printf("%d\n",h);
	}
	return 0;
	
}
