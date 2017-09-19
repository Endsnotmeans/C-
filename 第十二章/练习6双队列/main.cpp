#include <iostream>
#include"queue.h"
#include <cstdlib>  //rand() srand()
#include <ctime>	//time()

const int MIN_PER_HR = 60;
bool newcustomer(double x);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	using std::cin;
	using std::cout;
	using std::endl;
	using std::ios_base;

	std::srand(std::time(0));
	cout << "Case study: Bank of Heather Automatic Teller\n";
	cout << "Enter maximum size of queue: ";
	int qs;
	cin >> qs;
	Queue Line1(qs), Line2(qs);
	cout << "Enter the number of simulation hours: ";
	int hours;
	cin >> hours;
	long cyclelimit = MIN_PER_HR*hours;
	cout << "Enter average number of customers per hour: ";
	double perhour;
	cin >> perhour;
	double min_per_cust;
	min_per_cust = MIN_PER_HR / perhour;

	Item temp;
	long turnaways = 0;
	long customers = 0;
	long served = 0;
	long sum_line = 0;
	int wait_time1 = 0, wait_time2 = 0;
	long line_wait = 0;

	for (int cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_cust))
		{
			if (Line1.isfull() && Line2.isfull())
				turnaways++;
			else if(Line1.queuecount() < Line2.queuecount())
			{
				customers++;
				temp.set(cycle);
				Line1.enqueue(temp);
			}
			else
			{
				customers++;
				temp.set(cycle);
				Line2.enqueue(temp);
			}
		}
		if (wait_time1 <= 0 && !Line1.isempty())
		{
			Line1.dequeue(temp);
			wait_time1 = temp.ptime();
			line_wait += cycle - temp.when();
			served++;
		}
		if (wait_time2 <= 0 && !Line2.isempty())
		{
			Line2.dequeue(temp);
			wait_time2 = temp.ptime();
			line_wait += cycle - temp.when();
			served++;
		}
		if (wait_time1 > 0)
			wait_time1--;
		if (wait_time2 > 0)
			wait_time2--;
		sum_line += Line1.queuecount()+ Line2.queuecount();
	}
	// reporting results
	if (customers > 0)
	{
		cout << "customers accepted: " << customers << endl;
		cout << "    customers served: " << served << endl;
		cout << "               turnaways: " << turnaways << endl;
		cout << " average queue size: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout << (double)sum_line / cyclelimit << endl;
		cout << "   average wait time: " << (double)line_wait / served << " minutes\n";
	}
	else
		cout << "No customers!\n";
	cout << "Done!\n";
	system("pause");
	return 0;
}
bool newcustomer(double x)
{
	return (std::rand()*x / RAND_MAX < 1);
}
