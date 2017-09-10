#include"stack.h"

Stack::Stack()    //创建一个空栈
{
	top=0;
 } 

bool Stack::isempty() const
{
	return top==0;
}

bool Stack::isfull() const
{
	return top==MAX;
}

bool Stack::push(const Item & item)
{
	if(top < MAX)
	{
		items[top++]=item;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Item & item)		//看栈是否为空 
{
	if(top>0)
	{
		item=items[--top];
		return true;		
	}
	else
		return false;
}
