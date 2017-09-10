#ifndef STONEWT_H_
#define STONEWT_H_
class Stonewt
{
	private:
		enum{Lbs_per_stn=14};
		int stone;
		double pds_left;
		double pounds;
	public:
		Stonewt(double lbs);
		Stonewt(int stn,double lbs);
		Stonewt();
		~Stonewt();
		void show_lbs()const;
		void show_stn()const;
		//转换函数，强制把类对象转换为目标对象
		//反过来的话，一般是默认的
		operator int() const;
		operator double() const; 
		//重载
		Stonewt operator*(Stonewt & st,double n) ;
		//友元
		friend Stonewt operator*(double n,Stonewt &st) ;
 } ;
 #endif
