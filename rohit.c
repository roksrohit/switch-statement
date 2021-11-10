#include<stdio.h>
int main()
{
int x,y, result;
char op;
scanf("%d%c%d",&x,&op,&y);
switch(op)
{
case '+': result = x+y;
          break;
case '-': result = x-y;
          break;
case '*': result = x*y;
          break; 
case '/': result = x/y;
          break; 
case '%': result = x%y;
          break;
default : printf ("invalid operation");
}
        printf("%d",result);
 return 0;
} 
