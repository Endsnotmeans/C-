#ifndef QUEUE_H_
#define QUEUE_H_
#include<iostream>
#include<string>

class Worker
{
private:
	std::string fullname;
	long id;
public:
	Worker() :fullname("None"), id(0L){}
	Worker(const std::string& fn, long n) :fullname(fn), id(n){}
	~Worker(){}
	void set(const std::string& fn, long n){ fullname = fn; id = n; }
	Worker& operator=(const Worker& wok);
	void show()const;
};

//typedef Worker Item;
template<typename Type>
class Queue
{
private:
	struct Node { Type item; Node* next; };
	enum { Q_SIZE = 10 };
	Node* front, *rear;
	int items;
	const int qsize;
	Queue(const Queue& q) :qsize(0){}
	Queue& operator=(const Queue& q) { return *this; }
public:
	Queue(int qs = Q_SIZE);
	~Queue();
	bool isempty()const;
	bool isfull()const;
	int queuecount()const;
	bool enqueue(const Type& item);
	bool dequeue(Type& item);
	void show()const;
};
//====================================
template<typename Type>
Queue<Type>::Queue(int qs) :qsize(qs)
{
	front = rear = NULL;			//²»Ö§³Önullptr 
	items = 0;
}
template<typename Type>
Queue<Type>::~Queue()
{
	Node* temp;
	while (front != NULL)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}
template<typename Type>
bool Queue<Type>::isempty()const
{
	return items == 0;
}
template<typename Type>
bool Queue<Type>::isfull()const
{
	return items == qsize;
}
template<typename Type>
int Queue<Type>::queuecount()const
{
	return items;
}
template<typename Type>
bool Queue<Type>::enqueue(const Type& item)
{
	if (isfull()) return false;
	Node* add = new Node;
	add->item = item;
	add->next = NULL;
	items++;
	if (front == NULL)
		front = add;
	else
		rear->next = add;
	rear = add;
	return true;
}
template<typename Type>
bool Queue<Type>::dequeue(Type& item)
{
	if (front == NULL) return false;
	item = front->item;
	items--;
	Node* temp = front;
	front = front->next;
	delete temp;
	if (items == 0)
		rear = NULL;
	return true;
}
template<typename Type>
void Queue<Type>::show()const
{
	Node* temp = front;
	for (int in = 0; in < qsize; in++, temp = temp->next)
		temp->item.show();
}

Worker& Worker::operator = (const Worker& wok)
{
	this->fullname = wok.fullname;
	this->id = wok.id;
	return *this;
}
void Worker::show()const
{
	std::cout << this->fullname << ",  " << this->id << std::endl;
}
#endif //
