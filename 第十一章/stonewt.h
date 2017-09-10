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
		//ת��������ǿ�ư������ת��ΪĿ�����
		//�������Ļ���һ����Ĭ�ϵ�
		operator int() const;
		operator double() const; 
		//����
		Stonewt operator*(Stonewt & st,double n) ;
		//��Ԫ
		friend Stonewt operator*(double n,Stonewt &st) ;
 } ;
 #endif
