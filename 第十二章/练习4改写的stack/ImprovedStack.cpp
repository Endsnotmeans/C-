#include"ImprovedStack.h"
//动态分配的数组来保存栈 
ImprovedStack::ImprovedStack(int n)
{
	this->pitems = new Item[n];
	this->top = 0;
	this->size = 0;
}
ImprovedStack::ImprovedStack(const ImprovedStack& IS)
{
	//delete[] this->pitems;
	this->pitems = new Item[MAX];
	this->top = IS.top;
	this->size = IS.size;
	for (int in = 0; in < IS.size; in++)
		this->pitems[in] = IS.pitems[in];
}
ImprovedStack::~ImprovedStack()
{
	delete[] this->pitems;
}
bool ImprovedStack::isempty()const
{
	return this->top == 0;
}
bool ImprovedStack::isfull()const
{
	return this->top == MAX;
}
bool ImprovedStack::push(const Item& It)
{
	if (!isfull())
	{
		this->pitems[top++] = It;
		this->size++;
		return true;
	}
	else return false;
}
bool ImprovedStack::pop(Item& It)
{
	if (!isempty())
	{
		It = this->pitems[--top];
		this->size--;
		return true;
	}
	else return false;
}
ImprovedStack& ImprovedStack::operator=(const ImprovedStack& IS)
{
	delete[] this->pitems;
	this->pitems = new Item[MAX];
	this->top = IS.top;
	this->size = IS.size;
	for (int in = 0; in < IS.size; in++)
		this->pitems[in] = IS.pitems[in];
	return *this;
}
std::ostream& operator<<(std::ostream& os, const ImprovedStack& IS)
{
	os << "The elements: ";
	for (int in = 0; in < IS.size; in++)
		os << IS.pitems[in] << "  ";
	os << "\n";
	return os;
}
