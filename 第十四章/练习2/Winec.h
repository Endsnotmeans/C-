//Winec.h
#pragma once
#ifndef WINEC_H_
#define WINEC_H_
#include<iostream>
#include<string>
#include<valarray>

template<typename Type1, typename Type2>
class Pair
{
private:
	Type1 x;
	Type2 y;
public:
	Pair() :x(0), y(0) {}
	Pair(const Type1 x1, const Type2 x2) :x(x1), y(x2) {}
	~Pair() {}
	Type1 &first() { return x; }
	Type2 &second() { return y; }
	void setFirst(Type1 x1);
	void setSecond(Type2 x2);
};

template<typename Type1, typename Type2>
void Pair<Type1, Type2>::setFirst(Type1 x1)
{
	x = x1;
}
template<typename Type1, typename Type2>
void Pair<Type1, Type2>::setSecond(Type2 x2)
{
	y = x2;
}


// ===================================
class Wine:private std::string, 
           private Pair<std::valarray<int>, std::valarray<int> >
{
private:
	typedef std::valarray<int> ArrayInt;
	typedef Pair<ArrayInt,ArrayInt> PairArray;
	int years;
	//label和data都没有了 
	public:
	Wine():std::string("none"),years(0),PairArray(ArrayInt(),ArrayInt()) {};
	Wine(const char* l, int y, const int yr[], const int bot[]);
	Wine(const char* l, const ArrayInt & yr, const ArrayInt & bot);
	Wine(const char * l, const PairArray & yr_bot);
    Wine(const char * l, int y);
	void GetBottles();
	void Show() const;
	std::string& Label() {return (std::string &) *this;} //原来是return label 
	int sum() const {return PairArray::second().sum();}			//原来的date.换成PairArray:: 
	
};
#endif // !WINEC_H_
