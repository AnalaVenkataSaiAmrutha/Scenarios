#include<stdio.h>
int main()
{
	int t,j,n,fir,sec,cnt1=0,cnt2=0,ind;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		ind=0;
		scanf("%d",&n);
		scanf("%d",&fir);
		for(j=1;j<n;j++)
		{
			sec=0;
		    scanf("%d",&sec);
			if(fir>sec)
			{
				cnt1++;
			}
			else
			{
				if(cnt1>=cnt2)
				{
					cnt2=cnt1;
					ind=j;
					fir=sec;
				}
			}
			
				
		}
		printf("%d ",ind+1);
	}
	return 0;
}
