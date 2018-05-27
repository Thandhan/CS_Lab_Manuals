#include<stdio.h>
void read();
int pattern_match();
char mainstr[100],pat[100],replace[100],ans[100];
int j;
int main()
{
	int found;
	printf("Program to perform pattern string matching\n");
	read();
	found=pattern_match();
	if(found==0)
		printf("Pattern not found\n");
	else
	{
		ans[j]=NULL;
		printf("The resultant string is %s\n",ans);
	}
}
void read()
{
	printf("Enter the main string\n");
	gets(mainstr);
	printf("Enter pattern string\n");
	gets(pat);
	printf("Enter the replace string\n");
	gets(replace);
}
int pattern_match()
{
	int i,c,m,k,flag=0;
	i=m=c=0;
	while(mainstr[c]!=NULL)
	{
		if(mainstr[m]==pat[i])
		{
			i++;
			m++;
			if(pat[i]==NULL)
			{
				for(k=0;replace[k]!=NULL;k++,j++)
					ans[j]=replace[k];
				i=0;
				c=m;
				flag=1;
			}
		}
		else
		{
			ans[j]=mainstr[c];
			j++;
			c++;
			m=c;
			i=0;
		}
	}
	return flag;
}
