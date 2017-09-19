#include <iostream>
#include "brass.h"
using std::cout;
using std::endl;
using std::string;

typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat();
void restore(format f, precis p);

//Brass methods
Brass::Brass(const string &s,long an,double bal)
{
	fullName=s;
	acctNum=an;
	balance=bal;
}
void Brass::Deposit(double amt)
{
	if(amt<0)
		cout<<"Negative deposit not allowed."
			<<"deposit is cancelled.\n";
	else
		balance+=amt;
 } 
void Brass::Withdraw(double amt) //虚方法 ，关键字virtual只出现在声明中 
{	
	//设定格式
	format initialState=setFormat();
	precis prec=cout.precision(2);
	
	if(amt<0)
		cout<<"Withdrawal amount must positive;"
			<<"Withdrawal canceled.\n";
	else if(amt<=balance)
		balance -=amt;
	else
		cout<<"Withdrawal amount of $"<<amt
			<<" exceeds your balance.\n"
			<<"Withdrawal canceled.\n";
	restore(initialState,prec);                //重置格式 
	//设置格式后，如无上行，下面都将是设置的格式 
}
double Brass::Balance() const
{
	return balance;
}
void Brass::ViewAcct() const		//虚方法 
{
	//设定格式
	format initialState=setFormat();
	precis prec=cout.precision(2);
	cout<<"Client: "<<fullName<<endl;
	cout<<"Account Number: "<<acctNum<<endl;
	cout<<"Balance: $"<<balance<<endl;
	restore(initialState,prec);   				//重置格式 
}

//BrassPlus methods
BrassPlus::BrassPlus(const string & s, long an,
		double bal,double ml, double r):Brass(s,an,bal)		//必须用初始化列表语法
															//因为不能直接访问基类的私有数据 
{
	maxLoan=ml;
	owesBank=0.0;
	rate=r;
}
BrassPlus::BrassPlus(const Brass & ba,double ml,double r)	//但是非构造函数不能使用初始化列表语法 
				:Brass(ba)			//隐式复制构造函数
{
	maxLoan=ml;
	owesBank=0.0;
	rate=r;	
}
	//虚方法 重新定义 
void BrassPlus::ViewAcct() const
{
	//设定格式
	format initialState=setFormat();
	precis prec=cout.precision(2);
	
	Brass::ViewAcct() ;			//display base portion 派生类可使用公有的基类方法
	//上行，必须使用作用域解析运算符，不然，递归了。 
	cout<<"Maximum loan: $ "<<maxLoan<<endl;
	cout<<"Owed to bank: $ "<<owesBank<<endl;
	cout.precision(3);
	cout<<"Loan Rate: "<<100*rate<<" %\n";
	restore(initialState,prec);   				//重置格式
}			
void BrassPlus::Withdraw(double amt)			//虚方法
 {
 	format initialState=setFormat();
	precis prec=cout.precision(2);
	
	double bal=Balance();
	if(amt<=bal)
		Brass::Withdraw(amt);
	else if(amt<=bal+maxLoan-owesBank)
	{
		double advance=amt-bal;
		owesBank+=advance*(1.0+rate);
		cout<<"Bank advance: $"<<advance<<endl;
		cout<<"Finance charge: $"<<advance*rate<<endl;
		Deposit(advance);
		Brass::Withdraw(amt); 
	 } 
	else
		cout<<"Credit limit exceeded.Transaction cancelled.\n";
	restore(initialState,prec);  
 }
format setFormat()
{
	return cout.setf(std::ios_base::fixed,
					std::ios_base::floatfield);
}
void restore(format f,precis p)
{
	cout.setf(f,std::ios_base::floatfield);
	cout.precision(p);
}
      			
