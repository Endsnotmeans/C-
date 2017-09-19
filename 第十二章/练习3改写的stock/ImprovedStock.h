#ifndef IMPROVEDSTOCK_H_
#define IMPROVEDSTOCK_H_
#include<iostream>
#include<cstring>
#include<cctype>

class ImprovedStock
{
private:
	char* company;
	int shares;
	double share_val;
	double total_val;
	void set_total() { total_val = shares*share_val; }
public:
	ImprovedStock();
	ImprovedStock(const char*, long n = 0, double pr = 0.);
	~ImprovedStock();
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	const ImprovedStock& topval(const ImprovedStock&)const;
	friend std::ostream& operator<<(std::ostream&, const ImprovedStock&);
};
#endif
