#include<iostream>
#include"Move.h"

Move::Move(double a, double b)
{
	x = a;
	y = b;
}
void Move::showMove()const
{
	using std::cout;
	using std::endl;
	cout << "x: " << x << "   " << "y: " << y << endl;
}
Move Move::add(const Move& m)const
{
	Move move;
	move.x = this->x + m.x;
	move.y = this->y + m.y;
	return move;
}
void Move::reset(double a, double b)
{
	x = a;
	y = b;
}
Move Move::operator+(const Move& m)const
{
	Move move;
	move.x = this->x + m.x;
	move.y = this->y + m.y;
	return move;
}
