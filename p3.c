#include<stdio.h>
char st[1000];int t=-1;
void push(char x)
{
	t++;
	st[t]=x;
}
void pop()
{
	t--;
}
int main()
{
	char s[1000];int ch=0;
	gets(s);
	int l=strlen(s);
	for(int i=0;i<l;i++)
	{
		if(s[i]=='{' || s[i]=='(' || s[i]=='[')
		{
			push(s[i]);
		}
		else if(s[i]=='}' || s[i]==')' || s[i]==']')
		{
			if(st[t]=='{' && s[i]=='}') pop();
			else if(st[t]=='[' && s[i]==']') pop();
			else if(st[t]=='(' && s[i]==')') pop();
			else
			{
				ch=1;
				break;
			}
		}
		else continue;
	}
	if(ch==0) printf("True");
	else printf("false");
}