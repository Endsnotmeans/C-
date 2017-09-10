#include<iostream> 
#include<cstdlib>
#include"List.h"

int main()
{
	List list;
	if(!list.isFull() ) 
	{
		list.addData("Jim", 20);
		list.addData("Tom", 21);
		list.showList();
		list.addData("Tom1", 21);
		list.addData("Tom2", 21);
		list.addData("Tom3", 21);
		list.addData("Tom4", 21);
		list.addData("Tom5", 21);
		list.addData("Tom6", 21);
		list.addData("Tom7", 21);
		list.addData("Tom8", 21);
		list.addData("Tom9", 21);
		list.addData("Tom10", 21);
		list.showList();
	}
	else
		std::cout<<"full"<<std::endl;
	
	system("pause");
	return 0; 
}
