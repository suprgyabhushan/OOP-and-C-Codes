#include <stdio.h>
#include <stdlib.h>
#include "node.h"
static node *newNode(void);
static int print(struct nodeobject* node1)
{
	if(node1 -> type == INTEGER)
		printf("Integer : %d\n",node1 -> ival);
	else if(node1 -> type == REAL)
		printf("Real    : %f\n",node1 -> rval);
	else if(node1 -> type == STRING)
		printf("String  : %s\n",node1 -> sval);
	else
		printf("NODE INCORRECT\n");
	return 0;
}
static void free_memory(node * p)
{
	printf("\n***FREEING MEMORY***");
	node *ptr,*chld,*temp;
	while(p!=NULL)
	{
		ptr=p->next;
		chld=p->child;
		while(chld!=NULL)
		{
			temp=chld->child;
			free(chld);
			chld = temp;
		}
		free(p);
		p = ptr;
	}
	free(ptr);
	printf("\n***MEMORY FREED***\n");
}
/*************** public interface *************/

char *INTEGER = "Integer";
char *REAL = "Real";
char *STRING = "String";

node *
newIntegerNode(int v)
{
	node *p = newNode();
	p->type = INTEGER;
	p->ival = v;
	p->display = &print;
	p->free_mem = &free_memory;
	return p;
}

node *
newRealNode(double v)
{
	node *p = newNode();
	p->type = REAL;
	p->rval = v;
	p->display = &print;
	p->free_mem = &free_memory;
	return p;
}

node *
newStringNode(char *v)
{
	node *p = newNode();
	p->type = STRING;
	p->sval = v;
	p->display = &print;
	p->free_mem = &free_memory;
	return p;
}

void print_nodes(node *START)
{
	node *ppar, *pchl;
	printf("\n***PRINTING LINKEDLIST***\n");
	ppar = START;
	while(ppar != NULL)
	{
		printf("Parent is ");
		ppar -> display(ppar);
		pchl = ppar->child;
		while(pchl != NULL)
		{
			printf("Child is ");
			pchl -> display(pchl);
			pchl = pchl -> child;
		}
		ppar = ppar -> next;
		printf("\n");
	}
}
/*************** private methods *************/

static node *
newNode()
{
	node *n = (node *) malloc(sizeof(node));
	if (n == 0) { fprintf(stderr,"out of memory"); exit(-1); }
	return n;
}


