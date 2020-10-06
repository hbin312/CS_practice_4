#pragma once
#include <iostream>
#include <string>

using namespace std;

template <class T>
class Node {
public:
	T data;
	Node *link;
	Node(T element)
	{
		data = element;
		link = NULL;
	}
};

// Linked List Class
template <class T>
class LinkedList
{
protected:
	Node<T> *first;
	int current_size;
public:
	LinkedList()
	{
		first = 0;
		current_size = 0;
	};
	int GetSize();
	void Insert(T element);
	virtual bool Delete(T &element);
	void Print();
};



template <class T>
int LinkedList<T>::GetSize() {
	return current_size;
}

template <class T>
void LinkedList<T>::Insert(T element)
{
	Node<T> *newnode = new Node<T>(element);
	newnode->link = first;
	first = newnode;
	current_size++;
}

template <class T>
bool LinkedList<T>::Delete(T &element)
{
	if (first == 0)
		return false;
	Node<T> *current = first;
	Node<T> *previous = NULL;
	while (1)
	{
		if (current->link == 0) // find end node
		{
			if (previous) previous->link = current->link;
			else first = first->link;
			break;
		}
		previous = current;
		current = current->link;
	}
	element = current->data;
	delete current;
	current_size--;
	return true;
}

template <class T>
void LinkedList<T>::Print() {
	if (first == 0)
		return;
	else
	{
		Node<T> *tmp = first;
		int cnt = 1;
		cout << "{" << cnt++ << "|" << tmp->data << "}";
		tmp = tmp->link;
		while (tmp != 0)
		{
			cout << "->{" << cnt++ << "|" << tmp->data << "}";
			tmp = tmp->link;
		}
		cout << endl;
		return;
	}
}
