#include <iostream>
#include "queue.h"
#include <cstdlib> 
#include <ctime>
const int MIN_PER_HR=60;

bool newcustomer(double x);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::ios_base;
	std::srand(std::time(0));		//random chushihua
	
	cout<<"Case Study:Bank of Automatic Teller\n";
	cout<<"Enter maximum size of queue: ";
	int qs;
	cin>>qs;
	Queue line(qs);        //initialize 
	
	cout<<"Enter the number of simulation hours: ";
	int hours;
	cin>>hours;
	long cyclelimit=MIN_PER_HR*hours;
	
	cout<<"Enter the average number of customers per hour: ";
	double perhour;
	cin>>perhour;
	double min_per_cust;      //average time between arrivals
	min_per_cust=MIN_PER_HR/perhour;
	
	Item temp;
	long turnaways=0;         //turned away by full queue
	long customers=0;         //joined the queue
	long served=0;           //
	long sum_line=0;		 //line length
	int wait_time=0; 		 //
	long line_wait=0;		 //�ۻ�ʱ��
	
	for(int cycle=0;cycle<cyclelimit;cycle++)
	{
		if(newcustomer(min_per_cust))
		{
			if(line.isfull() )
				turnaways++;
			else
			{
				customers++;
				temp.set(cycle);		//cycle=time of arrival
				line.enqueue(temp);
			}
		}
		if(wait_time<=0&&!line.isempty() )
		{
			line.dequeue(temp);
			wait_time=temp.ptime(); 
			line_wait+=cycle-temp.when() ;
			served++;
		}
		if(wait_time>0)
			wait_time--;
		sum_line+=line.queuecount() ;
	} 
	
	//results
	if (customers>0)
	{
		cout<<"customers accepted: "<<customers<<endl;
		cout<<" customers served: "<<served<<endl;
		cout<<"  turnaways: "<<turnaways<<endl;
		cout<<"average queue size: ";
		cout.precision(2);
		cout.setf(ios_base::fixed,ios_base::floatfield);
		cout<<(double)sum_line/cyclelimit<<endl;
		cout<<" average wait time: "
			<<(double) line_wait/served<<" minutes\n";
	}
	else
		cout<<"No customers!\n";
	cout<<"Done!\n";
	
	return 0;
}
bool newcustomer(double x)
{
	return (std::rand() *x/RAND_MAX<1);
}
