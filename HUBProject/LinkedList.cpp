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
	Push(&head, 11);
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
