#include<cstdio>
 
const int maxn=10000+10;
char st[maxn];
 
int main()
{
	scanf("%s",st);
	for (int i=0;st[i];)
	if (st[i]=='.') {printf("0");i++;} else
	if (st[i]=='-' && st[i+1]=='.') {printf("1");i+=2;}
	else {printf("2");i+=2;}
}