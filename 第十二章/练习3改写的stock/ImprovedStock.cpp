#include"ImprovedStock.h"

ImprovedStock::ImprovedStock()
{
	this->company = new char[1];
	this->company[0] = '\0';
	share_val = 0.;
	total_val = 0.;
}
ImprovedStock::ImprovedStock(const char* co, long n, double pr)
{
	this->company = new char[std::strlen(co) + 1];
	std::strcpy(this->company, co);
	if (n < 0)
	{
		std::cout << "Number of shares can not be negative;" << this->company << " shares set to 0.\n";
		shares = 0;
	}
	else
	{
		shares = n;
		share_val = pr;
		set_total();
	}
}
ImprovedStock::~ImprovedStock()
{
	delete[] this->company;
}
void ImprovedStock::buy(long num, double price)
{
	if (num < 0)std::cout << "Number of shares purchased can't be negative, transaction is aborted.\n";
	else
	{
		shares += num;
		share_val = price;
		set_total();
	}
}
void ImprovedStock::sell(long num, double price)
{
	if (num < 0)std::cout << "Number of shares sold can't be negative, transaction is aborted.\n";
	else if (num > shares)
		std::cout << "You can't sell more than you have, transaction is aborted.\n";
	else
	{
		shares -= num;
		share_val = price;
		set_total();
	}
}
void ImprovedStock::update(double price)
{
	share_val = price;
	set_total();
}
std::ostream& operator<<(std::ostream& os, const ImprovedStock& IS)
{
	os << "Company: " << IS.company << "\n";
	os << "Shares: " << IS.shares << "\n";
	os << "Share_val: " << IS.share_val << "\n";
	os << "Total_val: " << IS.total_val << "\n";
	return os;
}
const ImprovedStock& ImprovedStock::topval(const ImprovedStock& IS)const
{
	if (IS.total_val > this->total_val)return IS;
	else return *this;
}
