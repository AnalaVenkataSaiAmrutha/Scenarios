/*
Password Validator
Input:Sololearn
Output:false
Input:$oloLearn7
Output:true
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,l,a,b,c,d;
	gets(s);
	l=strlen(s);
	if(l>=8 && l<100)
	{
	
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		a++;
		else if(s[i]>='a'&&s[i]<='z')
		b++;
		else if(s[i]>='A'&&s[i]<='Z')
		c++;
		else
		d++;
	}
	if(a>0&&b>0&&c>0&&d>0)
	printf("true");
	else
	printf("false");
  }
  else
  printf("false");
  return 0;
}

