#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char *ch;
	int count=0;
	ch=(char*)malloc(10000*sizeof(char));
	scanf("%s",ch);
int l=strlen(ch);
	int i=0;
	for(i=0;i<l;i++)
   {
   	  if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
   	  
   	  count++;
   }
   printf("%d",count);
   return 0;
}