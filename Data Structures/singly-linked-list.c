#include <stdio.h>
#include <stdlib.h>

/*LL Node declaration*/
struct Node
{
	int info;
	struct Node *next;
};

/*Declaring pointers to first and last nodes of ll*/
struct Node *first = NULL;
struct Node *last = NULL;

//Inserting into linked list
void insert(int value)
{
	//Create new node
	struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

	//Store element
	ptr->info = value;

	//Linking new node to linked list
	if (first == NULL)
	{
		first = last = ptr;
		ptr->next = NULL;
	}
	else
	{
		last->next = ptr;
		ptr->next = NULL;
		last = ptr;
	}
	
}

//Search function
struct Node *search(int value)
{
	struct Node *ptr;

	if(first == NULL) //Checking if list is empty
	{
		printf("List is empty.\n");
		return(NULL);
	}	

	//Searching the link list
	for(ptr = first; ptr != last; ptr = ptr->next)
	{
		if (ptr->info == value)
		{
			return ptr;
		}
	}

	if (ptr == last)
	{
		return ptr;
	}
	else
	{
		return NULL;
	}
}

//Delete Function
int delete(int value)
{
	struct Node *loc, *temp;

	loc = search(value);

	if (loc == NULL) //Element not found
		return (-1);

	if (loc == first)
	{
		if (first == last)
		{
			first = last = NULL;
		}
		else
		{
			first = first->next;
		}
		return value;
	}

	for (temp = first; temp->next != loc; temp = temp->next)
	;  //this means the for loop doesn't do anything other than traversing the ll.

	temp->next = loc->next;
	if (loc == last)
	{
		last = temp;
	}
	
	return (loc->info);
}

//List the contents of ll
void print()
{
	struct Node *ptr;

	if (first == NULL) //Checking if ll is empty
	{
		printf("The list is empty.");
		return;
	}

	printf("Linked list elements: \n");

	if (first == last)
	{
		printf("%d\n", first->info);
		return;
	}
	

	for(ptr = first; ptr != last; ptr = ptr->next)
	{
		printf("%d -> ", ptr->info);
	}
	printf("%d\n", last->info);
}

int main()
{
	int n1, n2, choice;
	struct Node *location;

	do
	{
		printf("\n\nEnter your choice: \n");
		printf("1: Insert into linked list\n");
		printf("2: Delete from linked list\n");
		printf("3: Search in linked list\n");
		printf("4: Display contents of linked list\n");
		printf("5: Exit\n");
		printf("Your choice? ");

		scanf("%d", &choice);

		switch (choice)
		{
		case 1: printf("Enter value to add: ");
				scanf("%d", &n1);
				insert(n1);
				printf("%d has been added to the linked list.", n1);
				break;

		case 2: printf("Enter value to delete: ");
				scanf("%d", &n1);
				n2 = delete(n1);
				if(n2<0)
				{
					printf("%d not present in list", n1);
					break;
				}
				printf("%d has been deleted from the linked list.", n1);
				break;

		case 3: printf("Enter value to search: ");
				scanf("%d", &n1);
				location = search(n1);
				if(location == NULL)
				{
					printf("%d not present in list", n1);
					break;
				}	
				if (location == last)
				{
					printf("%d is the last element in the list", n1);
					break;
				}

				printf("%d comes before %d.", n1, (location->next)->info);
				break;

		case 4: print();
				break;

		case 5: break;
		
		default: printf("Invalid, please try again.\n");

		}


	} while (choice != 5);
	
}
