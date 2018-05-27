							1st Program


#include<stdio.h>
#include<stdlib.h>
int a[20],n;
void create();
void display();
void insert();
void delete();
int main()
{
	int choice;
	do
	{
		printf("Implementation of Array Output\n");
		printf("Menu\n");
		printf("1.Create\n2.Display\n3.Insert\n4.Delete\n5.Exit\n");
		printf("enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			create();
			break;
		case 2:
			display();
			break;
		case 3:
			insert();
			 break;
		case 4:
			delete();
			break;
		case 5:
			exit(0);
			break;
		default:
			printf("Invalid choice\n");
			break;
		}
	}while(choice!=5);
return 0;
}
void create()
{
	int i;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void display()
{
	int i;
	printf("he array elements are\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
void insert()
{
	int i,pos,val;
	printf("Enter the position for new element\n");
	scanf("%d",&pos);
	printf("Enter the value to be inserted\n");
	scanf("%d",&val);
	for(i=n-1;i>=pos;i--)
		a[i+1]=a[i];
	a[pos]=val;
	n=n+1;
	printf("Element %d inserted successfully\n");
}
void delete()
		{
	int i,pos,val;
	printf("Enter the position of element to be deleted\t");
	scanf("%d",&pos);
	val=a[pos];
	for(i=pos;i<n-1;i++)
		a[i]=a[i+1];
	n=n-1;
	printf("The element deleted is %d",val);
		}
