#ifndef IMPROVEDSTACK_H_
#define IMPROVEDSTACK_H_
#include<iostream>

typedef unsigned long Item;
class ImprovedStack
{
private:
	enum { MAX = 10 };
	Item* pitems;
	int size;
	int top;
public:
	ImprovedStack(int n = MAX);
	ImprovedStack(const ImprovedStack&);
	~ImprovedStack();
	bool isempty()const;
	bool isfull()const;
	bool push(const Item&);
	bool pop(Item&);
	int Size() { return size; }
	int Top() { return top; }
	ImprovedStack& operator=(const ImprovedStack&);
	friend std::ostream& operator<<(std::ostream&, const ImprovedStack&);
};
#endif // !IMPROVEDSTACK_H_
