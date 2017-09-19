#ifndef QUEUE_H_
#define QUEUE_H_

class Customer
{
	private:
		long arrive;
		int processtime;
	public:
		Customer(){arrive=processtime=0;}  //constructor
		void set(long when);
		long when() const{return arrive;}
		int ptime() const{return processtime;}
};

typedef Customer Item;

class Queue
{
	private:
		//class scope definitions
		struct Node{Item item;struct Node * next;};  //nested structure
		enum{Q_SIZE=10};
		//private class member
		Node * front;     //pointer to front of Queue
		Node * rear;	  //pointer to rear of Queue
		int items;		  //current number of items
		const int qsize;
		//define in privite to prevent public copying
		Queue(const Queue & q):qsize(0){}
		Queue & operator=(const Queue & q) {return *this;}
	public:
		Queue(int qs=Q_SIZE);
		~Queue();
		bool isempty() const;
		bool isfull() const;
		int queuecount () const;
		bool enqueue(const Item & item);    //add item to end
		bool dequeue(Item &item);       //remove item from front
};
#endif
