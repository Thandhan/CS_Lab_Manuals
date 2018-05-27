#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 5
int s[MAX],top=-1;
void push();
void pop();
void display();
int ispalindrome(char []);
void main()
{
	int ch;
	char str[30];
	for(;;)
	{
		printf("Implementation of stack of integers using array\n");
		printf("1.Push\n2.Pop\n3.Display\n4.Demo on how stack can be used to check palindrome\n5.Exit\n");
		printf("Enter your choice:\t");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			printf("\nEnter the string\n");
			scanf("%s",str);
			if(ispalindrome(str))
				printf("The given string %s is palindrome",str);
			else
				printf("The given string %s is not palindrome",str);
			break;
		default:
			exit(0);
		}
	}
}
void push()
{
	int item;
	if(top==MAX-1)
		printf("STACK OVERFLOW\n");
	else
	{
		printf("Enter the element:\t");
		scanf("%d",&item);
		top=top+1;
		s[top]=item;
	}

}
void pop()
{
	int item;
	if(top==-1)
		printf("STACK UNDERFLOW\n");
	else
	{
		item=s[top];
		printf("The deleted element is %d:\t",item);
		top=top-1;
	}
}
void display()
{
	int i;
	if(top==-1)
		printf("\nThe stack is empty\n");
	else
	{
		printf("\nThe elements present is stack are\n");
		for(i=top;i>=0;i--)
			printf("\t%d\n",s[i]);
	}
}
int ispalindrome(char str[])
{
	int i,top=-1;
	char s[30],stk_item;
	for(i=0;i<strlen(str);i++)
		s[++top]=str[i];
	for(i=0;i<strlen(str);i++)
	{
		stk_item=s[top--];
		if(str[i]!=stk_item)
			return 0;
	}
		return 1;
}
