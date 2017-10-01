#include"Port.h"
#include<cstdlib>
#include<string.h> 

Port::Port(const char* br, const char* st, int b)
{
	this->brand = new char[strlen(br) + 1];
	strcpy(this->brand, br);
	strcpy(this->style, st);
	this->bottles = b;
}
Port::Port(const Port& p)
{
	this->brand = new char[strlen(p.brand) + 1];
	strcpy(this->brand, p.brand);
	strcpy(this->style, p.style);
	this->bottles = p.bottles;
}
Port& Port::operator=(const Port& p)
{
	if (this == &p)return *this;
	this->brand = new char[strlen(p.brand) + 1];
	strcpy(this->brand, p.brand);
	strcpy(this->style, p.style);
	this->bottles = p.bottles;
	return *this;
}
Port& Port::operator+=(int b)
{
	this->bottles += b;
	return *this;
}
Port& Port::operator-=(int b)
{
	this->bottles -= b;
	return *this;
}
void Port::show()const
{
	cout << "Brand: " << this->brand << endl;
	cout << "Kind: " << this->style << endl;
	cout << "Bottles: " << this->bottles << endl;
}
ostream& operator<<(ostream& os, const Port& p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles;
	return os;
}
// ==========================================
VintagePort::VintagePort():Port()
{
	nickname = "none";
	year = 0;
}
VintagePort::VintagePort(const char* br, const char* st, int b, const char* nn, int y):Port(br, st, b)
{
	nickname = new char[strlen(nn) + 1];
	strcpy(nickname, nn);
	year = y;
}
VintagePort::VintagePort(const VintagePort& vp):Port(vp)
{
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
}
VintagePort& VintagePort::operator=(const VintagePort& vp)
{
	if (this == &vp)return *this;
	delete[] nickname;
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
	return *this;
}
void VintagePort::show()const
{
	Port::show();
	cout << "NickName: " << nickname << endl;
	cout << "Year: " << year << endl;
}
ostream& operator<<(ostream& os, const VintagePort& vp)
{
	os << vp.nickname << ", " << vp.year;
	return os;
}
