#include<iostream>
using std::cout;
#include "stonewt.h"

Stonewt::Stonewt(double lbs)		//lbs 磅double 
{
	stone=int(lbs)/Lbs_per_stn;
	pds_left=int(lbs)%Lbs_per_stn+lbs-int(lbs) ; //整数部分加小数部分
	pounds=lbs; 
 } 
Stonewt::Stonewt(int stn,double lbs)
{
	stone=stn;
	pds_left=lbs;
	pounds=stn*Lbs_per_stn+lbs; 
 } 
Stonewt::Stonewt() 
{
	stone=pounds=pds_left=0;
}
Stonewt::~Stonewt() 
{
}
void Stonewt::show_stn() const
{
	cout<<stone<<" stone, "<<pds_left<<" pounds\n";
}
void Stonewt::show_lbs() const
{
	cout<<pounds<<" pounds\n";
}
//转换函数 
Stonewt::operator int() const
{
	return int(pounds+0.5);     //加个0.5变四舍五入 
}

Stonewt::operator double() const
{
	return pounds;
 } 
Stonewt::Stonewt operator*(double n)	//乘法重载，利用构造函数、、 
{
	return Stonewt(pounds*n);	
		
}
Stonewt operator*(double n,const Stonewt &st) 
{
	return Stonewt(st.pounds*n);
}
 
