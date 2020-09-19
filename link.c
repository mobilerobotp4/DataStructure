/* Creating a link list */

#include<stdio.h>

#include<malloc.h>
#include<stdlib.h>
struct link
{
	int info;
	struct link *next;
};
int CreateList(struct link *);
int Display(struct link *);
int main()
{
	struct link *node;
	
	node = (struct link *)malloc(sizeof(struct link));
	if(node == NULL)
	{
		printf("\n out of memory space");
		exit(0);
		return(0);
	}
	CreateList(node);
	Display(node);
}
int CreateList(struct link *node)
{
	char ch;
	int i = 1;
	printf("\n Enter the value for %d node:",i);
	scanf("%d",&node->info);
	node->next = NULL;
	i++;
	printf("\n Press 'n' to quit any other key to continue:");
	fflush(stdin);
	ch = getchar();
	while(ch != 'n')
	{
		node->next = (struct link*)malloc(sizeof(struct link));
		if(node->next == NULL)
		{
			printf("\n out of memory space");
			exit(0);
		}
		node = node->next;
		printf("\n Enter the value for %d node:",i);
		scanf("%d",&node->info);
		node->next = NULL;
		i++;
      printf("\n Press 'n' to quit any other key to continue:");
		fflush(stdin);
		ch = getchar();
		}
	}
	int Display(struct link *node)
	{
		printf("\n values of nodes in the list are as follows:\n\n");
		while(node != NULL)
		{
			printf("%d ",node->info);
			node = node->next;
		}
	}

/* Output: 

Enter the value for 1 node: 25
Press 'n' to quit any other key to continue:
Enter the value for 2 node: 60
Press 'n' to quit any other key to continue:
Enter the value for 3 node: 145
Press 'n' to quit any other key to continue:
Enter the value for 4 node: 9
Press 'n' to quit any other key to continue:
Enter the value for 5 node: 17
Press 'n' to quit any other key to continue: n
values of nodes in the list are as follows:

25 60 145 9 17

Execution time: 46.773s

*/

