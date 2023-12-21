#pragma once

#include <iostream>
class Mystring
{
private:
	friend std::ostream& operator<<(std::ostream& os, const Mystring& rhs);
	friend std::istream& operator>>(std::istream& in, Mystring& rhs);

	char* str;

public:
	Mystring();
	Mystring(const char* s);
	Mystring(const Mystring& source);
	~Mystring();
	Mystring& operator=(const Mystring& rhs);
	Mystring& operator=(Mystring&& rhs) noexcept;
	Mystring operator+(const Mystring& rhs) const;
	Mystring operator-() const;
	bool operator==(const Mystring& rhs) const;

	void display() const;
	int get_lenth() const;
	const char* get_str() const;
};