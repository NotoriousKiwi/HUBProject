#include "LinkedList.h"

// Default Constructor
LinkedList::LinkedList()
{


}

// Initialises default linked list including nodes.
int LinkedList::ListSetup()
{
	// Linkedlist is the size of three nodes, all initialised to NULL.
	LinkedList* head = NULL;
	LinkedList* second = NULL;
	LinkedList* third = NULL;

	// Memory allocation.
	head = new LinkedList();
	second = new LinkedList();
	third = new LinkedList();

	// Node #1.
	head->data = 1;
	head->next = second;

	// Node #2.
	second->data = 2;
	second->next = third;

	// Node #3.
	third->data = 3;
	third->next = NULL;

	// Prints the current list starting from the head (the start).
	PrintList(head);

	// Inserts another node after the second note with the value of 11.
	InsertAfter(second, 11);

	//Push(&head, 11);
	
	// Prints the list again starting from the head.
	PrintList(head);

	return 0;
}

// Prints out all nodes in the linked list.
void LinkedList::PrintList(LinkedList* n)
{
	// Prints the lists so long as the current node is not NULL (empty).
	std::cout << "Printing new list.." << std::endl;
	while (n != NULL)
	{
		// Prints the data in the current node and then points to the next node.
		std::cout << n->data << " ";
		n = n->next;
	}
	std::cout << std::endl;
}

// Inserts data in a new node after the selected one.
void LinkedList::InsertAfter(LinkedList* previous_node, int new_data)
{
	// Checks if the previous node was empty (therefore we cannot create a new node with data in the first slot).
	if (previous_node == NULL)
	{
		std::cout << "The previous node cannot be NULL." << std::endl;
		return;
	}

	// Create a new node and allocate memory accordingly.
	LinkedList* new_node = (LinkedList*)malloc(sizeof(LinkedList));

	// data in the new node matches data fed through function.
	new_node->data = new_data;

	// next node in the serious linked accordingly.
	new_node->next = previous_node->next;

	// previous node now points to the new node that has just been established.
	previous_node->next = new_node;
}

// Inserts data into a new node at the end of the linked list.
void LinkedList::Append(LinkedList** head_reference, int new_data)
{
	// Create a new node and allocate memory accordingly.
	LinkedList* new_node = (LinkedList*)malloc(sizeof(LinkedList));
	LinkedList* last = *head_reference;
	
	// data in the new node matches data fed through function.
	new_node->data = new_data;

	// because the new node is at the end, the next node is NULL.
	new_node->next = NULL;

	// While there is still nodes to be cycled through..
	while (last->next != NULL)
	{
		// Iterate through linked list.
		last = last->next;

		last->next = new_node;
	}
}

// Pushes data onto the front of the linked list.
void LinkedList::Push(LinkedList** head_ref, int new_data)
{
	// Create a new node and allocate memory accordingly.
	LinkedList* newNode = (LinkedList*) malloc(sizeof(LinkedList));

	// data in the new node matches data fed through function.
	newNode->data = new_data;

	// The new node will now point to what used to be the head of the list.
	newNode->next = (*head_ref);

	// The head reference is now the node we just created.
	(*head_ref) = newNode;
}

// Default Destructor.
LinkedList::~LinkedList()
{

}
