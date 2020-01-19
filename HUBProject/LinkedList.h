#pragma once

#include <iostream>

/*//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

					REMINDERS FOR LINKED LISTS.

1. There are two forms of linked lists, those being a singly linked list and a doubly linked list.
2. A singly linked list contains nodes that only point to the next node in the line.
3. Doubly linked lists conversely, can point to both the next and previous nodes.
4. Nodes store two things; the data and the next part. Data as the name suggests refers to data in the node whereas next provides an address to the next node.
5. The first node of a linked list is called the head with the final node called the tail.

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/


class LinkedList
{
protected:



private:



public:

	LinkedList();

	int data;
	LinkedList* next;

	int ListSetup();

	void PrintList(LinkedList* n);
	void InsertAfter(LinkedList* previous_node, int new_data);
	void Append(LinkedList** head_reference, int new_data);
	void Push(LinkedList** head_ref, int new_data);

	~LinkedList();
};