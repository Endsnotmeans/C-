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
	Type1 first() const { return x; }
	Type2 second() const { return y; }
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
class Wine
{
private:
	typedef std::valarray<int> ArrayInt;
	typedef Pair<ArrayInt,ArrayInt> PairArray;
	std::string label;
	int years;
	PairArray data;
public:
	Wine():label("none"),years(0),data(ArrayInt(),ArrayInt()) {};
	Wine(const char* l, int y, const int yr[], const int bot[]);
	Wine(const char* l, const ArrayInt & yr, const ArrayInt & bot);
	Wine(const char * l, const PairArray & yr_bot);
    Wine(const char * l, int y);
	void GetBottles();
	void Show() const;
	const std::string& Label() {return label;}
	int sum() const {return data.second().sum();}
	
};
#endif // !WINEC_H_
