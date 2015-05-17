typedef struct nodeobject
{
	char *type;
	int ival;
	double rval;
	char *sval;
	int (*display)(struct nodeobject*);
	void (*free_mem)(struct nodeobject*);
	struct nodeobject *child;
	struct nodeobject *next;
}node;

extern char *INTEGER;
extern char *REAL;
extern char *STRING;

extern node *newIntegerNode(int value);
extern node *newRealNode(double value);
extern node *newStringNode(char *value);

//int print(node*);
//void free_memory(node * p);
void print_nodes(node *START);
