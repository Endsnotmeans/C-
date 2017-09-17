#include "queue.h"
#include <cstdlib>   //use rand()

Queue::Queue(int qs):qsize(qs)    //qsize is const,can't qsize=qs
{
	front=rear=NULL;
	items=0;
}
Queue::~Queue()
{
	Node * temp;
	while(front!=NULL)
	{
		temp=front;			//save front's address then delete
		front=front->next;
		delete temp;		
	}
}
bool Queue::isempty() const
{
	return items==0;
}
bool Queue::isfull() const
{
	return items==qsize;
}
int Queue::queuecount () const
{
	return items;
}
bool Queue::enqueue(const Item & item)    //add item to end
{
	if(isfull())
		return false;
	Node * add =new Node;      //create node
	//on failure, std::bad_alloc exception
	add->item=item;
	add->next=NULL;
	items++;
	if(front==NULL)			//if empty,place at front
		front=add;
	else
		rear->next=add;    //else place at rear
	rear=add;
	return true;
}
bool Queue::dequeue(Item &item) 
{
	if(front==NULL)
		return false;
	item=front->item;
	items--;
	Node *temp=front;
	front=front->next;
	delete temp;
	if(items==0)
		rear=NULL;
	return true;
}

void Customer::set(long when)
{
	processtime=std::rand()%3+1;
	arrive=when;
 } 
  
