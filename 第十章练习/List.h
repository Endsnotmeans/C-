#ifndef LIST_H_
#define LIST_H_
#include<string>

struct Student
{
	std::string Name;
	int Age;
};
class List
{
private:
	enum { MAX = 10 };
	Student stu[MAX];
	int top;
public:
	List();
	~List(){}
	bool addData(const std::string name,int age);
	bool deleteData();
	bool isEmpty()const;
	bool isFull()const;
	void showList()const;
	void retop()const;
};
#endif 
