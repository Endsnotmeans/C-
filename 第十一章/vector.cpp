#include <cmath>
#include"vector.h"
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;  //接受1个参数， 
using std::atan2; //接受y和x，分别为两个点纵坐标的差和横坐标的差 
using std::cout;

namespace VECTOR
{
	const double Rad_to_deg=45.0/atan(1.0);
	//计算弧度转角度
	//private方法
	void Vector::set_mag()	//x，y到极坐标 
	{
		mag=sqrt(x*x+y*y);
	}
	void Vector::set_ang()
	{
		if(x==0.0&&y==0.0)
			ang=0.0;
		else
			ang=atan2(y,x);
	}
	void Vector::set_x()	//极坐标到x，y 
	{
		x=mag*cos(ang);
	}
	void Vector::set_y()
	{
		y=mag*sin(ang);
	 } 
	//publice方法
	Vector::Vector()
	{
		x=y=mag=ang=0.0;
		mode=RECT;
	}
	Vector::Vector(double n1,double n2,Mode form)//constructor   //默认值不写这里 
	{
		mode=form;
		if(form==RECT)
		{
			x=n1;
			y=n2;
			set_mag();
			set_ang();
		}
		else if(form==POL)
		{
			mag=n1;
			ang=n2/Rad_to_deg;
			set_x();
			set_y();			
		}
		else	//模式不属直角坐标或极坐标，错误，重置为零 
		{
			cout<<"Incorrect 3rd argument to Vector() --";
			cout<<"vector set to 0\n";
			x=y=mag=ang=0.0;
			mode=RECT;
		}
	}
	
	void Vector::reset(double n1,double n2,Mode form) //重置函数
	{
		mode=form;
		if(form==RECT)
		{
			x=n1;
			y=n2;
			set_mag();
			set_ang();
		}
		else if(form==POL)
		{
			mag=n1;
			ang=n2/Rad_to_deg;
			set_x();
			set_y();			
		}
		else	//模式不属直角坐标或极坐标，错误，重置为零 
		{
			cout<<"Incorrect 3rd argument to Vector() --";
			cout<<"vector set to 0\n";
			x=y=mag=ang=0.0;
			mode=RECT;
		}
	 } 
	
	Vector::~Vector()
	{
	}
	
	void Vector::polar_mode()  //切换为极坐标模式
	{
		mode=POL;
	 } 
	void Vector::rect_mode()	//切换为直角坐标模式 
	{
		mode=RECT;
	}
	//操作符重载
	Vector Vector::operator+(const Vector &b) const
	{
		return Vector(x+b.x,y+b.y);
	}
	Vector Vector::operator-(const Vector &b) const
	{
		return Vector(x-b.x,y-b.y);
	}	
	Vector Vector::operator-() const
	{
		return Vector(-x,-y);
	}
	Vector Vector::operator*(double n) const
	{
		return Vector(n*x,n*y);
	}
	//友元函数,不用再声明friend了 
	Vector operator*(double n,const Vector & a)
	{
		return a*n; 
	}
	std::ostream &operator<<(std::ostream& os,const Vector &v)
	{
		if(v.mode==Vector::RECT)
			os<<"(x,y)=(" << v.x<< ", "<< v.y <<")";
		else if(v.mode==Vector::POL )
		{
			os<<"(m,a)=(" <<v.mag<<", "
				<<v.ang*Rad_to_deg<<") ";
		}
		else
			os<<"Vector object mode is invalid";
		return os;
	}
}
