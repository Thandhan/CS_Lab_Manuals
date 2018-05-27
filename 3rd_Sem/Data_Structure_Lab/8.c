#include<stdio.h>
int count=0;
struct node
{
	struct node *prev;
	int ssn;
	float sal;
	char name[20],dept[10],desg[20],phno[25];
	struct node *next;
}*first,*temp,*last;
void create()
{
	temp=(struct node*)malloc(sizeof(struct node));
	temp->prev=NULL;
	temp->next=NULL;
	printf("\nEnter ssn,name,department,designation,salary and phone number of employee :");
	scanf("%d %s %s %s %f %s",&temp->ssn,temp->name,temp->dept,temp->desg,&temp->sal,temp->phno);
	count++;
}
void insertbeg()
{
	if(first==NULL)
	{
		create();
		first=temp;
		last=first;
	}
	else
	{
		create();
		temp->next=first;
		first->prev=temp;
		first=temp;
	}
}
void insertend()
{
	if(first==NULL)
	{
		create();
		first=temp;
		last=first;
	}
	else
	{
		create();
		last->next=temp;
		temp->prev=last;
		last=temp;
	}
}
void displaybeg()
{
	temp=first;
	if(temp==NULL)
	{
		printf("List is empty to display\n");
		return;
	}
	printf("\nLinked list elements from beginning:\n");
	while(temp!=NULL)
	{
		printf("%d\t%s\t%s\t%s\t%f\t%s\n",temp->ssn,temp->name,temp->dept,temp->desg,temp->sal,temp->phno);
		temp=temp->next;
	}
	printf("\nNo. of employees =%d\n",count);
}
int deleteend()
{
	temp=first;
	if(temp->next==NULL)
	{
		free(temp);
		first=NULL;
		return 0;
	}
	else
	{
		temp=last;
		last=last->prev;
		last->next=NULL;
		temp->prev=NULL;
		printf("%d\t%s\t%s\t%s\t%f\t%s\n",temp->ssn,temp->name,temp->dept,temp->desg,temp->sal,temp->phno);
		free(temp);
	}
	count--;
	return 0;
}
int deletebeg()
{
	temp=first;
	if(temp->next==NULL)
	{
		free(temp);
		first=NULL;
	}
	else
	{
		first=first->next;
		first->prev=NULL;
		printf("%d\t%s\t%s\t%s\t%f\t%s\n",temp->ssn,temp->name,temp->dept,temp->desg,temp->sal,temp->phno);
		free(temp);
	}
	count--;
	return 0;
}
void main()
{
	int ch,n,i;
	first=temp=last=NULL;
	printf("MENU\n");
	printf("1.Create a DLL of n employee\n");
	printf("2.Diplay from beginning");
	printf("\n3.Insert at end\n4.Delete at end");
	printf("\n5.Insert at beg\n6.Delete at beg");
	printf("\n7.Exit\n");
	while(1)
	{
		printf("\nEnter choice :");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
			printf("\nEnter the number of employees :");
			scanf("%d",&n);
			for(i=0;i<n;i++)
				insertend();
			break;
		case 2:
			displaybeg();
			break;
		case 3:
			insertend();
			break;
		case 4:
			deleteend();
			break;
		case 5:
			insertbeg();
			break;
		case 6:
			deletebeg();
			break;
		case 7:
			exit(0);
		default:
			printf("Invalid Choice\n");
		}
	}
}
