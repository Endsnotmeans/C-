#include<iostream>
#include"sales.h"
namespace SALES
{
	using std::cin;
	using std::cout;
	using std::endl;

	
    Sales::Sales()
    {
        min = 0;
        max = 0;
        average = 0;
        for (int i = 0; i < QUARTERS; i++)
            sales[i] =0;
    }    
	 
	 Sales::Sales(const double ar[],int n)
	 {	double total=0;
	 	if(n<0)
	 		n=0;
	 	int limit=n<QUARTERS?n:QUARTERS;
	 	min=0;
	 	max=0;
	 	average=0;
	 	for(int i=0;i<limit;i++)
	 	{
			sales[i] = ar[i];
			total += sales[i];
		}
		average = total / n;
		for (int i = 0; i < n; i++)
			if (max < sales[i])
				max = sales[i];
			else if (min > sales[i])
				min = sales[i];
	}
	 	 
	 void Sales::setSales()
	 {
	 	double total = 0.;
		int counter = 0;
		cout << "Enter sales for 4 quarters in the following." << endl;
		for (int i = 0; i < 4; i++)
		{
			cout << "Input Sales.sales[" << i << "]: ";
			cin >> sales[i];
			if (!(cin))
			{
				for (int j = i; j < 4; j++)
					sales[j] = 0;
				std::cout << "Invalid input." << std::endl;
				break;
			}
			else counter++;
		}
//		if (counter > 0)
//		{
//			max = min = sales[0];
//			for (int i = 0; i < counter; i++)
//			{
//				total += s.sales[i];
//				if (s.max < s.sales[i])
//					s.max = s.sales[i];
//				else if (s.min > s.sales[i])
//					s.min = s.sales[i];
//			}
//			s.average = total / counter;
//		}
	 }
	 
	 void Sales::showSales()
	 {
	 	for(int i=0;i<QUARTERS;i++)
		 cout<<"Sales are:\n"<<sales[i]<<endl;
		cout<<"average sales : "<<average;
		cout<<"max sales: "<<max;
		cout<<"min sales: "<<min;
	 }
	 
}
