#include<iostream>
using namespace std;
struct node {
	int data;
	node* next;
};
node* head = NULL;
void insert(int value);
void display();
void deleteNode(int value);
void insertBeg(int value);
void deleteBeg();
void deleteEnd();
int main()
{
	insert(5);
	insert(7);
	insert(15);
	insert(10);
	display();
	deleteNode(15);
	insertBeg(20);
	deleteBeg();
	deleteEnd();
	display();
	return 0;
}
void insert(int value)
{
	node* newNode, * last;
	newNode = new node;
	newNode->data = value;
	if (head == NULL)
	{
		head = newNode;
		newNode->next = NULL;
	}
	else {
		last = head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = newNode;
		newNode->next = NULL;
	}
}
void display()
{
	node* currentNode;
	if (head == NULL)
		cout << "Linked list is empty\n";
	else
	{
		currentNode = head;
		while (currentNode != NULL)
		{
			cout << currentNode->data << '\t';
			currentNode = currentNode->next;
		}
		cout << '\n';
	}
}
void deleteNode(int value)
{
	node* current, * previous;
	current = head;
	previous = head;
	if (current->data == value)
	{
		head = current -> next;
		delete(current);
		return;
	}
	else
	{
		while (current->data != value) {
			previous = current;
			current = current->next;
		}
		previous->next = current->next;
		delete(current);
	}
}
void insertBeg(int value)
{
	node* nNode = new node;
	nNode->data = value;
	nNode->next = head;
	head = nNode;
}
void deleteBeg()
{
	if (head == NULL)
		cout << "Linked list is empty\n";
	else
	{
		node* firstNode = head;
		head = firstNode->next;
		delete(firstNode);
	}
}
void deleteEnd()
{
	if(head==NULL)
		cout << "Linked list is empty\n";
	else if (head->next == NULL)
	{
		delete(head);
		head = NULL;
	}
	else
	{
		node* ptr = head;
		while (ptr->next->next != NULL)
		{
			ptr = ptr->next;
		}
		delete(ptr->next);
		ptr->next = NULL;
	}
}