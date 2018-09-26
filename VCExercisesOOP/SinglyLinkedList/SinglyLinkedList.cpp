// SinglyLinkedList.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

using namespace std;

struct	ListNode
{
	int data;
	ListNode *next;
};

int		ListLength(ListNode *head)
{
	ListNode *current = head;
	int cnt = 0;

	while (current != NULL)
	{
		cnt++;
		current = current->next;
	}
	return cnt;
}

void	InsertListNode(ListNode **head, int data, int position)
{
	int	cnt = 1;
	ListNode *p, *q, *newNode;
	q = NULL;

	newNode = new ListNode;

	if (!newNode)
	{
		cout << "Memory Error.  Insert at position " << position << " failed." << endl << endl;
		return;
	}

	newNode->data = data;
	p = *head;

	if (position == 1)	// insert at beginning of list
	{
		newNode->next = p;
		*head = newNode;
	}
	else
	{					// traverse list until position reached for insert
		while ((p != NULL) && (cnt < position))
		{
			cnt++;
			q = p;
			p = p->next;
		}
		q->next = newNode;
		newNode->next = p;
	}
	cout << data << "  " << newNode << " inserted position " << cnt;

	if (position != cnt)
	{
		cout << "  (not at position " << position << ')';
	}
	cout << endl;
}

void	DeleteListNode(ListNode **head, int position)
{
	int cnt = 1;
	ListNode *p, *q;
	q = NULL;

	if (*head == NULL)
	{
		cout << "No delete at position " << position << ".  List is empty." << endl << endl;
		return;
	}

	p = *head;

	if (position == 1)				// if first node position requested for delete
	{
		*head = (*head)->next;
		delete p;					// free memory space
		return;
	}
	else
	{
		while ((p != NULL) && (cnt < position))		// traverse list until position reached for delete
		{
			cnt++;
			q = p;
			p = p->next;
		}

		if (p == NULL || position <= 0)
		{
			cout << "No delete at position " << position << ".  Position does not exist." << endl << endl;
		}
		else
		{
			q->next = p->next;
			cout << p->data << "  " << p << " deleted/freed pos " << position << endl << endl;
			delete p;				// free memory space
		}
	}
}

void	DeleteEntireList(ListNode **head)
{
	ListNode *auxNode, *iterator;
	int	pos = 0;

	cout << "Delete nodes of entire list . . ." << endl;
	iterator = *head;
	while (iterator)
	{
		auxNode = iterator->next;
		cout << iterator->data << "  " << iterator << " deleted/freed pos " << ++pos << endl;
		delete iterator;			// free memory space
		iterator = auxNode;
	}
	*head = NULL;
}

void	DisplayList(ListNode *head)
{
	ListNode *current = head;

	cout << "SinglyLinked List   -   length " << ListLength(head) << endl;
	while (current != NULL)
	{
		cout << current->data << "  " << current << endl;
		current = current->next;
	}
	cout << endl;
}

int main()
{
	ListNode *head = NULL;
	int		pos;

	cout << endl;

	DeleteListNode(&head, 1);

	InsertListNode(&head, 42, 1);
	DisplayList(head);

	InsertListNode(&head, 87, 1);
	DisplayList(head);

	InsertListNode(&head, 17, 8);
	DisplayList(head);

	InsertListNode(&head, 33, 4);
	DisplayList(head);

	DeleteListNode(&head, 9);

	InsertListNode(&head, 14, 4);
	DisplayList(head);

	InsertListNode(&head, 71, 2);
	DisplayList(head);

	DeleteListNode(&head, 5);

	InsertListNode(&head, 99, 1);
	DisplayList(head);

	InsertListNode(&head, 59, 6);
	DisplayList(head);

	DeleteListNode(&head, 3);

	InsertListNode(&head, 22, 5);
	DisplayList(head);

	DeleteEntireList(&head);

	cout << endl;
	system("pause");
	return 0;
}
