#include<stdio.h>
#include<conio.h>
void main()
{
char s1[100],s2[100];
int i,j=0,len;
clrscr();
printf("Enter the string");
scanf("%s",s1);
while(s1[j]!='\0')
{
j++;
for(i=0;i<j;i++)
s2[j-i-1]=s1[i];
s2[i]='\0';
}
printf("reversed string %s ",s2);
len=strlen(s2);
for(i=0;i<=len;i++;
if((s2[i]!='a'&&s2[i]!='e'&&s2[i]!='i'&&s2[i]!='o'&&s2[i]!='u')||(s2[i]!='A'&&s2[i]!='E'&&s2[i]!='I'&&s2[i]!='O'&&s2[i]!='U'))
{
printf("%c",s2[i]);
}
getch();
}
