#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node
{
	int cf,px,py,pz,flag;
	struct node *link;
};
typedef struct node *NODE;
NODE create_node()
{
	NODE ptr;
	ptr=(NODE)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("Out of Memory\n");
		exit(0);
	}
	return ptr;
}
NODE insert_end(int cf,int x,int y,int z,NODE head)
{
	NODE temp,ptr;
	ptr=create_node();
	ptr->cf=cf;
	ptr->px=x;
	ptr->py=y;
	ptr->pz=z;
	ptr->flag=0;
	temp=head->link;
	while(temp->link!=head)
		temp=temp->link;
	temp->link=ptr;
	ptr->link=head;
	return head;
}
void display(NODE head)
{
	NODE temp;
	if(head->link==head)
	{
		printf("\nPolynomial doesn't exists\n");
		return;
	}
	temp=head->link;
	while(temp!=head)
	{
		if(temp->cf<0)
			printf("%dx^%dy^%dz^%d",temp->cf,temp->px,temp->py,temp->pz);
		else
			printf("+%dx^%dy^%dz^%d",temp->cf,temp->px,temp->py,temp->pz);
		temp=temp->link;
	}
	printf("\n");
}
NODE add_poly(NODE h1,NODE h2,NODE h3)
{
	NODE p1,p2;
	int x1,x2,y1,y2,z1,z2,cf1,cf2,cof;
	p1=h1->link;
	while(p1!=h1)
	{
		x1=p1->px;
		y1=p1->py;
		z1=p1->pz;
		cf1=p1->cf;
		p2=h2->link;
		while(p2!=h2)
		{
			x2=p2->px;
			y2=p2->py;
			z2=p2->pz;
			cf2=p2->cf;
			if(x1==x2 && y1==y2 && z1==z2)
				break;
			p2=p2->link;
		}
		if(p2!=h2)
		{
			cof=cf1+cf2;
			p2->flag=1;
			if(cof!=0)
				h3=insert_end(cof,x1,y1,z1,h3);
		}
		else
			h3=insert_end(cf1,x1,y1,z1,h3);
		p1=p1->link;
	}
	p2=h2->link;
	while(p2!=h2)
	{
		if(p2->flag==0)
			h3=insert_end(p2->cf,p2->px,p2->py,p2->pz,h3);
		p2=p2->link;
	}
	return h3;
}
NODE read_poly(NODE head)
{
	int i,cf,x,y,z;
	printf("\n\nEnter the coefficient and stop polynomial reading enter -999\n");
	for(i=1;;i++)
	{
		printf("Enter the %d term\n",i);
		printf("coeff=");
		scanf("%d",&cf);
		if(cf==-999) break;
		printf("pow x=");
		scanf("%d",&x);
		printf("pow y=");
		scanf("%d",&y);
		printf("pow z=");
		scanf("%d",&z);
		head=insert_end(cf,x,y,z,head);
	}
	return head;
}
void polysum()
{
	NODE h1,h2,h3;
	h1=create_node();
	h2=create_node();
	h3=create_node();
	h1->link=h1;
	h2->link=h2;
	h3->link=h3;
	printf("\n\nEnter the first polynomial\n");
	h1=read_poly(h1);
	printf("\n\nEnter the seconf polynomial\n");
	h2=read_poly(h2);
	h3=add_poly(h1,h2,h3);
	printf("\nThe first polynomial is\n");
	display(h1);
	printf("\nSecond polynomial is\n");
	display(h2);
	printf("\nThe sum of two polynomial is\n");
	display(h3);
}
void eval()
{
	NODE h,temp;
	int x,y,z;
	int sum=0;
	h=create_node();
	h->link=h;
	printf("\n\nEnter the polynomial\n");
	h=read_poly(h);
	printf("\nPolynomail is \n");
	display(h);
	printf("\nEnter the values of variables x,y and z\n");
	scanf("%d%d%d",&x,&y,&z);
	if(h->link==h)
		printf("\nPolynomial is empty");
	else
	{
		temp=h->link;
		while(temp!=h)
		{
			sum+=temp->cf*pow(x,temp->px)*pow(y,temp->py)*pow(z,temp->pz);
			temp=temp->link;
		}
		printf("\n\nThe total sum is:: %d\n",sum);
	}
	return;
}
void main()
{
	int ch;
	for(;;)
	{
		printf("\n\n1.Represent and Evaluate\n2.Add Two poly\n3.Exit");
		printf("\n\nEnter your Choice :");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:eval(); break;
		case 2:polysum(); break;
		default: exit(0);
		}
	}
}
