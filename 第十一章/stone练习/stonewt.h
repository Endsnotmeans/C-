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
//		void show_lbs()const;  ��ϵҪ����os�������������� 
//		void show_stn()const;
		//ת��������ǿ�ư������ת��ΪĿ�����
		//�������Ļ���һ����Ĭ�ϵ�
		operator int() const;
		operator double() const; 
		//����
		Stonewt operator+(const Stonewt & sw) const;
   		Stonewt operator-(const Stonewt & sw) const;
    	Stonewt operator*(double m) const;
    	//��Ԫ
//		friend Stonewt operator*(double n,Stonewt &st) ;
		friend std::ostream & operator<<(std::ostream & os, const Stonewt & sw);
 } ;
 #endif
