//file1.cpp
#include"ImprovedString.h"

using std::cin;
using std::cout;
int ImprovedString::num_string = 0;
int ImprovedString::HowMany()
{
	return num_string;
}
ImprovedString::ImprovedString(const char* s)
{
	this->len = std::strlen(s);
	this->str = new char[this->len + 1];
	std::strcpy(this->str, s);
	this->num_string++;
}
ImprovedString::ImprovedString()
{
	this->len = 4;
	this->str = new char[1];
	this->str[0] = '\0';
	this->num_string++;
}
ImprovedString::ImprovedString(const ImprovedString& st)
{
	this->len = st.len;
	this->str = new char[this->len + 1];
	std::strcpy(this->str, st.str);
	this->num_string++;
}
ImprovedString::~ImprovedString()
{
	--this->num_string;
	delete[] this->str;
}
ImprovedString& ImprovedString::operator=(const ImprovedString& st)
{
	if (this == &st)return *this;
	else
	{
		delete[] this->str;
		this->len = st.len;
		this->str = new char[this->len + 1];
		std::strcpy(this->str, st.str);
		return *this;
	}
}
ImprovedString& ImprovedString::operator=(const char* s)
{
	delete[] this->str;
	this->len = std::strlen(s);
	this->str = new char[this->len + 1];
	std::strcpy(this->str, s);
	return *this;
}
char& ImprovedString::operator[](int i)
{
	return this->str[i];
}
bool operator<(const ImprovedString& st1, const ImprovedString& st2)
{
	return (std::strcmp(st1.str, st2.str) < 0);
}
bool operator>(const ImprovedString& st1, const ImprovedString& st2)
{
	return st2 < st1;
}
bool operator==(const ImprovedString& st1, const ImprovedString& st2)
{
	return (std::strcmp(st1.str, st2.str) == 0);
}
std::ostream& operator<<(std::ostream& os, const ImprovedString& st)
{
	os << st.str;
	return os;
}
std::istream& operator>>(std::istream& is, ImprovedString& st)
{
	char temp[ImprovedString::CINLIM];
	is.get(temp, ImprovedString::CINLIM);
	if (is)
		st = temp;
	while (is&&is.get() != '\n')
		continue;
	return is;
}
ImprovedString ImprovedString::operator+(const ImprovedString& st)    //合并一个新字符串 
{
	ImprovedString ims;									//声明 
	ims.len = this->len + st.len;
	ims.str = new char[ims.len + 1];					//分配空间 
	std::strcat(std::strcpy(ims.str, this->str), st.str);
	return ims;
}
ImprovedString ImprovedString::operator+(const char* s)
{
	ImprovedString ims;
	ims.len = this->len + std::strlen(s);
	ims.str = new char[ims.len + 1];
	std::strcat(std::strcpy(ims.str, this->str), s);
	return ims;
}
ImprovedString operator+(char* s, const ImprovedString& st)
{
	ImprovedString ims;
	ims.len = st.len + std::strlen(s);
	ims.str = new char[ims.len + 1];
	std::strcat(std::strcpy(ims.str, s), st.str);
	return ims;
}
ImprovedString& ImprovedString::stringLow()			//所有大写转小写 
{
	for (int in = 0; in < this->len; in++)
		if (std::isupper(this->str[in]))
			this->str[in] = std::tolower(this->str[in]);
	return *this;
}
ImprovedString& ImprovedString::stringUpper()		//所有小写转大写 
{
	for (int in = 0; in < this->len; in++)
		if (std::islower(this->str[in]))
			this->str[in] = std::toupper(this->str[in]);
	return *this;
}
int ImprovedString::hasChar(char c)const			//返回一个char在字符串中出现的次数 
{
	int counter = 0;
	for (int in = 0; in < this->len; in++)
		if (this->str[in] == c)
			counter++;
	return counter;
}
