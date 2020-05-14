#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node * next;
}*head;
void create(int n);
int main()
{
	int n;
	printf("Enter the number of nodes to be created: ");
	scanf("%d",&n);
	create(n);
	return 0;
}
void create(int n)
{
	struct node *newnode,*temp;
	int d;
	head=(struct node*)malloc(sizeof(struct node));
	if(head==NULL)
	{
		printf("Memory can't be allocated");
		return ;
	}
	
	else
	{
		printf("Enter the data for the 1 node: ");
		scanf("%d",&d);
		head->data=d;
		head->next=NULL;
	}
	temp=head;
	for(int i=1;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data for the %d node: ",i+1);s
		scanf("%d",&d);
		newnode->data=d;
		newnode->next=NULL;
		temp->next=newnode;
		temp=temp->next;
	}
	
}
