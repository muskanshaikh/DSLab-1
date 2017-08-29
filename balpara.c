/*
*Description:balanced parathesis program
*Author:khanheena
*Roll no:16co04
*/
#include<stdio.h>
#include<ctype.h> //for isalpha() function

typedef struct balanced
{
char a[30];
 int top;
 }stack;
 
 void push(stack *s ,char c);
 char pop(stack* s);
void checkcountinuity(char exp[]);
int isMatchingpair(char left,char right);


int isMatchingpair(char left,char right)
{
 switch (left)
{
  case '(' : if(right==')')
	   return 1;
	   else 
	   return 0;
 
  case '{' : if(right=='}')
	   return 1;
	  else
	    return 0;
  case '[' : if(right==']')
	    return 1;
	  else
	    return 0;
  default:
		 return 0;
   
}
}

void checkcountinuity(char exp[])
{
 int i;
 char c;
 stack s;
 s.top==-1;
 for (i=0;exp[i]!='\0';i++)
{
	 if (exp[i]=='{'||exp[i]=='('||exp[i]=='[')
	 push(&s,exp[i]);
	 else
	 {
		 if(s.top==-1)
		 printf("expression is invalid");
	 else
		return pop(&s);

	 if (isMatchingpair(c,exp[i]))
	      continue;
	 else
	 {
	    printf("expression is invalid");
	    return;
	}
	}
	}
	if(s.top==-1)
	printf("expression is valid");
	else
	printf("expression is invalid");
}
 
 void push(stack *s,char opr)
{
	if(s->top>29)
	{
		printf("stack is full");
		return;
	}
	else
	{
	s->top++;
	s->a[s->top]=opr;
}
}

char pop(stack *s)
{
	if (s->top==-1)
	{
		printf("stack is empty\n");
		return 0;
    }
    else
    {
		char data=s->a[s->top--];
		return data;
    }
}




int  main()
 {
 char expression[30];
 printf("\nENTER EXPRESSION CONTAINING ONLY PARANTHESIS\n");
 scanf("%s",expression);
checkcontinuity(expression)
 return 0; 
 }
 
