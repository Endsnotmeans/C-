#include <iostream>
#include "stock2.h"

int main()
{
	{ 
		using std::cout;
		cout<<"����constructor\n";
		Stock stock1("NanoSmart",12,20.0);
		stock1.show();
		Stock stock2=Stock("Boffo Objects",2,2.0);
		stock2.show();
		
		cout<<"��stock1����stock2��\n";
		stock2=stock1;
		cout<<"show! \n";
		stock1.show();
		stock2.show();
		
		cout<<"��constructor���³�ʼ��\n";
		stock1=Stock("Nifty Foods",10,50.0);
		cout<<"Revised stock1:\n";
		stock1.show();
		cout<<"Done\n";		
	}
	return 0;
 } 
