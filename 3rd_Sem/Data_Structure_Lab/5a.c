#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
float stack[20];
int top=-1;
void push(float num);
float pop();
float evalpost(char postfix[],float data[]);
void main()
{
	int i=0;
	char postfix[20];
	float value[20],res;
	printf("Enter the postfx expression :\n");
	scanf("%s",postfix);
	while(postfix[i]!=NULL)
	{
		if(isalpha(postfix[i]))
		{
			printf("\nEnter the value of %c\t",postfix[i]);
			scanf("%f",&value[i]);
		}
		i++;
	}
	res=evalpost(postfix,value);
	printf("\nResult of %s=%f",postfix,res);
}
float evalpost(char postfix[],float data[])
{
	int op1,op2;
	float res;
	char ch;
	int i=0;
	while(postfix[i]!=NULL)
	{
		ch=postfix[i];
		if(isalpha(postfix[i]))
			push(data[i]);
		else
		{
			op2=pop();
			op1=pop();
		}
		switch(ch)
		{
		case '+':push(op1+op2);
		break;
		case '*':push(op1*op2);
		break;
		case '-':push(op1-op2);
		break;
		case '/':push(op1/op2);
		break;
		case '%':push(op1%op2);
		break;
		case '^':push(pow(op1,op2));
		break;
		}
		i++;
	}
	res=pop();
	return res;
}
void push(float num)
{
	top=top+1;
	stack[top]=num;
}
float pop()
{
	float num;
	num=stack[top];
	top=top-1;
	return num;
}
