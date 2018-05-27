#include<stdio.h>
void towers(int,char,char,char);
int main()
{
	int n;
	printf("Enter the member of disks :");
	scanf("%d",&n);
	printf("The Tower of Hanoi involves the moves:\n");
	towers(n,'A','B','C');
	return 0;
}
void towers(int n,char source,char auxillary,char destination)
{
	if(n==1)
	{
		printf("\nMove disk 1 from tower %c to tower %c",source,destination);
		return;
	}
	towers(n-1,source,destination,auxillary);
	printf("\nMove disk %d from tower %c to tower %c",n,source,destination);
	towers(n-1,auxillary,source,destination);
}
