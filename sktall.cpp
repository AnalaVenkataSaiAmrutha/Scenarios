#include<stdio.h>
int main()
{
	int t,j,n,fir,sec,cnt1=0,cnt2=0,ind,k;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		ind=0;
		cnt2=0;
		cnt1=0;
		fir=0;
		scanf("%d",&n);
		scanf("%d",&fir);
		for(j=1;j<n;j++)
		{
			sec=0;
		    scanf("%d",&sec);
		    //printf("%d ",sec);
			if(fir>sec)
			{
				if(cnt1==0)
				 k=j-1;
				cnt1++;
				
			}
			else
			{
				if(cnt2==0)
				{
					cnt2=cnt1;
					//fir=sec;
					//cnt1=0;
					//printf("%d ",cnt2);
				}
				else if(cnt1>cnt2)
				{
					cnt2=cnt1;
					ind=j;
					//fir=sec;
					//cnt1=0;
					//printf("%d ",cnt2);
				}
				fir=sec;
				cnt1=0;
			}
			
				
		}
		if(cnt1!=0)
		{
			if(cnt1>cnt2)
				{
					cnt2=cnt1;
					ind=k;
					fir=sec;
					cnt1=0;
				}
				//printf("%d ",cnt2);
		}
		printf("%d ",ind+1);
	}
	return 0;
}
