#include<stdio.h>
#include<stdlib.h>
struct node
{
	int usn;
	char name[25];
	char branch[25];
	int sem;
	char phno[10];
	struct node *link;
};
typedef struct node *NODE;
int count=0;
NODE getnode()
{
	NODE newnode;
	newnode=(NODE)malloc(sizeof(struct node));
	if(newnode==NULL)
		printf("Cannot be allocated");
	return newnode;
}
NODE insert_front(NODE first)
{
	NODE temp;
	temp=getnode();
	printf("\nEnter the usn");
	scanf("%d",&temp->usn);
	printf("\nEnter the name");
	scanf("%s",temp->name);
	printf("\nEnter the branch");
	scanf("%s",temp->branch);
	printf("\nEnter the semester");
	scanf("%d",&temp->sem);
	printf("\nEnter the contact number");
	scanf("%s",temp->phno);
	temp->link=first;
	return temp;
}
NODE insert_rear(NODE first)
{
	NODE temp,cur;
	temp=getnode();
	printf("\nEnter the usn");
	scanf("%d",&temp->usn);
	printf("\nEnter the name");
	scanf("%s",temp->name);
	printf("\nEnter the branch");
	scanf("%s",temp->branch);
	printf("\nEnter the semester");
	scanf("%d",&temp->sem);
	printf("\nEnter the contact number");
	scanf("%s",temp->phno);
	temp->link=NULL;
	if(first==NULL)
		return temp;
	cur=first;
	while(cur->link!=NULL)
		cur=cur->link;
	cur->link=temp;
	return first;
}
void display(NODE first)
{
	NODE temp;
	if(first==NULL)
	{
		printf("\nList is empty");
		return;
	}
	printf("\nThe contents of the list are\n");
	printf("\nName\tUSN\tBranch\tSem\tPhone Number\n");
	temp=first;
	while(temp!=NULL)
	{
		printf("%s\t%d\t%s\t%d\t%s\n",temp->name,temp->usn,temp->branch,temp->sem,temp->phno);
		temp=temp->link;
	}
}
NODE delete_front(NODE first)
{
	NODE temp;
	if(first==NULL)
	{
		printf("\nList is empty");
		return first;
	}
	temp=first;
	temp=temp->link;
	printf("\nDetails Deleted");
	free(first);
	return temp;
}
NODE delete_rear(NODE first)
{
	NODE cur,prev;
	if(first==NULL)
	{
		printf("\nList is empty");
		return first;
	}
	if(first->link==NULL)
	{
		printf("Details deleted");
		free(first);
		return NULL;
	}
	prev=NULL;
	cur=first;
	while(cur->link!=NULL)
	{
		prev=cur;
		cur=cur->link;
	}
	printf("Details deleted");
	free(cur);
	prev->link=NULL;
	return first;
}
void main()
{
	NODE first=NULL;
	int ch,n,i;
	for(;;)
	{
		printf("\n1.Push Front\n2.Push Rear\n3.Pop front\n4.Pop rear\n5.Display\n6.Exit\n");
		printf("Enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:printf("Enter the value of n students for SLL");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			first=insert_front(first);
			count++;
		}
		break;
		case 2:first=insert_rear(first);
		count++;
		break;
		case 3:first=delete_front(first);
		count--;
		break;
		case 4:first=delete_rear(first);
		count--;
		break;
		case 5:printf("Number of nodes are %d",count);
		display(first);
		break;
		case 6:exit(0);
		}
	}
}
