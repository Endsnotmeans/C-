#ifndef STONEWT_H_
#define STONEWT_H_
class Stonewt
{
	private:
		enum{Lbs_per_stn=14};
		int stone;
		double pds_left;
		double pounds;
		char mode;    // display mode for weight
                    // 's' = stone, 'f' = float, 'w' = whole pounds
	public:
		Stonewt(double lbs);
		Stonewt(int stn,double lbs);
		Stonewt();
		~Stonewt();
		void set_mode(char m) {mode = m; }
//		void show_lbs()const;  联系要求用os《《重载来代替 
//		void show_stn()const;
		//转换函数，强制把类对象转换为目标对象
		//反过来的话，一般是默认的
		operator int() const;
		operator double() const; 
		//重载
		Stonewt operator+(const Stonewt & sw) const;
   		Stonewt operator-(const Stonewt & sw) const;
    	Stonewt operator*(double m) const;
    	//友元
//		friend Stonewt operator*(double n,Stonewt &st) ;
		friend std::ostream & operator<<(std::ostream & os, const Stonewt & sw);
 } ;
 #endif
