#include<stdio.h>
#include<string.h>
int top=-1;
char stack[20];
void push(char);
char pop();
void infix_to_postfix(char[],char[]);
int preced(char);
void main()
{
	char infix[50],postfix[50];
	printf("Enter the infix expression:");
	scanf(" %s",infix);
	infix_to_postfix(infix,postfix);
	printf("\nInfix expression :%s",infix);
	printf("\nPostfix expression :%s",postfix);
}
void infix_to_postfix(char infix[50],char postfix[50])
{
	int index=0,pos=0,len;
	char symbol,temp;
	len=strlen(infix);
	push('#');
	while(index<len)
	{
		symbol=infix[index];
		switch(symbol)
		{
		case '(':push(symbol);
		break;
		case ')':temp=pop();
		while(temp!='(')
		{
			postfix[pos]=temp;
			pos++;
			temp=pop();
		}
		break;
		case '+':
		case '-':
		case '*':
		case '/':
		case '^':
		case '%':
			while(preced(stack[top])>=preced(symbol))
			{
				temp=pop();
				postfix[pos]=temp;
				pos++;
			}
			push(symbol);
			break;
		default: postfix[pos++]=symbol;
		break;
		}
		index++;
	}
	while(top>0)
	{
		temp=pop();
		postfix[pos++]=temp;
	}
	postfix[pos]=NULL;
	return;
}
void push(char symb)
{
	top=top+1;
	stack[top]=symb;
}
char pop()
{
	char symb;
	symb=stack[top];
	top=top-1;
	return symb;
}
int preced(char symb)
{
	int p;
	switch(symb)
	{
	case '%':
	case '^':p=3;
	break;
	case '*':
	case '/':p=2;
	break;
	case '+':
	case '-':p=1;
	break;
	case ')':
	case '(':p=0;
	break;
	case '#':p=-1;
	break;
	}
	return p;
}
