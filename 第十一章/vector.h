#ifndef VECTOR_H_
#define VECTOR_H_
#include<iostream>
namespace VECTOR		//namespace后面不加分号，class加 
{
	class Vector
	{
	public:
		enum Mode{RECT,POL}; //直角坐标和极坐标 
		private:
			double x;		//x轴的值
			double y;		//y轴的值 
			double mag; 	//向量长度 
			double ang; 	//向量角度 
			Mode mode;
			//私有方法设定值 
			void set_mag();
			void set_ang();
			void set_x();
			void set_y();
		public:
			Vector();
			Vector(double n1,double n2,Mode form=RECT);
			void reset(double n1,double n2,Mode form=RECT);
			~Vector();
			double xval() const{return x;}    //这四个自动成了内联函数 
			double yval() const{return y;}
			double magval() const{return mag;}
			double angval() const{return ang;}
			void polar_mode();
			void rect_mode();
			//操作符重载
			Vector operator+(const Vector &b) const;
			Vector operator-(const Vector &b) const; 
			Vector operator-() const;
			Vector operator*(double n) const;
			//友元函数
			friend Vector operator*(double n,const Vector & a);
			//把这个写成非成员函数，就不用考虑n*vector还是vector*n
			//因为如果写成类成员函数的话，第一个必须是类对象，n不是 
			friend std::ostream &
					operator<<(std::ostream& os,const Vector &v); 
			//同样原因，用友元函数将ostream对象重载 ，是友元的另一个原因： 
			//它直接访问Vector的成员，如果是类成员函数的话，做不到
			//参数是os对象和Vector，cout<<vector即是调用
			//返回的也是个os对象，这样cout<<vector1<<vetor2就可以用了 
			operator double(){return mag;}
			//转换函数没有返回类型，没有参数，但必须返回转换后的值 
	};
 } 
 #endif
