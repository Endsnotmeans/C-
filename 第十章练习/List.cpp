#include<iostream>
#include"List.h"

List::List()
{
	top = 0;
}
bool List::isEmpty()const
{
	return top == 0;
}
bool List::isFull()const
{
	return top == MAX;
}
bool List::addData(const std::string name, int age)
{
	if (top < MAX)
	{
		stu[top].Name = name;
		stu[top].Age = age;
		top++;
		return true;
	}
	else return false;
}
bool List::deleteData()
{
	if (top > 0)
	{
		top--;
		stu[top].Name = "";
		stu[top].Age = 0;
		return true;
	}
	else return false;
}
void List::showList()const
{
	if (this->isEmpty())
	{
		std::cout << "The list is empty." << std::endl;
	}
	else
	{
		for (int i = 0; i < top; i++)
			std::cout << stu[i].Name << "     " << stu[i].Age << std::endl;
	}
}
void List::retop()const
{
	std::cout << "top = " << top << std::endl;
}
