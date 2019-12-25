#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char ch;
cout<<"enter any character:" ;
cin>>ch;
if(ch>='a'&&ch<='z')
{
 cout<<ch<<"is lower case alphabet";
 }
else if(ch>='A'&&ch<='Z')
{
 cout<<ch<<"is upper case alphabet";
 }
else
cout<<ch<<"is not an alphabet";
getch();
}