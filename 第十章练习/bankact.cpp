#include<iostream>
#include<cstring>
#include"bankact.h"
//BankAccount::BankAccount()
//{
//	name = "\0";
//	acctnum = "\0";
//	balance = 0.;
//}

BankAccount::BankAccount(const std::string &client,
		   const std::string & num,double bal)   //默认参数不能在这写，要在.h里写 
{
	name=client;
	acctnum=num;
	balance=bal;
}

void BankAccount::show(void) const
{
	using namespace std;
	cout<<"your name is "<<name<<", "<<"account number: "
		<<acctnum<<endl;
	cout<<"your have $ "<<balance<<"in your account.\n";
}
void BankAccount::deposit(double cash)
{
	balance += cash;	
}
void BankAccount::withdraw(double cash)
{
	balance -= cash;
}
