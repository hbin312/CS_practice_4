#include <iostream>
#include <string>
#include "LinkedList.cpp"

template <class T>
class Stack : public LinkedList<T>
{
public:
	Stack() { ; }
	~Stack(){;}
	virtual bool Delete(T &element){
		if (this->first == 0)
			return false;
		else {
			Node<T>* temp = this->first;
			this->first = this->first->link;
			element = temp->data;
			delete temp;
			this->current_size--;
			return true;
		}
	}
};
