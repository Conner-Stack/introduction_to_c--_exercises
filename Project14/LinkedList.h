#pragma once
#include <iostream>
#include <cassert>
using namespace std;




template < typename T>
struct nodeType
{
	int Info;
	nodeType * Link;
};
template <typename T>
class linkedListIterator
{
private:
	//pointer to point to the current node in the linked list
	nodeType<T> * current;
public:
	//Default constructor
	//Postcondition: current = NULL
	linkedListIterator() {};

	//Constructor with parameter
	//Postcondition: current = node
	linkedListIterator(nodeType<T> *node)
	{
		current = node;
	}

	//Function to overload the dereferencing operator *
	//Postcondition:Returns the info contained in the node
	T operator*()
	{
		return current->Info;
	}

	//Overload the pre-increment operator
	//Postcondition: The iterator is advanced to the next node
	linkedListIterator<T> operator++()
	{
		this->current = current->Link;
		return *this;
	}

	//Overlaod the equality operator
	//Postcondition: Returns true if this iterator is equal to the 
	//iterator specified by right otherwise returns false
	bool operator==(linkedListIterator<T>& list) const
	{
		if (this->current == list.current)
		{
			return true:
		}
		else
			return false;
	}

	//Overlaod the not equal operator
	//Postcondition: Returns true if this iterator is not equal to the 
	//iterator specified by right otherwise returns false
	bool operator!=(linkedListIterator<T>& list) const
	{
		if (this->current != list.current)
		{
			return true;
		}
		else
			return false;
	}
};

template<typename T>
class linkedListType
{
protected:
	int Count; //variable to store the number of elements in the list
	nodeType<T> *First; //pointer to the first node of the list
	nodeType<T> *Last; //pointer to the last node of the list
public:
	//Overload the assignment operator
	const linkedListType<T>& operator= (const linkedListType<T>& otherList)
	{
		this->copyList(otherList);


		return *this;
	}

	//Initialize the list to an empty state
	//Postcondition: first = NULL, last = NULL, count = 0;
	void initializeList()
	{
		First = NULL;
		Last = NULL:
		count = 0;
	}

	//Function to determine whether the list is empty
	//Postcondition: Returns true if the list is empty otherwise it returns false
	bool isEmptyList() const
	{
		if (First == NULL)
		{
			return true;
		}
		else
			return false;
	}

	//Function to output the data contained in each node
	//Postcondition: Node
	void print() const
	{

		nodeType<T> * ptr = First;
		while (ptr != NULL)
		{
			cout << ptr << endl;
			ptr = ptr->Link;
		}



	}

	//Function to return the number of nodes in the list
	//Postcondition: The value of count is returned
	int length() const
	{
		return Count;
	}

	//Function to delete all the nodes from the list
	//Postcondition: first = NULL, last = NULL, count = 0;
	void destroyList()
	{
		nodeType<T> * listdestroy;
		listdestroy = First;

		while (listdestroy != NULL)
		{
			First = First->Link;
			delete listdestroy;
			listdestroy->First;
			count--;
		}
		First = NULL;
		Last = NULL;
		count = 0;
	}

	//Function to return the first element in the list
	//Precondition: The list must exist and must not be empty
	//Postcondition: If the list is empty, the program terminates; otherwise,
	//the first element of the list is returned
	T front() const
	{
		if (this->First = NULL)
		{
			return NULL;
		}
		else
		{
			return *this->First;
		}

	}

	//Function to return the last element in the list
	//Precondition: The list must exist and must not be empty
	//Postcondition: If the list is empty, the program terminates; otherwise,
	//the last element of the list is returned
	T back() const
	{
		if (this->Last = NULL)
		{
			return NULL;
		}
		else
			return *this->Last;


	}
	

		//Function to determine whether node is in the list
		//Postcondition: Returns true if node is in the list
		//otherwise the value false is returned
		bool search(const T& nodeInfo)
	{
		nodeType<T> *ptr = First;
		while (ptr != NULL)
		{
			if (ptr->Info == nodeInfo)
			{
				return true;
			}
			ptr = ptr->Link;
		}
		return false;
	}

	//Function to insert node at the begining of the list
	//Postcondition: first points to the new list, node is inserted 
	//at the beginning of the list, last points to the last node in
	//the list, and count is incremented by 1;
	void insertFirst(const T& nodeInfo)
	{
		nodeType<T> *Node = new nodeType<T>;
		Node->info = nodeInfo;
		Node->Link = First;
		if (First == NULL)
		{
			First = node;
			Count++
		}
	}

	//Function to insert node at the end of the list
	//Postcondition: first points to the new list, node is inserted 
	//at the beginning of the list, last points to the last node in
	//the list, and count is incremented by 1;
	void insertLast(const T& nodeInfo)
	{
		nodeType<T> *Node = new nodeType<T>;
		Node->Info = nodeInfo;
		Node->Link = NULL;
		if (First == NULL)
			this->insertFirst(nodeInfo)
		else
		{
			Last->Link = Node;
			Last = Node;
			Count++;
		}
	}

	//Function to delete node from the list
	//Postcondition: If found, the node containing the node is deleted from the list. first points to
	//the first node, last points to the last node of the update list, and count is decremented by 1
	void deleteNode(const T& nodeInfo)
	{
		nodeType<T> *ptr = First;
		nodeType<T> *tmp = First;
		while (ptr != NULL)
		{

			if (ptr->Link->Info = nodeInfo)
			{
				tmp = ptr->Link;
				ptr->Link = ptr->Link->Link;
				delete tmp;
				Count--;
			}
			if (ptr->Link = NULL)
			{
				Last = ptr;
				break;
			}
			if (ptr->Info = nodeInfo)
			{
				tmp = ptr;
				ptr = ptr->Link;
				delete tmp;
				Count--;
				
			}
			ptr = ptr->Link;
		}

	}

	//Function to return an iterator at the begining of the linked list
	//Postcondition: Returns an iteratir such that the current is set to first
	linkedListIterator<T> begin()
	{

		return linkedListIterator<T>(First);
	}

	//Funcion to rturn an iterator at the end of the linked list
	//Postcondition: Returns an iterator such that current is set to NULL
	linkedListIterator<T> end()
	{
		return linkedListIterator(Last);
	};

	//Default constructor
	//Initializes the list to an empty state 
	//Postcondition: first = NULL, last = NULL, count = 0;
	linkedListType()
	{
		First = NULL;
		Last = NULL;
		Count = 0;
	}

	//copy constructor
	linkedListType(const linkedListType<T>& otherList)
	{
		*this = otherList;
	}

	//deconstructor
	//Deletes all the nodes from the list
	//Postcondition: The list object is destroyed
	~linkedListType<T>() {}

private:
	//Function to make a copy of list
	//Postcondition: A copy of list is created and assigned to this list
	void copyList(const linkedListType<T>& otherList)
	{
		nodeType<T> * Node;
		Node = otherList.First;
		this->destroyList();
		int i = 0;
		while (Node != NULL)
		{
			if (i == 0)
			{
				this->insertFirst(Node->Info);
				i++;
				Node = Node->Link;
			}
			else
			{
				this->insertLast(Node->Info);
				Node = Node->Link;
			}
		}
	}
};