#include<iostream>
//算彩票的概率 
long double probability(unsigned numbers,unsigned picks);	//函数声明 ,分号注意 
int main()
{
	using namespace std;
	double total,choices;
	cout<<"Enter the total num of choices and \n"
		<<"the num of picks allowed: ";
	while((cin>>total>>choices)&&choices<=total)
	{
		cout<<"You have one chance in ";
		cout<<probability(total,choices);
		cout<<" of winning.\n";
		cout<<"Next two num(q to quit): ";
	}
	cout<<"bye\n";
	return 0;
 } 
 long double probability(unsigned numbers,unsigned picks)
 {
 	long double result=1.0;
 	long double n;
 	unsigned p;
 	
 	for(n=numbers,p=picks;p>0;n--,p--)
 		result=result*n/p;		//(51/4)*(50/3)*(49/2)*(48/1)
 	return result;
  } 
