#include "LinkedList.h"

LinkedList::LinkedList()
{


}

int LinkedList::ListSetup()
{
	LinkedList* head = NULL;
	LinkedList* second = NULL;
	LinkedList* third = NULL;

	head = new LinkedList();
	second = new LinkedList();
	third = new LinkedList();

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	PrintList(head);
	InsertAfter(second, 11);
	//Push(&head, 11);
	PrintList(head);

	return 0;
}

void LinkedList::PrintList(LinkedList* n)
{
	std::cout << "Printing new list.." << std::endl;
	while (n != NULL)
	{
		std::cout << n->data << " ";
		n = n->next;
	}
	std::cout << std::endl;
}

void LinkedList::InsertAfter(LinkedList* previous_node, int new_data)
{
	if (previous_node == NULL)
	{
		std::cout << "The previous node cannot be NULL." << std::endl;
		return;
	}
	LinkedList* new_node = (LinkedList*)malloc(sizeof(LinkedList));

	new_node->data = new_data;
	new_node->next = previous_node->next;
	previous_node->next = new_node;
}

void LinkedList::Append(LinkedList** head_reference, int new_data)
{
	LinkedList* new_node = (LinkedList*)malloc(sizeof(LinkedList));
	LinkedList* last = *head_reference;
	
	new_node->data = new_data;
	new_node->next = NULL;

	while (last->next != NULL)
	{
		last = last->next;
		last->next = new_node;
	}
}

void LinkedList::Push(LinkedList** head_ref, int new_data)
{
	LinkedList* newNode = (LinkedList*) malloc(sizeof(LinkedList));

	newNode->data = new_data;
	newNode->next = (*head_ref);
	(*head_ref) = newNode;
}

LinkedList::~LinkedList()
{

}
