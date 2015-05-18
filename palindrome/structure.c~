// writtenBy: MR
// version: 1
// Date: Nov-27-2014
// Description: Manipulating structures

#include<stdio.h>
#include<stdlib.h>

struct node
    {
    int x;
    int y;
    char *str;
    int result;
    int (*fptr)(int, int);
    struct node * next;
    struct node * down;
    };

struct node *newNode(struct node *next, struct node *down)
    {
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->next = next;
    n->down = down;
    return n;
    }
    
// delete using loop
void deleteNode(struct node *p)
    {
    struct node *temp;
    while(p != 0)
        {
        temp = p->down;
		while(p!=0)
			{
			free(p);
			p = temp->down;
			}
        //free(p);
        p = temp->next;
        }
    }

// delete using recursion
void deleteNodeR(struct node *p)
    {
	struct node *t, *temp;
	if(p!=0)
		{
		temp = p->next;
		if(p!=0)
			{
			t = p->down;
			free(p);
			deleteNodeR(t); 
			}
		deleteNode(temp);
		}
    }


int add(int x, int y)
    {
    return x+y;
    }

void initialize(struct node *n,int x, int y, char *text, int (*fptr)(int, int))
    {
    n->x = x;
    n->y = y;
    n->result = 0;
    n->fptr = add;
    n->str = text;
    }

void evaluate(struct node *n)
    {
    int result=0;
    result = n->fptr(n->x, n->y);
    n->result = result;
    }

void display(struct node *n)
	{
	printf("x = %d\n",n->x);
	printf("y = %d\n",n->y);
	printf("result = %d\n",n->result);
	printf("Text is = %s\n",n->str);
	}

// print using loop
void print(struct node *n)
	{
	struct node *t;
	while(n!=0)
		{
		t = n;
		while(n!=0)
			{
			display(n);
			n = n->down;
			}
		n = t->next;
		}
	}

//print using recursion
void printR(struct node *n)
	{
	struct node *t;
	if(n!=0) 
		{
		t = n->next;
		if(n!=0) 
			{
			display(n);
			n = n->down;
			printR(n);
			}
		//n = t;
		printR(t);
		}
	}

int main()
	{
	// add child
	struct node *parent, *child, *downP, *downC;
	char *cText = "child", *pText = "parent";

	// for down of child
	downC = newNode(0,0);
	initialize(downC,10,20,"down of child",add);
	evaluate(downC);

	// child
	child = newNode(0,downC);
	initialize(child,40,60,"child of parent",add);
	evaluate(child);
	//print(child);
		
	// for down of parent
	downP = newNode(0,0);
	initialize(downP,80,90,"down of Parent",add);
	evaluate(downC);

    // add parent
    parent = newNode(child,downP);
    initialize(parent,100,200,"Parent",add);
    evaluate(parent);

	//print all child and down nodes using loop
    //print(parent);

	//print all child and down nodes using loop
    printR(parent);

    //deleteNode(child);
    deleteNodeR(parent);
    }
