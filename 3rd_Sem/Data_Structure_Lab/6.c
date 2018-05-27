#include<stdio.h>
#include<stdlib.h>
#define QUE_SIZE 5
int f=0,r=-1,count=0;
void insert_rear(char,char []);
void del_front(char []);
void display(char []);
int main()
{
	int choice;
	char item,cq[20];
	for(;;)
	{
		printf("Implementation of Circular Queue\n");
		printf("Menu\n");
		printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
		printf("Enter your choice : \n");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:printf("Enter the item to be inserted\n");
		scanf(" %c",&item);
		insert_rear(item,cq);
		break;
		case 2:del_front(cq);
		break;
		case 3:display(cq);
		break;
		case 4:exit(0);
		default:printf("Invalid choice\n");
		break;
		}
	}
	return 0;
}
void insert_rear(char item,char cq[])
{
	if(count==QUE_SIZE)
	{
		printf("CIRCULAR QUEUE IS FULL\n");
		return;
	}
	r=(r+1)%QUE_SIZE;
	cq[r]=item;
	count=count+1;
}
void del_front(char cq[])
{
	if(count==0)
	{
		printf("CIRCULAR QUEUE IS EMPTY\n");
		return;
	}
	printf("The deleted element is %c\n",cq[f]);
	f=(f+1)%QUE_SIZE;
	count=count-1;
}
void display(char cq[])
{
	int i,j;
	if(count==0)
	{
		printf("CIRCULAR QUEUE IS EMPTY\n");
		return;
	}
	printf("Contents of the circular queue are :\n");
	j=f;
	for(i=1;i<=count;i++)
	{
		printf("%c\n",cq[j]);
		j=(j+1)%QUE_SIZE;
	}
}
