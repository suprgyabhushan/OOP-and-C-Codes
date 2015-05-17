#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
char *name;
int age;
struct node *child1;
struct node * child2;
}parent;
void print(parent * start)
{
	parent * temp,*temp1,*ch1,*ch2;
	temp=start;
	while(temp!=NULL)
	{
		ch1=temp->child1;
		ch2=temp->child2;
		printf("%s %d\n",temp->name,temp->age);
		while(ch2!=NULL)
		{
			temp1=ch2->child1;	
			printf("%s %d\n",ch2->name,ch2->age);
			ch2=temp1;
		}
		temp=ch1;
	}
}
void input(parent * start)
{
	
	parent * temp,*temp1,*ch1,*ch2;
	temp=start;
	while(temp!=NULL)
	{
		ch1=temp->child1;
		ch2=temp->child2;
		scanf("%s %d",temp->name,&(temp->age));
		while(ch2!=NULL)
		{
			temp1=ch2->child1;	
			scanf("%s %d\n",ch2->name,&(ch2->age));
			ch2=temp1;
		}
		temp=ch1;
	}
}	
		
