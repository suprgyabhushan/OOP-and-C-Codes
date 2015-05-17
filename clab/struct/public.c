#include<stdio.h>
#include<stdlib.h>
#include "node.h"
node *get_input()
{
		node *p;
		int type;
		printf("Enter the type :   1 :Integer\t 2 :Double\t 3 :String \t ");
		fscanf(stdin,"%d",&type);
		if(type == 1)
		{
			int num;
			printf("Enter an integer -  ");
			fscanf(stdin,"%d",&num);
			p = newIntegerNode(num);
		}
		else if(type == 2)
		{
			float num;
			printf("Enter a real number -  ");
			fscanf(stdin,"%f",&num);
			p = newRealNode(num);
		}
		else if(type == 3)
		{
			char *line;
			line = (char *) malloc(sizeof(char)*50);
			printf("Enter a line in less than 50 words -  ");
			scanf("%s",line);
			p = newStringNode(line);
		}
		else
		return NULL;
		p->child = NULL;
		p->next = NULL;
	return p;		
}
node *parents()
{
	node *ptr, *temp1, *START;
	int cont, opt, count = 0;
	do
	{
		printf("\nPARENTS : ");
		ptr = get_input();
		if(count == 0)
		{
		 	START = ptr;
		 	count = 1;
		}
		else
		 	temp1 -> next = ptr;
		node *temp = ptr;
		printf("Does this parent have a child ? y/n <=> 1/0 -  ");
		fscanf(stdin,"%d",&opt);
		while(opt == 1)
		{
			temp->child = get_input();
			temp = temp->child;
			printf("Does the parent have another child ? y/n <=> 1/0 -  ");
		fscanf(stdin,"%d",&opt);
		}
		printf("Do you want to continue [y/n] <=> [1/0] - ");
		fscanf(stdin,"%d",&cont);
		temp1 = ptr;
		temp1->next = NULL;	
	}while(cont == 1);	
	return START;	
}
void main()
{
	node *START;
	START = parents();
	print_nodes(START);
	START->free_mem(START);
	return;	
}


