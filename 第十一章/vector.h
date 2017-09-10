#ifndef VECTOR_H_
#define VECTOR_H_
#include<iostream>
namespace VECTOR		//namespace���治�ӷֺţ�class�� 
{
	class Vector
	{
	public:
		enum Mode{RECT,POL}; //ֱ������ͼ����� 
		private:
			double x;		//x���ֵ
			double y;		//y���ֵ 
			double mag; 	//�������� 
			double ang; 	//�����Ƕ� 
			Mode mode;
			//˽�з����趨ֵ 
			void set_mag();
			void set_ang();
			void set_x();
			void set_y();
		public:
			Vector();
			Vector(double n1,double n2,Mode form=RECT);
			void reset(double n1,double n2,Mode form=RECT);
			~Vector();
			double xval() const{return x;}    //���ĸ��Զ������������� 
			double yval() const{return y;}
			double magval() const{return mag;}
			double angval() const{return ang;}
			void polar_mode();
			void rect_mode();
			//����������
			Vector operator+(const Vector &b) const;
			Vector operator-(const Vector &b) const; 
			Vector operator-() const;
			Vector operator*(double n) const;
			//��Ԫ����
			friend Vector operator*(double n,const Vector & a);
			//�����д�ɷǳ�Ա�������Ͳ��ÿ���n*vector����vector*n
			//��Ϊ���д�����Ա�����Ļ�����һ�������������n���� 
			friend std::ostream &
					operator<<(std::ostream& os,const Vector &v); 
			//ͬ��ԭ������Ԫ������ostream�������� ������Ԫ����һ��ԭ�� 
			//��ֱ�ӷ���Vector�ĳ�Ա����������Ա�����Ļ���������
			//������os�����Vector��cout<<vector���ǵ���
			//���ص�Ҳ�Ǹ�os��������cout<<vector1<<vetor2�Ϳ������� 
			operator double(){return mag;}
			//ת������û�з������ͣ�û�в����������뷵��ת�����ֵ 
	};
 } 
 #endif
