#include<stdio.h>
#include<stdlib.h>
struct BST
{
	int item;
	struct BST *llink,*rlink;
};
typedef struct BST *NODE;
NODE insert(NODE);
void inorder(NODE);
void preorder(NODE);
void postorder(NODE);
NODE search(NODE,int);
void main()
{
	int choice,key;
	NODE root=NULL,tmp,parent;
	while(1)
	{
		printf("\n1.Create");
		printf("\n2.Traverse the tree in Preorder,Inorder,Postorder");
		printf("\n3.Search");
		printf("\n4.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			root=insert(root);
			break;
		case 2:
			if(root==NULL)
				printf("Tree is not created");
			else
			{
				printf("\nThe inorder display:");
				inorder(root);
				printf("\nThe preorder display:");
				preorder(root);
				printf("\nThe postorder display:");
				postorder(root);
			}
			break;
		case 3:
			printf("\nEnter element to be searched:");
			scanf("%d",&key);
			tmp=search(root,key);
			if(tmp==NULL)
				printf("Element does not exists\n");
			else
				printf("\nThe element %d found",tmp->item);
			break;
		default:exit(0);
		}
	}
}
NODE insert(NODE root)
{
	NODE temp,cur,prev;
	int item;
	printf("\nEnter the element");
	scanf("%d",&item);
	temp=(NODE)malloc(sizeof(struct BST));
	temp->llink=NULL;
	temp->rlink=NULL;
	temp->item=item;
	if(root==NULL)
		return temp;
	prev=NULL;
	cur=root;
	while(cur!=NULL)
	{
		prev=cur;
		if(item==cur->item)
		{
			printf("Duplicate items are not allowed\n");
			free(temp);
			return root;
		}
		if(item<cur->item)
			cur=cur->llink;
		else
			cur=cur->rlink;
	}
	if(item<prev->item)
		prev->llink=temp;
	else
		prev->rlink=temp;
	return root;
}
void inorder(NODE root)
{
	if(root!=NULL)
	{
		inorder(root->llink);
		printf("%d\t",root->item);
		inorder(root->rlink);
	}
}
void preorder(NODE root)
{
	if(root!=NULL)
	{
		printf("%d\t",root->item);
		preorder(root->llink);
		preorder(root->rlink);
	}
}
void postorder(NODE root)
{
	if(root!=NULL)
	{
		postorder(root->llink);
		postorder(root->rlink);
		printf("%d\t",root->item);
	}
}
NODE search(NODE root,int key)
{
	NODE cur;
	if(root==NULL)
		return NULL;
	cur=root;
	while(cur!=NULL)
	{
		if(key==cur->item)
			return cur;
		if(key<cur->item)
			cur=cur->llink;
		else
			cur=cur->rlink;
	}
	return NULL;
}
