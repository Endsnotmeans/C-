#ifndef IMPROVEDSTRING_H_
#define IMPROVEDSTRING_H_
#include<iostream>
#include<cstring>
#include<cctype>

class ImprovedString
{
private:
	char* str;
	int len;
	static int num_string;
	static const int CINLIM = 80;
public:
	// constructors and others methods
	ImprovedString(const char* );
	ImprovedString();
	ImprovedString(const ImprovedString&);
	~ImprovedString();
	int length()const { return len; }
	// overloaded operators and methods
	ImprovedString& operator=(const ImprovedString&);
	ImprovedString& operator=(const char*);
	ImprovedString operator+(const ImprovedString&);
	ImprovedString operator+(const char*);
	ImprovedString& stringLow();
	ImprovedString& stringUpper();
	int hasChar(char)const;
	char& operator[](int i);
	// overloaded operator friends
	friend bool operator<(const ImprovedString&, const ImprovedString&);
	friend bool operator>(const ImprovedString&, const ImprovedString&);
	friend bool operator==(const ImprovedString&, const ImprovedString&);
	friend std::ostream& operator<<(std::ostream&, const ImprovedString&);
	friend std::istream& operator>>(std::istream&, ImprovedString&);
	friend ImprovedString operator+(char*, const ImprovedString&);
	// static function
	static int HowMany();
};
#endif
