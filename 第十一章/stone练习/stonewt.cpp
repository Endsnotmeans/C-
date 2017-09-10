#include<iostream>
using std::cout;
#include "stonewt.h"

Stonewt::Stonewt(double lbs)		//lbs ��double 
{
	stone=int(lbs)/Lbs_per_stn;
	pds_left=int(lbs)%Lbs_per_stn+lbs-int(lbs) ; //�������ּ�С������
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

//ת������ 
Stonewt::operator int() const
{
	return int(pounds+0.5);     //�Ӹ�0.5���������� 
}

Stonewt::operator double() const
{
	return pounds;
 } 
//��ϰ 
Stonewt Stonewt::operator+(const Stonewt & sw) const
{
	Stonewt temp;
	temp.stone =this->stone +sw.stone;
	temp.pds_left =this->pds_left +sw.pds_left;
	temp.stone +=temp.pds_left /Lbs_per_stn;
	temp.pds_left = int(temp.pds_left) % Lbs_per_stn;
	temp.pounds =this->pounds +sw.pounds;
	
	return temp;
}
Stonewt Stonewt::operator-(const Stonewt & sw) const
{
	Stonewt temp;
	temp.stone =this->stone-sw.stone;
	temp.pds_left =this->pds_left -sw.pds_left;
	temp.stone +=temp.pds_left /Lbs_per_stn;
	temp.pds_left = int(temp.pds_left) % Lbs_per_stn;
	temp.pounds =this->pounds -sw.pounds;
	
	return temp;
}

Stonewt Stonewt::operator*(double m) const
{
	return Stonewt(pounds*m);	
		
}
//Stonewt operator*(double n,const Stonewt &st) 
//{
//	st.stone = this->stone*n;
//	st.pds_left = this->pds_left*n;
//	st.stone += st.pds_left / Lbs_Per_Stn;
//	st.pds_left = int(st.pds_left) % Lbs_Per_Stn;
//	st.pounds = this->pounds*n;
//	return st;
//}
//��ϰ
std::ostream & operator<<(std::ostream & os, const Stonewt & sw) 
{
	os<<sw.stone<<" stone, "<<sw.pds_left<<" poundsleft" <<sw.pounds<<" pounds\n";
	return os;
}

 
