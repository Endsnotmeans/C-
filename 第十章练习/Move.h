#ifndef MOVE_H_
#define MOVE_H_

class Move
{
private:
	double x, y;
public:
	Move(double a = 0, double b = 0);
        ~Move(){}
	void showMove()const;
	Move add(const Move& m)const;
	void reset(double a = 0, double b = 0);
	Move operator+(const Move& m)const;
};
#endif // !MOVE_H_
