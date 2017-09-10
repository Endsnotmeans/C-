#include <iostream>
#include "stock2.h"

Stock::Stock()
{
	std::cout<<"Default constructor called\n";
	company="no name";
	shares=0;
	share_val=0.0;
	total_val=0.0;
}
Stock::Stock(const std::string & co,long n,double pr)
{
//	std::strncpy(company,co,29); 如果用char数组，得用strcpy，因为是const 
//	company[29]='\0';
	std::cout<<"Constructor using "<<co<<" called\n";
	company=co; 
	
	if(n<0)
	{
		std::cerr<<"Number of shares can't be negative."
				<<company<<" shares set to 0.\n";
		shares=0;
	}
	else
		shares=n;
	share_val=pr;
	set_tot();
 } 
 Stock::~Stock()			//destructor 
 {
 	std::cout<<"Bye ,"<<company<<"!\n";
 	//随便写点东西表示调用了destructor 
 }
 
 void Stock::buy(long num,double price)
 {
 	if(num<0)
 	{
 		std::cerr<<"Number of shares purchased can't be negative."
 				<<"Transaction is aborted.\n";
 	 }
 	 else
 	 {
 	 	shares+=num;
 	 	share_val=price;
 	 	set_tot();
	  }
 }
 
 void Stock::sell(long num,double price)
 {
 	using std::cerr;
 	if(num<0)
 	{
 		std::cerr<<"Number of shares sold can't be negative."
 				<<"Transaction is aborted.\n";
 	 }
 	 else if(num>shares)
 	 {
 	 	cerr<<"You can't sell more than you have! "
 	 		<<"Transaction is aborted.\n";
 	 }
 	 else
 	 {
 	 	shares-=num;
 	 	share_val=price;
 	 	set_tot();
	  }
 }

void Stock::update(double price)
{
	share_val=price;
	set_tot();
}

void Stock::show() const
{
	using std::cout;
	using std::endl;
	using std::ios_base; //设置格式
	ios_base::fmtflags orig =
		cout.setf(ios_base::fixed,ios_base::floatfield);
	std::streamsize prec=cout.precision(3);
	 
	cout<<"Company: "<<company
		<<" Shares: "<<shares<<endl;
	cout<<" Shares Price: $"<<share_val;
		cout.precision(2);
	cout<<" Total Worth: $"<<total_val<<endl;
	
	cout.setf(orig,ios_base::floatfield);
	cout.precision(prec);
	//重置原始格式 
}

const Stock &Stock::topval(const Stock & s)const
{
	if(s.total_val>total_val)
		return s;
	else
		return *this;
}

//int main(int argc, char** argv) {
//	return 0;
//}
